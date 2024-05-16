#include <Wire.h>

//need an id to use for the peripheral/slave
const byte M1_ADDR = 1;
//need an id to use for the peripheral/slave
const byte MESSAGE_SIZE = 1;

byte m1Msg = 99;

void setup() {


  //initialize Wire library
  Wire.begin();

  Serial.begin(9600);
}

void loop() {
  delay(50);

  //request a transmission with this id and message size
  Wire.requestFrom(M1_ADDR, MESSAGE_SIZE);

  /*
    while more bytes of the message are available to
    do the following. This is needed as the
    peripheral/slave may send less than requested
  */
  while (Wire.available()) {
    //read the transmission and save it to the blinkSpeed variable
    m1Msg = Wire.read();
    Serial.println(m1Msg);
  }
  if (m1Msg == 0) {
    Serial.println("boom");
  } else if (m1Msg == 1) {
    Serial.println("safe");
  } else {
    //99
  }
}
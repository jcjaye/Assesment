#include <Wire.h>

//need an id to use for the peripheral/slave
const byte M1_ADDR = 1;

const byte wire1 = 1;  //TEACHER COMMENT you are wired to 5,6,7
const byte wire2 = 2;
const byte wire3 = 3;

int msgVal = 0;


void setup() {

  Serial.begin(9600);
  pinMode(wire1, INPUT);
  pinMode(wire2, INPUT);
  pinMode(wire3, INPUT);

  //initialize Wire library with this id
  Wire.begin(M1_ADDR);
  //when you hear a request run this method
  Wire.onRequest(requestEvent);
}


void loop() {

  //if the wire is cut the wirestate is HIGH
  //TEACHER COMMENT im not sure about that but we can test and find out

  if (digitalRead(wire1) == LOW) {
    //send lose signal"
    Serial.println("lose");
    msgVal = 0;  //0=loss 1 = win
  }
  if (digitalRead(wire2) == LOW) {
    //send win signal"
    Serial.println("win");
    msgVal = 1;  //0=loss 1 = win
  }
  if (digitalRead(wire3) == LOW) {
    //send lose signal"
    Serial.println("lose");
    msgVal = 0;  //0=loss 1 = win
  }
}

/*
  run this method when the controller/master sends a transmission
*/
void requestEvent() {
  //reply to the transmission request with this message
  Wire.write(msgVal);
  Serial.println(msgVal);
}

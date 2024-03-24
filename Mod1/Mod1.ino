const byte wire1 = 1;
const byte wire2 = 2;
const byte wire3 = 3;
voide setup() {

Serial.begin(9600);
pinMode(wire1, INPUT);
pinMode(wire2, INPUT);
pinMode(wire3, INPUT);
}

Void loop() {

  int wirestate = digitalRead(wire1);
  Serial.println(wirestate);
  
  //if the wire is cut the wirestate is HIGH

  if (digitalRead(wire1) == LOW) {
    //send lose signal"
    Serial.println("lose");
  }
    if (digitalRead(wire2) == LOW) {
    //send win signal"
    Serial.println("win");
  }
    if (digitalRead(wire3) == LOW) {
    //send lose signal"
    Serial.println("lose");
  }
}

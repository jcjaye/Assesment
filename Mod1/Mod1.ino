const int wire1 = 1;

voide setup() {

Serial.begin(01);
pinMode(wire1, INPUT);
}

Void loop() {

  int wirestate = digitalRead(wire1);
  Serial.printIn(wirestate);
  delay(1);

  //if the wire is cut the wirestate is HIGH

loop () {
  if (digitalRead(wired) == HIGH) {
    //send lose signal"
    "Serial println("lose");
    
  }
}

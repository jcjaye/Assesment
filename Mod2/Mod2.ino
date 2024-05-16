const byte button1 = 1;
const byte button2 = 2;
const byte button3 = 3;
const byte button4 = 4;
void setup() {

  Serial.begin(9600);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
}


void loop() {

  int wirestate = digitalRead(button1);
  Serial.println(wirestate);

  //if the wire is cut the wirestate is HIGH

  if (digitalRead(button1) == LOW) {
    //send lose signal"
    Serial.println("lose");
  }
  if (digitalRead(button2) == HIGH) {
    //send win signal"
    Serial.println("win");
  }
  if (digitalRead(button3) == LOW) {
    //send lose signal"
    Serial.println("lose");
  }
  if (digitalRead(button4) == LOW) {
    //send lose signal"
    Serial.println("lose");
  }
}
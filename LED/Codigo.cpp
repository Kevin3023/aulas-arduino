// C++ code
//
void setup()
{
  pinMode(6, OUTPUT);
  pinMode(10, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(10) == 0){
    digitalWrite(6, HIGH);
    delay(2000);
    digitalWrite(6, LOW);
  }
}

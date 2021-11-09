// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(6, INPUT);
}

void loop()
{
  if (digitalRead(6) == 1){
    tone (3, 350, 300);
    digitalWrite(2, HIGH);
    delay(500);
  }

  else {
    digitalWrite(2, LOW);
  }
}

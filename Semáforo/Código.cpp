// C++ code
//
void setup()
{
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(6, HIGH);
  delay (2000);
  digitalWrite(6, LOW);
  digitalWrite(11, HIGH);
  delay(3000);
  digitalWrite(11, LOW);
  digitalWrite(8, HIGH);
  delay(2000);
  digitalWrite(8, LOW);
}

#include<LiquidCrystal.h> // inclui biblioteca para uso de LCD
const int RS = 2, E = 3, DB4 = 9, DB5 = 10, DB6 = 11, DB7 = 12;

LiquidCrystal lcd(RS, E, DB4, DB5, DB6, DB7);//INST‚NCIA DE OBJETO "LCD" DA CLASSE liquidcrystal

#define sensorTemperatura A0

float Temperatura = 0.0;

void setup()
{
  pinMode(sensorTemperatura, INPUT);
  
  lcd.begin(16, 2);
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("SIST. INFORMACAO");
  
  Temperatura = analogRead(sensorTemperatura)*500.00;
  
  Temperatura = Temperatura / 1023.0;
  
  lcd.setCursor(0,1);
  lcd.print("Temp. = ");
  lcd.print(Temperatura - 49.78);
  delay(500);
}
#include <Servo.h> 

//-------------------

#define potBase A0

#define potAvanco A1

#define potElevacao A2

#define potGarra A3

//agora os motores

#define pinSerBase 2

#define pinSerAvanco 3

#define pinSerElevacao 4

#define pinSerGarra 5

// declarações agora e objetos para controle

Servo SerBase, SerAvanco, SerElevacao, SerGarra;

int angSerBase, angSerAvanco, angSerElevacao, angSerGarra;

void setup()
{
  //confguração dos pinos como entradas/saidas
  //potenciômetros
  pinMode(potBase, INPUT);
  pinMode(potAvanco, INPUT);
  pinMode(potElevacao, INPUT);
  pinMode(potGarra, INPUT);
  //servos motores
  pinMode(pinSerBase, OUTPUT);
  pinMode(pinSerAvanco, OUTPUT);
  pinMode(pinSerElevacao, OUTPUT);
  pinMode(pinSerGarra, OUTPUT);
  
  //iniciação do monitor serial
  	Serial.begin(9600);
  
  //atribuição de pinos dos servos
  SerBase.attach(pinSerBase);
  SerAvanco.attach(pinSerAvanco);
  SerElevacao.attach(pinSerElevacao);
  SerGarra.attach(pinSerGarra);
}

void loop()
{
  angSerBase = analogRead(potBase);
  angSerAvanco = analogRead(potAvanco);
  angSerElevacao = analogRead(potElevacao);
  angSerGarra = analogRead(potGarra);
  angSerBase = map(analogRead(potBase),0,1023,0,180);
  angSerAvanco = map(analogRead(potAvanco),0,1023,0,180);
  angSerElevacao = map(analogRead(potElevacao),0,1023,0,180);
  angSerGarra = map(analogRead(potGarra),0,1023,0,180);
  
  //posicionamento dos eixos dos potenciometros
  SerBase.write(angSerBase);
  SerAvanco.write(angSerAvanco);
  SerElevacao.write(angSerElevacao);
  SerGarra.write(angSerGarra);
  
  Serial.println("******************");
  Serial.print("PotB:");
  Serial.print(analogRead(potBase));
  Serial.print(" AngB:");
  Serial.println(angSerBase);
  
  Serial.print("PotA:");
  Serial.print(analogRead(potAvanco));
  Serial.print(" AngA:");
  Serial.println(angSerAvanco);
  
  Serial.print("PotE:");
  Serial.print(analogRead(potElevacao));
  Serial.print(" AngE:");
  Serial.println(angSerElevacao);
  
  Serial.print("PotG:");
  Serial.print(analogRead(potGarra));
  Serial.print(" AngG:");
  Serial.println(angSerGarra);
}
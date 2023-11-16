#include <Servo.h>

Servo ship1;
const int ship1_led = 13;
#define PHOTORESISTOR_PIN A0

Servo ship2;
const int ship2_led = 12;
#define PHOTORESISTOR_PIN2 A1

int threshold = 400;

void setup()
{
  ship1.attach(11, 300, 300);
  pinMode(ship1_led,OUTPUT);

  ship2.attach(10,300,300);
  pinMode(ship2_led,OUTPUT);

    
  
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop()
{

 bool game = true;
 while(game){
   int lux = analogRead(PHOTORESISTOR_PIN);
   int seconds = random(1000, 1000); // Delayed for 3 - 10 seconds
   Serial.println(lux);
   bool ship1Dead  = false;
   int x = 0;
   ship1.write(0);
   while(x<seconds){
    lux = analogRead(PHOTORESISTOR_PIN);
    if(lux > threshold)
      {
        ship1Dead = true;
        digitalWrite(ship1_led,LOW);
        x=seconds;
      }
      else 
      {
        digitalWrite(ship1_led,HIGH);
        ship1Dead = false;
      }
    Serial.println(lux);
    delay(1);
    x++;
   }
   ship1.write(75);
   digitalWrite(ship1_led,LOW);
   
    //SHIP 2//
   seconds = random(1000, 1000); // Delayed for 3 - 10 seconds
   int lux2 = analogRead(PHOTORESISTOR_PIN2);
   bool ship2Dead  = false;
   ship2.write(0);
   x = 0;
   while(x<seconds){
     lux2 = analogRead(PHOTORESISTOR_PIN2);
     if(lux2 > threshold)
      {
        ship2Dead = true;
        x=seconds;
        digitalWrite(ship2_led,LOW);
        ship2Dead = false;
      }
      else
      {
        digitalWrite(ship2_led,HIGH);
        ship2Dead = true;
      }
      x++;
      Serial.println(lux2);
      delay(1);
   }
   ship2.write(75);
   digitalWrite(ship2_led,LOW);
 }

}

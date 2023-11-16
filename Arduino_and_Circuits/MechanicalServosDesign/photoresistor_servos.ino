#include <Servo.h>
#define PHOTORESISTOR_PIN A0

Servo my_servo;
int threshold = 400;

void setup()
{
  my_servo.attach(9, 300, 300);
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop()
{

 int lux = analogRead(PHOTORESISTOR_PIN);
 int seconds = random(3000, 10000); // Delayed for 3 - 10 seconds, might need to change depending on game difficulty
 Serial.println(seconds);
 Serial.println(lux);
 bool dead  = false;

if(lux > threshold){
  dead = true;
} else{
  dead = false;
}

    if(dead)
    {
      my_servo.write(0);
      delay(seconds);
      my_servo.write(180);
      dead = false;
    }
    else
    {
      my_servo.write(180);
      dead = true;
    }
}
#include <Servo.h>

unsigned long startMillis;
unsigned long currentMillis;
int lux;
int totalPoint = 0;

Servo ship1;
const int ship1_led = 13;
#define photoresistor_1 A0


Servo ship2;
const int ship2_led = 12;
#define photoresistor_2 A1

Servo ship3;
const int ship3_led = 8;
#define photoresistor_3 A2

Servo ship4;
const int ship4_led = 7;
#define photoresistor_4 A5


int threshold = 400;

void setup() {

 ship1.attach(11,300,300);
  pinMode(ship1_led, OUTPUT);

  ship2.attach(10,300,300);
  pinMode(ship2_led, OUTPUT);

  ship3.attach(5,300,300);
  pinMode(ship3_led, OUTPUT);

  ship4.attach(6,300,300);
  pinMode(ship4_led, OUTPUT);
  

  
  Serial.begin(9600);

while(true){

  currentMillis = millis();  //The time since the aurdino has been activited
  int delay = random(1000,2000); // random delay from 3-7 seconds. 
  int choice = random(1,5);
  Serial.println(choice);

  //Ship 1 pops up
  if(choice == 1){

    ship1.write(0); // brings it to shooting position
    digitalWrite(ship1_led, HIGH); // turns on LED

    while( millis() <= currentMillis + delay ){

       lux = analogRead(photoresistor_1);

        if(lux > threshold){

          Serial.print("add Point");
          ship1.write(75);
          digitalWrite(ship1_led, LOW);
          break;
        }
    }  

    ship1.write(75);
    digitalWrite(ship1_led,LOW);

  } 
  
  if (choice == 2){

    ship2.write(75); // brings to shooting pos
    digitalWrite(ship2_led, HIGH); // turns on LED
    
    while(millis() <= currentMillis + delay){
      
        lux = analogRead(photoresistor_2);

        if(lux > threshold){
          Serial.print("add Point");
          ship2.write(0);
          digitalWrite(ship2_led, LOW);
          break;
        }
    }
        ship2.write(0);
        digitalWrite(ship2_led, LOW);

  } 
  
  if(choice == 3){

    ship3.write(0); // brings to shooting pos
    digitalWrite(ship3_led, HIGH); // turns on LED
    
    while(millis() <= currentMillis + delay){
      
        lux = analogRead(photoresistor_3);

        if(lux > threshold){
          Serial.print("add Point");
          ship3.write(75);
          digitalWrite(ship3_led, LOW);
          break;
        }
    }
        ship3.write(75);
        digitalWrite(ship3_led, LOW);
  }

  if(choice == 4){

    ship4.write(75); // brings to shooting pos
    digitalWrite(ship4_led, HIGH); // turns on LED
    
    while(millis() <= currentMillis + delay){
      
        lux = analogRead(photoresistor_4);

        if(lux > threshold){
          Serial.print("add Point");
          ship4.write(0);
          digitalWrite(ship4_led, LOW);
          break;
        }
    }
        ship4.write(0);
        digitalWrite(ship4_led, LOW);
  }

 
}
}

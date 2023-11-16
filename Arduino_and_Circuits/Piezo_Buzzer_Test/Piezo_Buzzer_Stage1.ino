#include "pitches.h"
int piezo_pin = 8;
int threshold = 350;
#define PHOTORESISTOR_PIN A0

void setup() {  
  Serial.begin(9600);
}

void loop() {

  int luminosity = analogRead(PHOTORESISTOR_PIN);
  if(luminosity > threshold){
   tone(piezo_pin, NOTE_D5,300);
   delay(150);
   tone(piezo_pin, NOTE_FS5,300);
   delay(150);
   tone(piezo_pin, NOTE_A5,300); 
  }
  Serial.println(luminosity);
  delay(100);
  }
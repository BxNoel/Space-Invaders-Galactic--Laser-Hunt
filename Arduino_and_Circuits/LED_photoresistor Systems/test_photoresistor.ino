#define PHOTORESISTOR_PIN A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int luminosity = analogRead(PHOTORESISTOR_PIN);
  Serial.println(luminosity);
  delay(100);

}

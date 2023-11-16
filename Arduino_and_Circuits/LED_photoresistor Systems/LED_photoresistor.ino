#define PHOTORESISTOR_PIN A0
int LED = 13;
int LUX_THOLD = 900;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(LED, HIGH);
  int luminosity = analogRead(PHOTORESISTOR_PIN);
  Serial.println(luminosity);
  if (luminosity > LUX_THOLD) {
    digitalWrite(LED, LOW);
    delay(300);
  }
  else {
    digitalWrite(LED, HIGH);
  }

}

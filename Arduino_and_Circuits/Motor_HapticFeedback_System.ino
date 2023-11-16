// use a 100k Ohm Resitors
const int switchPin = 2;
int MOTOR = 6;
int switchState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(MOTOR, OUTPUT);
  pinMode(switchPin, INPUT);
}

void loop() {
  switchState = digitalRead(switchPin);
  Serial.println(switchState);

  if (switchState == 0){
    digitalWrite(MOTOR, HIGH);
  }
  else{
    digitalWrite(MOTOR, LOW);
  }
}

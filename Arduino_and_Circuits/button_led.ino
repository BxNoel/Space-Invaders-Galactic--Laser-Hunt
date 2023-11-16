const int buttonPin = 2;    // the number of the Button pin
const int ledPin = 13;
int buttonState = 0;


// variables will change:
  // variable for reading the pushbutton status

void setup() {
  // initialize the pushbutton pin as an input:
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // read the state of the pushbutton value:
  Serial.println(digitalRead(buttonPin));
  buttonState = digitalRead(buttonPin);

  if(buttonState == HIGH){
    digitalWrite(ledPin, HIGH);
  } else{
    digitalWrite(ledPin, LOW);
  }


}
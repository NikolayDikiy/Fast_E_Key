/*
  Button

 Turns on and off a light emitting diode(LED) connected to digital
 pin 13, when pressing a pushbutton attached to pin 2.


 The circuit:
 * LED attached from pin 13 to ground
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground

 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.


 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin = 13; //the number of the Led pin
const int readyLedPin = 10; //the number of the Led pin
const int chPin1 =  11;      // the number of the Ch1 pin
const int chPin2 =  12;      // the number of the Ch2 pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(readyLedPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(chPin1, OUTPUT);
  pinMode(chPin2, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    digitalWrite(readyLedPin, LOW);
    delay(500);
    digitalWrite(ledPin, HIGH);
    digitalWrite(chPin1, HIGH);
    digitalWrite(chPin1, LOW);
    digitalWrite(chPin2, HIGH);
    digitalWrite(chPin2, LOW);
    delay(2000);
    digitalWrite(ledPin, LOW);
    
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    digitalWrite(chPin1, LOW);
    digitalWrite(chPin2, LOW);
    digitalWrite(readyLedPin, HIGH);
  }
}
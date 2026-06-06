#include <Arduino.h>

const int xPin = A0; // X-axis connected to analog pin A0
const int yPin = A1; // Y-axis connected to analog pin A1
const int buttonPin = 10; // Button connected to digital pin 10
const int ledpins[] = {2, 3, 4}; // Array of LED pins

int getspeed(int counter, int xValue);


void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud rate
  pinMode(buttonPin, INPUT_PULLUP); // Set button pin as input with pull-up resistor
  for (int i = 0; i < 3; i++) {
    pinMode(ledpins[i], OUTPUT); // Set LED pins as outputs
  }
}

void loop() {
  
  static int counter = 0;

  int xValue = analogRead(xPin); // Read the X-axis value
  int yValue = analogRead(yPin); // Read the Y-axis value
  
  counter = getspeed(counter,xValue);
  analogWrite(ledpins[1], counter); // Set the brightness of the first LED based on the counter value
  Serial.println(counter);

}

int getspeed(int counter, int xValue)
{
  const int checkvalue = 10; // Threshold value for adjusting brightness
  static unsigned long lastchecktime = 0;
 
  if (millis() - lastchecktime > 50) // Check every 100 milliseconds
  {
    lastchecktime = millis(); // Update the last check time
    if(xValue > 700)
      {
        if(counter < 255-checkvalue)
        {
          counter += map(xValue, 700, 1023, 1, checkvalue); // Increase brightness
        }
        else
        {
          counter = 255; // Cap the brightness at 255
        }
      }
      else if(xValue < 250)
      {
        if(counter > checkvalue)
        {
          counter -= map(xValue, 250, 0, 1, checkvalue); // Decrease brightness
        }
        else
        {
          counter = 0; // Cap the brightness at 0
        }
      }
  }  
    return counter;
}
#include <Arduino.h>

const int xPin = A0; // X-axis connected to analog pin A0
const int yPin = A1; // Y-axis connected to analog pin A1
const int buttonPin = 10; // Button connected to digital pin 10

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud rate
  pinMode(buttonPin, INPUT_PULLUP); // Set button pin as input with pull-up resistor
}

void loop() {
  int xValue = analogRead(xPin); // Read the X-axis value
  int yValue = analogRead(yPin); // Read the Y-axis value
  int buttonValue = digitalRead(buttonPin); // Read the button value

  // Print the values to the Serial Monitor
  Serial.print("X-axis: ");
  Serial.print(xValue);
  Serial.print(" | Y-axis: ");
  Serial.println(yValue);
  Serial.print("Button: ");
  Serial.println(buttonValue == LOW ? "Pressed" : "Released");

  delay(500); // Delay for half a second before the next reading
}
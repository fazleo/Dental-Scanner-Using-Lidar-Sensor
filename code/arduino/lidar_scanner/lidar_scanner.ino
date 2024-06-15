#include <Arduino.h>
#include <Wire.h>
#include <Servo.h>
#include <TFLI2C.h>

Servo horizontalServo;  // Create a servo object for horizontal movement
Servo verticalServo;    // Create a servo object for vertical movement
TFLI2C tflI2C;

const int numReadings = 10;  // Number of readings for the moving average
int readings[numReadings];   // Readings from the analog input
int readIndex = 0;           // Index of the current reading
int total = 0;               // Running total
int average = 0;             // Average
int16_t tfDist;              // Distance in centimeters

bool isScanning = false;

void setup() {
  Serial.begin(115200);  // Initialize serial port
  Wire.begin();          // Initialize Wire library
  horizontalServo.attach(9);  // Attach horizontal servo to pin 9
  verticalServo.attach(10);   // Attach vertical servo to pin 10

  for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
}

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    if (command == "START") {
      isScanning = true;
    } else if (command == "RESET") {
      isScanning = false;
      // Reset servos to initial position or any other reset logic
      horizontalServo.write(0);
      verticalServo.write(30);
    }
}

 if (isScanning){
  for (int j = 80; j <= 170; j += 2.5)  { // Vertical sweep from 30 to 100 degrees
    verticalServo.write(j);  // Move the vertical servo to angle j
    delay(2);    // Adjust delay as needed for smooth movement
    
    // Perform horizontal sweep for each vertical position
    for (int i = 0; i <= 100; i += 1) { // Horizontal sweep from 0 to 180 degrees with 5-degree increment
      horizontalServo.write(i);  // Move the horizontal servo to angle i
      delay(30);  // Adjust delay as needed for smooth movement
      
      // Read distance data from LIDAR sensor
      if (tflI2C.getData(tfDist, TFL_DEF_ADR)) {
        // Print distance data to serial monitor
        Serial.println(String(i) + "," + String(j) + "," + String(tfDist));
      }
    }
  }
}
}
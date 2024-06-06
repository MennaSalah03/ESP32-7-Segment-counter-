// Include needed libraries
#include "ezButton.h"
#include "SevSeg.h"

SevSeg sevseg; // Creation of a 7-segment object.
ezButton button[3] = {33, 18, 21}; // Creation of button objects.

int counter = 0;
bool buttonPressed = false;

void setup() {
  Serial.begin(9600);
  
  button[0].setDebounceTime(50);
  button[1].setDebounceTime(50);
  button[2].setDebounceTime(50);
  
  
  // Setting up 7-segment display
  byte numDigits = 1;
  byte segmentPins[] = {12, 13, 25, 26, 27, 19, 22, 5}; // DP on which pin ??
  byte digitPins[] = {}; // empty because we have a 1-digit display
  
  sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins, true);
  sevseg.setBrightness(90); // Setting the brightness
  
  sevseg.setNumber(counter);
  sevseg.refreshDisplay();
  delay(500);
}

void loop() {
  button[0].loop();
  button[1].loop();
  button[2].loop();

  if (button[0].isPressed()) {
    if (!buttonPressed) {
      if (counter == 9) {
        counter = 0;
      } else {
        counter++;
      }
      buttonPressed = true;
    }
  } else if (button[1].isPressed()) {
    if (!buttonPressed) {
      if (counter == 0) {
        counter = 9;
      } else {
        counter--;
      }
      buttonPressed = true;
    }
  } else if (button[2].isPressed()) {
    if (!buttonPressed) {
      counter = 0;
      buttonPressed = true;
    }
  } else {
    buttonPressed = false;
  }

  sevseg.setNumber(counter);
  sevseg.refreshDisplay();
  delay(150);
}
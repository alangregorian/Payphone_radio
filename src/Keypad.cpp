/* =====================================================
 * Description: This is a class for connecting with WiFi
 * networks. 
 * 
 * Author: Alan Gregorian
 * Date last edited: 10/3/2021 
 * ====================================================*/

//Inlcudes:
#include <defines.h>
#include <Keypad.h>
#include <Arduino.h>
#include <string.h>

int Keypad::setup_keypad_GPIO() 
{
  for (int i = 0; i < COLS; i++) {
    pinMode(colPins[i], OUTPUT);
    digitalWrite(colPins[i], HIGH);
  }

  for (int i = 0; i < ROWS; i++) {
    pinMode(rowPins[i], INPUT_PULLUP);
  }

    return RETURN_SUCCESS;
}


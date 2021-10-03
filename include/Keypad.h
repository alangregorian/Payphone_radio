/* =====================================================
 * Description: This is a class for connecting with WiFi
 * networks. 
 * 
 * Author: Alan Gregorian
 * Date last edited: 10/3/2021 
 * ====================================================*/

#ifndef KEYPAD_h
#define KEYPAD_h

#define KEY_JUST_RELEASED (0) ///< key has been released
#define KEY_JUST_PRESSED (1)  ///< key has been pressed

class Keypad
{
private:
  //Functions: ---------------------------------------------------------------

  //Variables: ---------------------------------------------------------------

public:
  //Functions: ---------------------------------------------------------------
  int setup_keypad_GPIO(/* args */); 

  //Variables: ---------------------------------------------------------------
  const int ROWS = 4; // rows
  const int COLS = 4; // columns

  //define the symbols on the buttons of the keypads
  char keys[4][4] = {
    {'1','2','3','A'},
    {'4','5','6','B'},
    {'7','8','9','C'},
    {'*','0','#','D'}
  };
  int rowPins[4] = {14, 21, 12, 13}; //connect to the row pinouts of the keypad
  int colPins[4] = {27, 33, 15, 32}; //connect to the column pinouts of the keypad

};

extern Keypad Keypad;

#endif

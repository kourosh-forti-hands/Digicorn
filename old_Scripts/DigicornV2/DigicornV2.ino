#include "DigiKeyboard.h"d
#define KEY_UP_ARROW 0x52
#define KEY_DOWN_ARROW 0x51
#define KEY_LEFT_ARROW 0x50
#define KEY_RIGHT_ARROW 0x4F 
#define KEY_TAB         0x2B

void setup() {
  //Set Pins 0 and 1 as outputs.
  //Some Digisparks have a built-in LED on pin 0, while some have it on
  //pin 1. This way, we can all Digisparks.
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
}


void loop() {
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  int i=0;
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("outlook");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_M);
  DigiKeyboard.delay(200);
  while(i<200){
    DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
    //DigiKeyboard.delay(2000);
    i++;
  }
  i=0;
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_RIGHT);
  //DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);
  DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //DigiKeyboard.delay(1800);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);
  //DigiKeyboard.delay(1800);
  DigiKeyboard.sendKeyStroke(KEY_M);
  //DigiKeyboard.delay(800);
  while(i<200){
    DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
    //DigiKeyboard.delay(2000);
    i++;
  }
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //DigiKeyboard.delay(1800);
  DigiKeyboard.println("ENTER EMAIL HERE");
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.println("I Love Unicorns");
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.println("http://img.freepik.com/free-vector/unicorn-background-design_1324-78.jpg?size=338&ext=jpg");
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(50000);
}

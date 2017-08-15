#include "DigiKeyboard.h"d
// Not all keys appear to be defined in DigiKeyboard.h so I improvised out of laziness
#define KEY_UP_ARROW 0x52 
#define KEY_DOWN_ARROW 0x51
#define KEY_LEFT_ARROW 0x50
#define KEY_RIGHT_ARROW 0x4F 
#define KEY_TAB         0x2B

void setup() {
  // Set Pins 0 and 1 as outputs.
  // Some Digisparks have a built-in LED on pin 0, while some have it on
  // pin 1. This way, this works will all Digisparks.
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
}


void loop() {
  
  int i=0;                                                 // var i is used for counting
  
  digitalWrite(0, LOW);                                    // Using the light as a notification to when the script is done so I can run away
  digitalWrite(1, LOW);                                    // Turns light off on pin 0 & 1
  DigiKeyboard.sendKeyStroke(0);                           // This is generally not necessary but with some older systems it seems to prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);             // Windows key
  DigiKeyboard.delay(800);                                 // I have heard its not consistent to set a delay less than 800 but you could try
  DigiKeyboard.println("outlook");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);     // Works from right to left. So this equals ALT + Space
  DigiKeyboard.sendKeyStroke(KEY_ENTER);                   // ALT+Space Then enter is a fail safe incase the window is maximized
  DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);      
  DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_M);                       // ALT+Space Then M puts the window into move mode. This way we can hide it
  DigiKeyboard.delay(800);
  while(i<200){
    DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);            // Moving the window down
    i++;
  }
  i=0;
  DigiKeyboard.sendKeyStroke(KEY_ENTER);                   // Exiting Move mode 
  
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_RIGHT);    // Creating New Email
  //DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);     // Hiding that shit too
  //DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);
  //DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_M);
  //DigiKeyboard.delay(800);
  while(i<200){
    DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
    i++;
  }
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //DigiKeyboard.delay(800);
  DigiKeyboard.println("<Enter Email Here>");             // I send the email to our group email, but you can put anything here
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.println("I Love Unicorns");                // Subject line
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.println("http://img.freepik.com/free-vector/unicorn-background-design_1324-78.jpg?size=338&ext=jpg"); // Body
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT);// FunFact: CTRL+Enter can send an email 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);                  // Also sometimes it has a pop up so we hit enter just incase.

  digitalWrite(0, HIGH);                                  // Lights go on to tell me to run away 
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(20000);                              // 20sec delay incase I dont get it unplugged but you could remove this and have it loop
}

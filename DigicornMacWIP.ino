#include "DigiKeyboard.h"
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
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);     // Spotlight 
  DigiKeyboard.delay(2000);                                 // I have heard its not consistent to set a delay less than 800 but you could try
  DigiKeyboard.println("outlook");
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // May not be needed
  DigiKeyboard.delay(2000);
  
  
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_GUI_LEFT);    // Creating New Email
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("<Enter Email Here>");             // I send the email to our group email, but you can put anything here
  DigiKeyboard.delay(20000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("I Love Unicorns");                // Subject line
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("http://img.freepik.com/free-vector/unicorn-background-design_1324-78.jpg?size=338&ext=jpg"); // Body
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_GUI_LEFT);// FunFact: CTRL+Enter can send an email 
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);                  // Also sometimes it has a pop up so we hit enter just incase.

  digitalWrite(0, HIGH);                                  // Lights go on to tell me to run away 
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(20000);                              // 20sec delay incase I dont get it unplugged but you could remove this and have it loop
}

/*
 This sketch prints text to the LCD and uses the
 scrollDisplayLeft() and scrollDisplayRight() methods to scroll
 the text.
*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 1);
  // Print a message to the LCD.
  lcd.print("Hello, World! I am a Software Engineer currently looking for a job.");
  delay(100);
}

void loop() {
  // scroll 13 positions (string length) to the left
  // to move it offscreen left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(200);

  // delay at the end of the full loop:
  delay(150);
}


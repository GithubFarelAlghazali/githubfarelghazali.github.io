#include <LiquidCrystal_I2C.h>
int lcdCol = 16;
int lcdRow = 2;
LiquidCrystal_I2C lcd(0x27, lcdCol, lcdRow);
String Static = "Berhasil cuyy";
String Scrolling = "Aloooo";

// scrolling text function
void scrollText(int row, String message, int delayTime, int lcdCol) {
  // add space on message
  for (int i=0; i < lcdCol; i++) {
    message = " " + message;
  }
  message = message + " ";
  // setcursor of lcd according to message and add 1 columns every delaytime
  for (int pos = 0; pos < message.length(); pos++) {
    lcd.setCursor(0, row);
    lcd.print(message.substring(pos, pos + lcdCol));
    delay(delayTime);
  }
}

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  // static text
  lcd.setCursor(0, 0);
  lcd.print(Static);
  // run scrolling function
  scrollText(1, Scrolling, 255, lcdCol);
}

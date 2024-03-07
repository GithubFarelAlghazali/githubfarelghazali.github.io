#include <DHT.h>
#include <LiquidCrystal_I2C.h>
int lcdCol = 16;
int lcdRow = 2;

DHT dht(23, DHT22);
LiquidCrystal_I2C lcd(0x27, lcdCol, lcdRow);

void setup() {
  dht.begin();
  lcd.init();
  lcd.backlight();
  delay(2000);
}

void loop() {
  float temp =dht.readTemperature();
  float humidity = dht.readHumidity();
  lcd.setCursor(0, 0);
  lcd.print("Suhu: ");
  lcd.print(temp);
  lcd.print(" C ");
  lcd.setCursor(0, 1);
  lcd.print("Kelembapan: ");
  lcd.print(humidity);
  lcd.print(" % ");
  delay(500);
}

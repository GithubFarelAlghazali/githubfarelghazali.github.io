#include <DHT.h>

DHT dht(23, DHT22);

void setup() {
  // put your setup code here, to run once:
  dht.begin();
  delay(2000);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();
  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print(" C ");
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" % ");
  delay(500);
}

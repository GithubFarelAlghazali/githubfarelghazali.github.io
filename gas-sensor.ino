int AO = 23;
void setup() {
  Serial.begin(9600);
  // pinMode(AO, INPUT);

  Serial.println("Memanaskan sensor MQ2");
  delay(20000);
}

void loop() {
  int gasValue = analogRead(AO);

  Serial.print("MQ2 sensor AO value: ");
  Serial.println(gasValue);
}

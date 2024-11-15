double timm = 1000;
double dut = 0.15;
void setup() {
  pinMode(4, OUTPUT);
  pinMode(13, OUTPUT);
}
void loop() {
  digitalWrite(4, HIGH);
  digitalWrite(13, HIGH);
  delay(timm*dut);
  digitalWrite(4, LOW);
  digitalWrite(13, LOW);
  delay(timm*(1-dut));
}

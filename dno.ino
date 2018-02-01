int pwm = 8;

void setup() {
  pinMode(pwm, OUTPUT);

}

void loop() {
  analogWrite(pwm, 50);

}

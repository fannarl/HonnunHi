void setup() {

void loop() {
/*forward*/
if(digitalRead(LS1)&& digitalRead(RS1))
{
  analogWrite(pwm1, 180);
  digitalWrite(M1F, HIGH);
  digitalWrite(M1R, LOW);

  analogWrite(pwm1, 195);
  digitalWrite(M3F, HIGH);
  digitalWrite(M3R, LOW);
  
  analogWrite(pwm2, 210);
  digitalWrite(M2F, HIGH);
  digitalWrite(M2R, LOW);

  analogWrite(pwm4, 210);
  digitalWrite(M4F, HIGH);
  digitalWrite(M4R, LOW);
}
/*adjust right*/
if(!digitalRead(LS1))&& digitalRead(RS1))
{
  analogWrite(pwm1, 180);
  digitalWrite(M1F, HIGH);
  digitalWrite(M1R, LOW);

  analogWrite(pwm1, 195);
  digitalWrite(M3F, HIGH);
  digitalWrite(M3R, LOW);
  
  analogWrite(pwm2, 210);
  digitalWrite(M2F, LOW);
  digitalWrite(M2R, LOW);

  analogWrite(pwm4, 210);
  digitalWrite(M4F, LOW);
  digitalWrite(M4R, LOW);
}

/*adjust left*/
if(digitalRead(LS1)&& !(digitalRead(RS1)))
{
  analogWrite(pwm1, 180);
  digitalWrite(M1F, LOW);
  digitalWrite(M1R, LOW);

  analogWrite(pwm1, 195);
  digitalWrite(M3F, LOW);
  digitalWrite(M3R, LOW);
  
  analogWrite(pwm2, 210);
  digitalWrite(M2F, HIGH);
  digitalWrite(M2R, LOW);

  analogWrite(pwm4, 210);
  digitalWrite(M4F, HIGH);
  digitalWrite(M4R, LOW);
}

/*Left*/
if(digitalRead(LS2)&& digitalRead(RS2))
{
  analogWrite(pwm1, 180);
  digitalWrite(M1F, HIGH);
  digitalWrite(M1R, LOW);

  analogWrite(pwm1, 195);
  digitalWrite(M3F, HIGH);
  digitalWrite(M3R, LOW);
  
  analogWrite(pwm2, 210);
  digitalWrite(M2F, LOW);
  digitalWrite(M2R, HIGH);

  analogWrite(pwm4, 210);
  digitalWrite(M4F, LOW);
  digitalWrite(M4R, HIGH);
}
/*left(adjust right)*/
/*needs fix*/
if(!(digitalRead(LS2))&& digitalRead(RS2))
{
  analogWrite(pwm1, 180);
  digitalWrite(M1F, HIGH);
  digitalWrite(M1R, LOW);

  analogWrite(pwm1, 195);
  digitalWrite(M3F, HIGH);
  digitalWrite(M3R, LOW);
  
  analogWrite(pwm2, 210);
  digitalWrite(M2F, LOW);
  digitalWrite(M2R, HIGH);

  analogWrite(pwm4, 210);
  digitalWrite(M4F, LOW);
  digitalWrite(M4R, HIGH);
}

/*left(adjust left)*/
/*needs fix*/
if(!(digitalRead(LS2))&& digitalRead(RS2))
{
  analogWrite(pwm1, 180);
  digitalWrite(M1F, HIGH);
  digitalWrite(M1R, LOW);

  analogWrite(pwm1, 195);
  digitalWrite(M3F, HIGH);
  digitalWrite(M3R, LOW);
  
  analogWrite(pwm2, 210);
  digitalWrite(M2F, LOW);
  digitalWrite(M2R, HIGH);

  analogWrite(pwm4, 210);
  digitalWrite(M4F, LOW);
  digitalWrite(M4R, HIGH);
}
# HonnunHI
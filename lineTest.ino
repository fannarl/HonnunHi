void setup() 
 { 
  
 }
void loop() 
 {
/*forward*/ 
if(digitalRead(LS)&& digitalRead(RS)) 
{ 
  analogWrite(pwm1, 180); 
  digitalWrite(M1F, HIGH); 
  digitalWrite(M1R, LOW); 
  analogWrite(pwm3, 195); 
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
if(!digitalRead(LS))&& digitalRead(RS))
{ 
  analogWrite(pwm1, 180); 
  digitalWrite(M1F, HIGH); 
  digitalWrite(M1R, LOW); 
  analogWrite(pwm3, 195); 
  digitalWrite(M3F, HIGH); 
  digitalWrite(M3R, LOW);
  analogWrite(pwm2, 200);
  digitalWrite(M2F, HIGH); 
  digitalWrite(M2R, LOW);
  analogWrite(pwm4, 200); 
  digitalWrite(M4F, HIGH); 
  digitalWrite(M4R, LOW); 
} 
/*adjust left*/ 
if(digitalRead(LS1)&& !(digitalRead(RS1))) 
{ 
  analogWrite(pwm1, 190); 
  digitalWrite(M1F, LOW); 
  digitalWrite(M1R, HIGH); 
  analogWrite(pwm3, 205); 
  digitalWrite(M3F, LOW); 
  digitalWrite(M3R, HIGH); 
  analogWrite(pwm2, 210); 
  digitalWrite(M2F, HIGH); 
  digitalWrite(M2R, LOW); 
  analogWrite(pwm4, 210); 
  digitalWrite(M4F, HIGH); 
  digitalWrite(M4R, LOW); 
} 

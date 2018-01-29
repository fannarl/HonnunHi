//servo stýring
#include <Servo.h> //
Servo myservo1; // Stýri
Servo myservo2; // Stýri
Servo myservo3; // Stýri
Servo myservo4; // Stýri
Servo myservo5; // Krani 1
Servo myservo6; // Krani1
Servo myservo7; // Hamar fyrir takka

// Keyrsla
const int pwm1 = 2 ; // Motor
const int pwm2 = 3 ; // Motor
const int pwm3 = 4 ; // Motor
const int pwm4 = 5 ; // Motor
const int M1F = 50 ; // Motor
const int M1R = 51 ; // Motor
const int M2F = 48 ; // Motor
const int M2R = 49 ; // Motor
const int M3F = 46 ; // Motor
const int M3R = 47 ; // Motor
const int M4F = 44 ; // Motor
const int M4R = 45 ; // Motor

// Emcoder
// encoder1 servo 3 Signal pin 45 
// encoder2 servo 2 signal pin 44

//Línu Skynjarar
//2x Hægri
  const int RS1 = 25;
//2x Vinstir
  const in LS1 = 26
//2x Áfram 25 og 26 

const int RS2 = ?
const int LS2 = ?


void setup()
{
  
pinMode(pwm1,OUTPUT) ;
pinMode(M1R,OUTPUT) ;
pinMode(M1F,OUTPUT) ;
pinMode(pwm2,OUTPUT) ;
pinMode(M2R,OUTPUT) ;
pinMode(M2F,OUTPUT) ;
pinMode(pwm3,OUTPUT) ;
pinMode(M3R,OUTPUT) ;
pinMode(M3F,OUTPUT) ;
pinMode(pwm4,OUTPUT) ;
pinMode(M4R,OUTPUT) ;
pinMode(M4F,OUTPUT) ;
 myservo1.attach(53); // Servo 
 myservo2.attach(52); // Servo
 myservo3.attach(24); // Servo
 myservo4.attach(22); // Servo
 
}

void loop()
{
  // Robit byjar að keyra áfram
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(5);
  myservo4.write(0);
  delay(1000);

  //áfram
  if(digitalRead(RS1) && digitalRead(LS1))
  {
    analogWrite(pwm1, 110); 
    digitalWrite(M1F, HIGH); 
    digitalWrite(M1R, LOW); 
    analogWrite(pwm3, 110); 
    digitalWrite(M3F, LOW); 
    digitalWrite(M3R, HIGH);
    analogWrite(pwm2, 110);
    digitalWrite(M2F, LOW);
    digitalWrite(M2R, HIGH); 
    analogWrite(pwm4, 110);
    digitalWrite(M4F, LOW); 
    digitalWrite(M4R, HIGH);
  }

 //adjust left
  if(!(digitalRead(RS1)) && digitalRead(LS1))
  {
    analogWrite(pwm1, 110); 
    digitalWrite(M1F, HIGH); 
    digitalWrite(M1R, LOW); 
    analogWrite(pwm3, 110); 
    digitalWrite(M3F, LOW); 
    digitalWrite(M3R, LOW);
    analogWrite(pwm2, 110);
    digitalWrite(M2F, LOW);
    digitalWrite(M2R, HIGH); 
    analogWrite(pwm4, 110);
    digitalWrite(M4F, LOW); 
    digitalWrite(M4R, LOW);
  }

//adjust right
  if(digitalRead(RS1) && !(digitalRead(LS1)))
  {
    analogWrite(pwm1, 110); 
    digitalWrite(M1F, LOW); 
    digitalWrite(M1R, LOW); 
    analogWrite(pwm3, 110); 
    digitalWrite(M3F, LOW); 
    digitalWrite(M3R, HIGH);
    analogWrite(pwm2, 110);
    digitalWrite(M2F, LOW);
    digitalWrite(M2R, LOW); 
    analogWrite(pwm4, 110);
    digitalWrite(M4F, LOW); 
    digitalWrite(M4R, HIGH);
  }
  
  delay(500);
  analogWrite(pwm1, 70); 
  analogWrite(pwm2, 70); 
  analogWrite(pwm3, 70); 
  analogWrite(pwm4, 70);  
  delay(5000);
  
  //Stop
  digitalWrite(M1F, HIGH); 
  digitalWrite(M1R, HIGH);  
  digitalWrite(M3F, HIGH); 
  digitalWrite(M3R, HIGH);
  digitalWrite(M2F, HIGH);
  digitalWrite(M2R, HIGH); 
  digitalWrite(M4F, HIGH); 
  digitalWrite(M4R, HIGH);
  delay(1000);
  
  // Robit keyrir til hægri
 
  myservo1.write(88);
  myservo2.write(77);
  myservo3.write(88);
  myservo4.write(85);
  delay(1000);

  // Left
  else if((digitalRead(RS2) || digitalRead(LS2)) && !(digitalRead(RS1) || digitalRead(LS1)))
  {
    analogWrite(pwm1, 110); 
    digitalWrite(M1F, HIGH); 
    digitalWrite(M1R, LOW); 
    analogWrite(pwm3, 110); 
    digitalWrite(M3F, LOW); 
    digitalWrite(M3R, HIGH);
    analogWrite(pwm2, 110);
    digitalWrite(M2F, LOW);
    digitalWrite(M2R, HIGH); 
    analogWrite(pwm4, 110);
    digitalWrite(M4F, LOW); 
    digitalWrite(M4R, HIGH);
  }

  //left(adjust left)
  else if((!(digitalRead(RS2)) || digitalRead(LS2)) && !(digitalRead(RS1) || digitalRead(LS1)))
    {
      analogWrite(pwm1, 110); 
      digitalWrite(M1F, HIGH); 
      digitalWrite(M1R, LOW); 
      analogWrite(pwm3, 110); 
      digitalWrite(M3F, LOW); 
      digitalWrite(M3R, LOW);
      analogWrite(pwm2, 110);
      digitalWrite(M2F, LOW);
      digitalWrite(M2R, HIGH); 
      analogWrite(pwm4, 110);
      digitalWrite(M4F, LOW); 
      digitalWrite(M4R, LOW);
    }

  //left(adjust Right)
  else if((digitalRead(RS2)) || !(digitalRead(LS2))) && !(digitalRead(RS1) || digitalRead(LS1)))
    {
      analogWrite(pwm1, 110); 
      digitalWrite(M1F, LOW); 
      digitalWrite(M1R, LOW); 
      analogWrite(pwm3, 110); 
      digitalWrite(M3F, LOW); 
      digitalWrite(M3R, HIGH);
      analogWrite(pwm2, 110);
      digitalWrite(M2F, LOW);
      digitalWrite(M2R, LOW); 
      analogWrite(pwm4, 110);
      digitalWrite(M4F, LOW); 
      digitalWrite(M4R, HIGH);
    }
  
  delay(500);
  analogWrite(pwm1, 70); 
  analogWrite(pwm2, 70); 
  analogWrite(pwm3, 70); 
  analogWrite(pwm4, 70); 
  delay(4000); 
  
  
  
  //Stop
  digitalWrite(M1F, HIGH); 
  digitalWrite(M1R, HIGH);  
  digitalWrite(M3F, HIGH); 
  digitalWrite(M3R, HIGH);
  digitalWrite(M2F, HIGH);
  digitalWrite(M2R, HIGH); 
  digitalWrite(M4F, HIGH); 
  digitalWrite(M4R, HIGH);
  delay(4000);
  
} 


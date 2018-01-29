//servo stýring
#include <Servo.h> 
Servo myservo1; // Stýri
Servo myservo2; // Stýri
Servo myservo3; // Stýri
Servo myservo4; // Stýri

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
//2x Vinstir
//2x Áfram
    

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
    myservo1.attach(53); 
    // Servo myservo2.attach(52); 
    // Servo myservo3.attach(24); 
    // Servo myservo4.attach(22); 
    // Servo
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
if(!digitalRead(LS)&& digitalRead(RS))
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
  digitalWrite(M1F, HIGH); 
  digitalWrite(M1R, LOW); 
  analogWrite(pwm3, 205); 
  digitalWrite(M3F, HIGH); 
  digitalWrite(M3R, LOW); 
  analogWrite(pwm2, 210); 
  digitalWrite(M2F, HIGH); 
  digitalWrite(M2R, LOW); 
  analogWrite(pwm4, 210); 
  digitalWrite(M4F, HIGH); 
  digitalWrite(M4R, LOW); 
} 

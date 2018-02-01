#include <AccelStepper.h>
#include <MultiStepper.h>
#include <Stepper.h>
#include <Servo.h>

#define HALF4WIRE 8


//áfram skynjari
const int right1 = 50;
const int left1 = 51;
//hægri skynjari
const int right2 = 46;
const int left2 = 47;
//vinstri skynjari
const int right3 = 48;
const int left3 = 49;

//rofi
const int button = 51;

void FORWARD(void);
void LEFT(void);
void RIGHT(void);
void STOP(void);

bool Forward = false;
bool Left = false;
bool Right = false;
bool Stop = false;

//servos
Servo myservo1 ;
Servo myservo2 ;
Servo myservo3 ;
Servo myservo4 ;


//motor shit
//stepper1
#define motorPin1  45
#define motorPin2  44
#define motorPin3  43
#define motorPin4  42
//stepper2
#define motorPin5  41
#define motorPin6  40
#define motorPin7  39
#define motorPin8  38
//stepper3
#define motorPin9  37
#define motorPin10  36
#define motorPin11  35
#define motorPin12  34
//stepper4
#define motorPin13  33
#define motorPin14  32
#define motorPin15  31
#define motorPin16  30

AccelStepper stepper1 (HALF4WIRE, motorPin1, motorPin2, motorPin3, motorPin4, true);
AccelStepper stepper2 (HALF4WIRE, motorPin5, motorPin6, motorPin7, motorPin8, true);
AccelStepper stepper3 (HALF4WIRE, motorPin9, motorPin10, motorPin11, motorPin12, true);
AccelStepper stepper4 (HALF4WIRE, motorPin13, motorPin14, motorPin15, motorPin16, true);

int Left1 = digitalRead(left1);
int Right1 = digitalRead(right1);
int Left2 = digitalRead(left2);
int Right2 = digitalRead(right2);
int Left3 = digitalRead(left3);
int Right3 = digitalRead(right3);

//

void setup() {
 /* stepper1.setMaxSpeed(1200.0);
  stepper1.setAcceleration(100.0);
  stepper1.setSpeed(100);
  stepper1.moveTo(12000); // 250 full rotations @ 48 steps each = 12000 steps */

  myservo1.attach(52);
  myservo2.attach(24);
  myservo3.attach(53);
  myservo4.attach(25);
}

void loop() {

  while(0){
    if((Left1 == 0 && Right1 == 0) ==0){
    Forward = true;
    FORWARD();
    }
    else if((Left1 == 1 && Right1 == 0) == 0){
    Left = true;
    LEFT();
    }
    else if((Right1 == 1 && Left1 == 0) == 0){
    Right = true;
    RIGHT();
    }
  }

  //Vinstri
  if((left1 == 0 || right1 == 0) && (left3 == 0 || right3 == 1))
  {      
      while(0){
      if((Left3 == 0 && Right3 == 0) ==0){
      Forward = true;
      FORWARD();
      }
      else if((Left3 == 1 && Right3 == 0) == 0){
      Left = true;
      LEFT();
      }
      else if((Right3 == 1 && Left3 == 0) == 0){
      Right = true;
      RIGHT();
      }
    }
  }

  //hægri
  if((left1 == 0 || right1 == 0) && (left2 == 0 || right2 == 1))
  {
      while(0){
      if((Left2 == 0 && Right2 == 0) ==0){
      Forward = true;
      FORWARD();
      }
      else if((Left2 == 1 && Right2 == 0) == 0){
      Left = true;
      LEFT();
      }
      else if((Right2 == 1 && Left2 == 0) == 0){
      Right = true;
      RIGHT();
      }
    }    
  }
}

void FORWARD (void){
  do{
      stepper1.moveTo(1000000);
      stepper2.moveTo(1000000);
      stepper3.moveTo(1000000);
      stepper4.moveTo(1000000);
  }
  while(Forward == true);
}
void LEFT (void){
  do{
    stepper1.moveTo(1000000);
    stepper2.moveTo(1000000);    
  }
  while(Left == true);
}
void RIGHT (void){
  do{
    stepper3.moveTo(1000000);
    stepper4.moveTo(1000000);    
  }
  while(Right == true);
}
void STOP (void){
      stepper1.stop();
      stepper2.stop();
      stepper3.stop();
      stepper4.stop();  
}


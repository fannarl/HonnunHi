const int pwm1 = 2 ;  //initializing pin as pwm
const int pwm2 = 3 ; 
const int pwm3 = 4 ;  
const int pwm4 = 5 ;  

const int M1F = 22 ; //define output direction
const int M1R = 24 ;
const int M2F = 26 ;
const int M2R = 28 ;
const int M3F = 30 ;
const int M3R = 32 ;
const int M4F = 34 ;
const int M4R = 36 ;

void setup()
{
pinMode(pwm1,OUTPUT) ;   //we have to set PWM pin as output
pinMode(M1R,OUTPUT) ;  //Logic pins are also set as output
pinMode(M1F,OUTPUT) ;
pinMode(pwm2,OUTPUT) ;   //we have to set PWM pin as output
pinMode(M2R,OUTPUT) ;  //Logic pins are also set as output
pinMode(M2F,OUTPUT) ;
pinMode(pwm3,OUTPUT) ;   //we have to set PWM pin as output
pinMode(M3R,OUTPUT) ;  //Logic pins are also set as output
pinMode(M3F,OUTPUT) ;
pinMode(pwm4,OUTPUT) ;   //we have to set PWM pin as output
pinMode(M4R,OUTPUT) ;  //Logic pins are also set as output
pinMode(M4F,OUTPUT) ;
}

void loop()
{
//For Clock wise motion , in_1 = High , in_2 = Low
//MÃ³tor 1
//Afram
analogWrite(pwm1,180) ; 
digitalWrite(M1F,HIGH) ;
digitalWrite(M1R,LOW) ;
//MÃ³tor 2
analogWrite(pwm2,210) ;
digitalWrite(M2F,HIGH) ;
digitalWrite(M2R,LOW) ;
//MÃ³tor 3
analogWrite(pwm3,195) ;
digitalWrite(M3F,HIGH) ;
digitalWrite(M3R,LOW) ;
//MÃ³tor 4
analogWrite(pwm4,210) ;
digitalWrite(M4F,HIGH) ;
digitalWrite(M4R,LOW) ;

delay(3000);
//Stop
//MÃ³tor 1
analogWrite(pwm1,180) ; 
digitalWrite(M1F,HIGH) ;
digitalWrite(M1R,HIGH) ;
//MÃ³tor 2
analogWrite(pwm2,210) ;
digitalWrite(M2F,HIGH) ;
digitalWrite(M2R,HIGH) ;
//MÃ³tor 3
analogWrite(pwm3,195) ;
digitalWrite(M3F,HIGH) ;
digitalWrite(M3R,HIGH) ;
//MÃ³tor 4
analogWrite(pwm4,210) ;
digitalWrite(M4F,HIGH) ;
digitalWrite(M4R,HIGH) ;

delay(3000);
// Hægri eða vinstri
//MÃ³tor 1
analogWrite(pwm1,180) ; 
digitalWrite(M1F,LOW) ;
digitalWrite(M1R,HIGH) ;
//MÃ³tor 2
analogWrite(pwm2,210) ;
digitalWrite(M2F,HIGH) ;
digitalWrite(M2R,LOW) ;
//MÃ³tor 3
analogWrite(pwm3,195) ;
digitalWrite(M3F,HIGH) ;
digitalWrite(M3R,LOW) ;
//MÃ³tor 4
analogWrite(pwm4,210) ;
digitalWrite(M4F,LOW) ;
digitalWrite(M4R,HIGH) ;

delay(3000);
//stop
//MÃ³tor 1
analogWrite(pwm1,180) ; 
digitalWrite(M1F,HIGH) ;
digitalWrite(M1R,HIGH) ;
//MÃ³tor 2
analogWrite(pwm2,210) ;
digitalWrite(M2F,HIGH) ;
digitalWrite(M2R,HIGH) ;
//MÃ³tor 3
analogWrite(pwm3,195) ;
digitalWrite(M3F,HIGH) ;
digitalWrite(M3R,HIGH) ;
//MÃ³tor 4
analogWrite(pwm4,210) ;
digitalWrite(M4F,HIGH) ;
digitalWrite(M4R,HIGH) ;

delay(3000);
// hægri eða vinstri
//MÃ³tor 1
analogWrite(pwm1,180) ; 
digitalWrite(M1F,HIGH) ;
digitalWrite(M1R,LOW) ;
//MÃ³tor 2
analogWrite(pwm2,210) ;
digitalWrite(M2F,LOW) ;
digitalWrite(M2R,HIGH) ;
//MÃ³tor 3
analogWrite(pwm3,195) ;
digitalWrite(M3F,LOW) ;
digitalWrite(M3R,HIGH) ;
//MÃ³tor 4
analogWrite(pwm4,210) ;
digitalWrite(M4F,HIGH) ;
digitalWrite(M4R,LOW) ;

delay(3000);
stop
//MÃ³tor 1
analogWrite(pwm1,180) ; 
digitalWrite(M1F,HIGH) ;
digitalWrite(M1R,HIGH) ;
//MÃ³tor 2
analogWrite(pwm2,210) ;
digitalWrite(M2F,HIGH) ;
digitalWrite(M2R,HIGH) ;
//MÃ³tor 3
analogWrite(pwm3,195) ;
digitalWrite(M3F,HIGH) ;
digitalWrite(M3R,HIGH) ;
//MÃ³tor 4
analogWrite(pwm4,210) ;
digitalWrite(M4F,HIGH) ;
digitalWrite(M4R,HIGH) ;

delay(3000);

}





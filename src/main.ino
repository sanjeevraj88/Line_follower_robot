#include <AFMotor.h> //add Adafruit Motor Shield library

#define lefts A4

#define rights A5

AF_DCMotor motor1(1, MOTOR12_1KHZ);

AF_DCMotor motor2(2, MOTOR12_1KHZ);

void setup() {

motor1.setSpeed(100);

motor2.setSpeed(100);

pinMode(lefts,INPUT);

pinMode(rights,INPUT);

Serial.begin(9600);


}

void loop(){

Serial.println(analogRead(lefts));

Serial.println(analogRead(rights));

if(analogRead(lefts)<=400 && analogRead(rights)<=400){

motor1.run(RELEASE);

motor2.run(RELEASE);

}

else if(analogRead(lefts)<=400 && !analogRead(rights)<=400)

{


motor1.run(BACKWARD);

motor2.run(FORWARD);


}

else if(!analogRead(lefts)<=400 && analogRead(rights)<=400){


motor1.run(FORWARD);

motor2.run(BACKWARD);

}


else if(!analogRead(lefts)<=400 && !analogRead(rights)<=400){


motor1.run(FORWARD);

motor2.run(FORWARD);

}


}
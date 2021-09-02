#include <Dabble.h>

// set Motor A to Arduino Pins
int motor_A = 12; // official Arduino Motor Shield uses D12
int motor_B = 13; // official Arduino Motor Shield uses D13

// set the Motor Speed using the Arduino Pins
int motor_A_speed = 3; // official Arduino Motor Shield uses D3
int motor_B_speed = 11; // official Arduino Motor Shield uses D11

// set the time between motor on and motor off
int wait_in_milliseconds = 1000;

void setup() {
  // put your setup code here, to run once:
  Dabble.begin(9600);
  
  // set the Arduino pin to OUTPUT mode
  pinMode(motor_A, OUTPUT);
  pinMode(motor_B, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  Dabble.processInput();
  if (GamePad.isUpPressed()) forward();
  if (GamePad.isDownPressed()) backward();
  if (GamePad.isLeftPressed()) turnLeft();
  if (GamePad.isRightPressed()) turnRight();
  
}

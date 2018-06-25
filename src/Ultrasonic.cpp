#include "Ultrasonic.h"

Ultrasonic::Ultrasonic()
{
  
}

void Ultrasonic::attachTrigger(int pin)
{
	this->pin_trigger_=pin;
  pinMode(pin, OUTPUT);
}
void Ultrasonic::attachEcho(int pin)
{
	this->pin_echo_=pin;
  pinMode(pin, INPUT);
}

unsigned int Ultrasonic::update_()
{
	digitalWrite(pin_trigger_, LOW);
	delayMicroseconds(2);
	digitalWrite(pin_trigger_, HIGH);
	delayMicroseconds(10);
	digitalWrite(pin_trigger_, LOW);
	unsigned int duration = pulseIn(pin_echo_, HIGH);
	return duration;
}

unsigned int Ultrasonic::read()
{
	unsigned int duration =	update_();
	unsigned int distance = duration * 10 / 292 / 2;
  #ifdef ROBOT_SONAR_DEBUG
	Serial.print("Sonar::read():");
	Serial.print("\t");
	Serial.print(distance);
	Serial.print("\n");
  #endif
	return distance;
}



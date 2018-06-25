#ifndef Robot_Ultrasonic_H
#define Robot_Ultrasonic_H

#define ROBOT_SONAR_DEBUG 1


#include "Arduino.h"

class Ultrasonic {
  public:
    Ultrasonic();
		void attachTrigger(int pin);
		void attachEcho(int pin);
		unsigned int read();
  private:
		int pin_trigger_;
		int pin_echo_;
		unsigned int update_();
};
#endif


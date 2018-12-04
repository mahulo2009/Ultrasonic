#ifndef Ultrasonic_H
#define Ultrasonic_H

//#define ULTRASONIC_DEBUG 1


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


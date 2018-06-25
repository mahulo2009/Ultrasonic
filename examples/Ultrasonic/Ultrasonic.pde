#include <Ultrasonic.h>

Ultrasonic ultrasonic;

void setup() {
  //Setup Serial line.
  Serial.begin(115200);
  // put your setup code here, to run once:
	ultrasonic.attachTrigger(16);
	ultrasonic.attachEcho(15);
}

void loop() {
  // put your main code here, to run repeatedly:
	Serial.print("Distance:");
  Serial.println(ultrasonic.read());
	delay(1000);
}

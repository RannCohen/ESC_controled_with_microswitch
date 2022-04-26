#include <Servo.h>

#define MICROSWITCH 4
int  ESC_PIN = 9;

Servo ESC;

void setup() {
  pinMode(MICROSWITCH, INPUT_PULLUP);
  Serial.begin(115200);
  ESC.attach(ESC_PIN);
}

void loop() {
  if((digitalRead(MICROSWITCH)) == LOW)
  {
    ESC.writeMicroseconds(1140);
    Serial.println("on");

  }
  else
  {
    ESC.writeMicroseconds(1000);
    Serial.println("off");
  }
  delay(50);
  // Serial.println(digitalRead(MICROSWITCH));
}

#include <Servo.h>

Servo door;

int button = 2;
int led = 13;

void setup() {
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  door.attach(9);
}

void loop() {

  if (digitalRead(button) == LOW) {
    door.write(90);
    digitalWrite(led, HIGH);

    delay(3000);

    door.write(0);
    digitalWrite(led, LOW);
  }

}
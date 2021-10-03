#include <Arduino.h>
#include <DateTime.h>

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int counter_val = 0; counter_val < 1000000; counter_val++)
  {
    printf("Counter: %d\n", counter_val);
    delay(1000);

    DateTime.getTime();
  }
}
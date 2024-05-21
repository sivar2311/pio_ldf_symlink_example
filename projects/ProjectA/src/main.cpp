#include <Arduino.h>
#include <LibA.h>

void setup() {
    Serial.begin(115200);
    Serial.println(functionFormLibA("Mickey Mouse"));
}

void loop() {
}
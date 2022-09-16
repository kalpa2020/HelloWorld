/**
 * I, Kalpa Wickramathunga (000378875), certify that this is my original work.
**/

#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:

  // start the USB serial monitor port
  Serial.begin(115200);

  // print some text to the USB port
  Serial.println("\n\nHello, World!");

  Serial.println("\nKalpa Wickramathunga  000378875");

  Serial.println("\nDetails about my D1 mini:");
  Serial.println("\n\tESP8266 Chip ID: " + (String)ESP.getChipId());
  Serial.println("\n\tFlash Chip ID: " + (String)ESP.getFlashChipId() + "\n");
}

void loop() {
  // my main code:

  Serial.print("Time in milliseconds since program started: ");
  int time = millis();

  Serial.println(time); // prints time since program started
  delay(2000);          // delays for two seconds
}
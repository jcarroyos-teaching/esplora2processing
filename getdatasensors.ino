// promt chatGPT: give me arduino and processing scripts to get sensors data from arduino esplora and send it and show in processing canvas

#include <Esplora.h>

void setup() {
  // Start serial communication at 9600 baud rate
  Serial.begin(9600);
}

void loop() {
  // Read the light sensor value
  int lightValue = Esplora.readLightSensor();

  // Read the temperature sensor value in Celsius
  int temperatureValue = Esplora.readTemperature(DEGREES_C);

  // Send the sensor values over serial, separated by a comma
  Serial.print(lightValue);
  Serial.print(",");
  Serial.println(temperatureValue);

  // Wait for a bit before reading the sensors again
  delay(250);
}

/*
 * Project: Temperature Monitoring with ESP32 and DS18B20
 * Description: This code uses a DS18B20 temperature sensor to measure temperature
 *              with an ESP32 microcontroller. It displays temperature readings on the serial monitor.
 * Author: Richedor LALEYE (Adecola)
 * Date: April 9, 2023
 * Version: 2
 * License: MIT (insert license text here or provide a link to a LICENSE file)
 */

#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 4 // GPIO used for OneWire bus

OneWire oneWire(ONE_WIRE_BUS); // Create an instance of OneWire
DallasTemperature sensors(&oneWire); // Create an instance of DallasTemperature

void setup() {
  Serial.begin(115200); // Initialize serial communication
  Serial.println("ESP32 - Temperature Monitoring"); // Initialization message
  sensors.begin(); // Initialize temperature sensors
}

void loop() { 
  sensors.requestTemperatures(); // Ask temperature sensors to measure temperature

  float temperatureC = sensors.getTempCByIndex(0); // Read temperature in Celsius

  // Check the validity of temperature reading
  if (temperatureC != DEVICE_DISCONNECTED_C) {
    // Display temperature on the serial monitor
    Serial.print("Temperature: ");
    Serial.print(temperatureC);
    Serial.println(" °C");
  } else {
    // Display an error message if temperature sensor is disconnected
    Serial.println("Error: Temperature sensor disconnected!");
  }
  
  delay(1000); // Wait for one second before the next temperature reading
}

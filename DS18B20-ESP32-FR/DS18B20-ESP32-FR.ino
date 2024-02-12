/*
 * Projet : Surveillance de température avec ESP32 et DS18B20
 * Description : Ce code utilise un capteur de température DS18B20 pour mesurer la température
 *               avec un microcontrôleur ESP32. Il affiche les lectures de température sur le moniteur série.
 * Auteur : Richedor LALEYE (Adecola)
 * Date : 9 avril 2023
 * Version : 2
 * Licence : MIT (insérer le texte de la licence ici ou fournir un lien vers un fichier LICENSE)
 */

#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 4 // GPIO utilisé pour le bus OneWire

OneWire oneWire(ONE_WIRE_BUS); // Création d'une instance de OneWire
DallasTemperature sensors(&oneWire); // Création d'une instance de DallasTemperature

void setup() {
  Serial.begin(115200); // Initialisation de la communication série
  Serial.println("ESP32 - Surveillance de la température"); // Message d'initialisation
  sensors.begin(); // Initialisation des capteurs de température
}

void loop() { 
  sensors.requestTemperatures(); // Demande aux capteurs de température de mesurer la température

  float temperatureC = sensors.getTempCByIndex(0); // Lecture de la température en degrés Celsius

  // Vérification de la validité de la lecture de température
  if (temperatureC != DEVICE_DISCONNECTED_C) {
    // Affichage de la température sur le moniteur série
    Serial.print("Température : ");
    Serial.print(temperatureC);
    Serial.println(" °C");
  } else {
    // Affichage d'un message d'erreur si le capteur de température est déconnecté
    Serial.println("Erreur : Capteur de température déconnecté !");
  }
  
  delay(1000); // Attente d'une seconde avant la prochaine lecture de température
}

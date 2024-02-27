# Mesure de température avec un capteur DS18B20 et un ESP32

Ce projet permet de mesurer la température à l'aide d'un capteur DS18B20 connecté à un microcontrôleur ESP32. Les valeurs de température sont affichées sur la console série.

## Composants

Voici la liste des composants utilisés dans ce projet :

| Composant | Quantité |
|----------|----------|
| ESP32    | 1        |
| Capteur de température DS18B20 | 1 |
| Résistance de 4,7 kΩ | 1 |
| Breadboard | 1 |
| Fils de connexion | N/A |
| Ordinateur avec Arduino IDE installé | 1 |

## Schéma de câblage

Voici le schéma de câblage pour ce projet :

| ESP32 Pin | Capteur DS18B20 Pin | Résistance |
|-----------|---------------------|------------|
| 3.3V      | VDD                 |            |
| GND       | GND                 |            |
| GPIO 4    | DATA                | 4,7 kΩ     |

## Installation

1. Clonez ce projet depuis GitHub.
2. Ouvrez le fichier `DS18B20-ESP32-FR.ino` dans l'IDE Arduino.
3. Sélectionnez votre carte ESP32 dans le menu Outils > Type de carte.
4. Sélectionnez le port série de votre ESP32 dans le menu Outils > Port.
5. Chargez le programme sur votre ESP32 à l'aide du bouton "Téléverser".

## Comment utiliser le code

1. Connectez le capteur DS18B20 à votre microcontrôleur selon le schéma de câblage ci-dessus.
2. Ouvrez le fichier `DS18B20-ESP32-FR.ino` dans l'IDE Arduino.
3. Téléversez le code sur votre microcontrôleur.
4. Ouvrez la console série de l'IDE Arduino (vitesse de communication : 115200 bauds).
5. Les mesures de température devraient s'afficher dans la console série toutes les 5 secondes.

## Références
* La documentation officielle d'Arduino pour la bibliothèque OneWire : https://www.arduino.cc/reference/en/libraries/onewire/
* La documentation officielle d'Arduino pour la bibliothèque DallasTemperature : https://www.arduino.cc/reference/en/libraries/dallastemperature/
* Le site web de la licence MIT : https://opensource.org/licenses/MIT

## Licence

Ce projet est sous licence MIT. Veuillez consulter le fichier `LICENSE.md` pour plus d'informations.

## Auteur

Ce projet a été créé par Richedor Laleye. Pour toute question ou suggestion, n'hésitez pas à me contacter à adecolalaleye@gmail.com.



**************************
# Temperature Measurement with a DS18B20 Sensor and an ESP32

This project allows to measure temperature using a DS18B20 sensor connected to an ESP32 microcontroller. The temperature values are displayed on the serial console.

## Components

Here is the list of components used in this project:

| Component | Quantity |
|-----------|----------|
| ESP32 | 1 |
| DS18B20 temperature sensor | 1 |
| 4.7 kΩ resistor | 1 |
| Breadboard | 1 |
| Jumper wires | N/A |
| Computer with Arduino IDE installed | 1 |

## Wiring Diagram

Here is the wiring diagram for this project:

| ESP32 Pin | DS18B20 Sensor Pin | Resistor |
|-----------|--------------------|----------|
| 3.3V      | VDD                 |          |
| GND       | GND                 |          |
| GPIO 4    | DATA                | 4.7 kΩ  |

## Installation

1. Clone this project from GitHub.
2. Open the `DS18B20-ESP32-EN.ino` file in the Arduino IDE.
3. Select your ESP32 board from the Tools > Board menu.
4. Select the serial port of your ESP32 from the Tools > Port menu.
5. Upload the program to your ESP32 using the "Upload" button.

## How to Use the Code

1. Connect the DS18B20 sensor to your microcontroller according to the wiring diagram above.
2. Open the `DS18B20-ESP32-EN.ino` file in the Arduino IDE.
3. Upload the code to your microcontroller.
4. Open the serial console of the Arduino IDE (communication speed: 115200 bauds).
5. Temperature measurements should be displayed in the serial console every 5 seconds.

## References
* Official Arduino documentation for the OneWire library: https://www.arduino.cc/reference/en/libraries/onewire/
* Official Arduino documentation for the DallasTemperature library: https://www.arduino.cc/reference/en/libraries/dallastemperature/
* MIT License website: https://opensource.org/licenses/MIT

## License

This project is licensed under the MIT License. Please see the `LICENSE.md` file for more information.

## Author

This project was created by Richedor Laleye. For any questions or suggestions, feel free to contact me at adecolalaleye@gmail.com.


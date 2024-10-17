#include <Arduino.h>
 #include <Wire.h>

const int IR1Pin = 4;   // De pin waar de IR-sensor op is aangesloten

void setup() {
  Serial.begin(9600);    // Seriële monitor starten
  pinMode(IR1Pin, INPUT); // Zet de IR-sensor als input
}

void loop() {
  int sensorStatus = digitalRead(IR1Pin);  // Lees de status van de sensor

  if (sensorStatus == HIGH) {
    Serial.println("HIGH");
  } else {
    Serial.println("LOW");
  }

  delay(500);  // Wacht 500 ms voordat de status opnieuw wordt gelezen
}

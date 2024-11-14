#include <DHT.h>
#include <NewPing.h>

#define DHTPIN 19     // Pino de dados do DHT22
#define DHTTYPE DHT22   // Tipo de sensor DHT

DHT dht(DHTPIN, DHTTYPE);

// Definindo pinos para o sensor Ultrassônico
#define TRIG_PIN 22
#define ECHO_PIN 23
NewPing sonar(TRIG_PIN, ECHO_PIN);

// Definindo pino para o PIR
#define PIR_PIN 26

// Definindo pino para o LDR
#define LDR_PIN 32

void setup() {
  Serial.begin(115200);
  dht.begin();
  pinMode(PIR_PIN, INPUT);
}

void loop() {
  // Leitura de temperatura e umidade (DHT22)
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.print("°C, Umidade: ");
  Serial.print(humidity);
  Serial.println("%");

  // Leitura de distância (HC-SR04)
  int distance = sonar.ping_cm();
  Serial.print("Distância do reservatório: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Leitura de movimento (PIR)
  int motion = digitalRead(PIR_PIN);
  Serial.print("Movimento detectado: ");
  Serial.println(motion == HIGH ? "Sim" : "Não");

  // Leitura de luz (LDR)
  int lightIntensity = analogRead(LDR_PIN);
  Serial.print("Intensidade de luz: ");
  Serial.println(lightIntensity);

  delay(2000);  // Espera 2 segundos entre as leituras
}
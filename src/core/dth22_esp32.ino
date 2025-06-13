#include "DHT.h"

#define DHTPIN 15       // Pino onde o DHT22 está conectado
#define DHTTYPE DHT22   // Define o tipo do sensor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  // Captura dados do sensor DHT22
  float temperatura = dht.readTemperature();
  float umidade = dht.readHumidity();

  // Verifica se foram recebidos os dados de temperatura e humidade
  if (isnan(temperatura) || isnan(umidade)) {
    Serial.println("Erro ao ler o sensor DHT22");
    return;
  }

  // Imprime os dados formatados na tela
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.print(" °C  |  Umidade: ");
  Serial.print(umidade);
  Serial.println(" %");

  delay(2000);
}
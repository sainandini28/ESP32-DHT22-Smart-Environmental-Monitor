#include <DHT.h>

// DHT22 sensor configuration
#define DHTPIN 4
#define DHTTYPE DHT22

// Create DHT sensor object
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // Start serial communication
  Serial.begin(115200);

  // Initialize DHT sensor
  dht.begin();

  Serial.println("DHT22 Temperature and Humidity Monitor");
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!");
    delay(2000);
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  delay(2000);
}

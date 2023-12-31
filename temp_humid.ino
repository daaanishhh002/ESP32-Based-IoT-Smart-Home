#include "DHT.h"
#define DHT22PIN 16
// DHT11 gives better results that match with Google

DHT dht(DHT22PIN, DHT22);
void setup()
{
  
  Serial.begin(115200);
/* Start the DHT22 Sensor */
  dht.begin();
}

void loop()
{
  float humi = dht.readHumidity();
  float temp = dht.readTemperature();
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.print("ºC ");
  Serial.print("Humidity: ");
  Serial.println(humi);
  delay(1000);
}
#include <dht.h>

#define DHT11_PIN 7
dht DHT;

void setup() {
  Serial.begin(9600);
}

void loop(){
  int chk = DHT.read11(DHT11_PIN);

  Serial.print("Humidity = ");
  Serial.print(DHT.humidity);
  Serial.print("%");

  Serial.print("Temperature = ");
  Serial.print(DHT.temperature);
  Serial.println("C ");
}
// ESP32 will make post requests to server on local network
// ESP32 has to be on same network

//  including libraries
#include<WiFi.h>

//  wifi credentials
const char ssid[] = "SKYT2I1W";
const char password[] = "9gj91php1egL";

//  potpin on GPIO 34
const int potpin = 34;

void setup()
{
  Serial.begin(115200);

  //  connecting to wifi
  Serial.print("Connecting to : ");
  Serial.println(ssid);
  WiFi.begin(ssid , password);
  while (WiFi.status()  !=  WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.println("Connected with Wifi !");
}

void loop()
{

  //  reading potentiometer at an interval of 1 sec
  int pot = analogRead(potpin);
  Serial.print("Pot values:");
  Serial.println(pot);
  delay(1000);
  
}

/*****************************************************
 * Project: IoT Based Smart Home Automation
 * Controller: ESP8266 NodeMCU
 * Platform: Blynk IoT
 * IDE: Arduino IDE
 *****************************************************/

#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "Smart Home Automation"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";

// Relay Pins
#define RELAY1 D1
#define RELAY2 D2
#define RELAY3 D5
#define RELAY4 D6

BlynkTimer timer;

BLYNK_CONNECTED()
{
  Blynk.syncAll();
}

BLYNK_WRITE(V0)
{
  int value = param.asInt();
  digitalWrite(RELAY1, !value);
}

BLYNK_WRITE(V1)
{
  int value = param.asInt();
  digitalWrite(RELAY2, !value);
}

BLYNK_WRITE(V2)
{
  int value = param.asInt();
  digitalWrite(RELAY3, !value);
}

BLYNK_WRITE(V3)
{
  int value = param.asInt();
  digitalWrite(RELAY4, !value);
}

void setup()
{
  Serial.begin(115200);

  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT);

  digitalWrite(RELAY1, HIGH);
  digitalWrite(RELAY2, HIGH);
  digitalWrite(RELAY3, HIGH);
  digitalWrite(RELAY4, HIGH);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();
  timer.run();
}

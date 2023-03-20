#define BLYNK_TEMPLATE_ID "XXXXXXXXXXX"
#define BLYNK_TEMPLATE_NAME "XXXXXX"
#define BLYNK_AUTH_TOKEN "XXXXXXXXXXXXXXXXXXXXXX"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <WiFiManager.h> // Include the WiFiManager library


void setup()
{
  // Debug console
  Serial.begin(115200);

  WiFiManager wifiManager; // Create an instance of WiFiManager

  // Check if the ESP8266 is already connected to a WiFi network
  if (WiFi.SSID() == "") {
    Serial.println("WiFi not configured. Resetting WiFiManager settings...");
    wifiManager.resetSettings();
    wifiManager.autoConnect("smartroom", "smartroom"); // Create an access point named "smartroom" with the password "smartroom"

  } else {
    Serial.println("Connected to WiFi!");
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
  }
  
  pinMode(5, OUTPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN, WiFi.SSID().c_str(), WiFi.psk().c_str()); // Use the WiFi credentials obtained from WiFiManager to connect to Blynk server
}

BLYNK_WRITE(V1)
{
  int pinValue = param.asInt();
  digitalWrite(5, pinValue);
}

void loop()
{
  Blynk.run();
  
  // Check WiFi status and reconnect if lost
  if (WiFi.status() != WL_CONNECTED) {
    Serial.println("WiFi lost. Resetting WiFiManager settings...");
    WiFi.disconnect();
    WiFiManager wifiManager;
    wifiManager.resetSettings();
    wifiManager.autoConnect("smartroom", "smartroom"); // Create an access point named "smartroom" with the password "smartroom"
    ESP.reset();
  }
}

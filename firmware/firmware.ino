#include <Arduino.h>
#include <WiFiManager.h>
void setup() {
    WiFi.mode(WIFI_AP);
    Serial.begin(115200);
    WiFiManager wm;
    wm.resetSettings();
    Serial.println("Init an Access Point with web view");
    bool res;
    res = wm.autoConnect("FloriGro"); 
    if(!res) {
        Serial.println("Failed to connect");
        ESP.restart();
    } 
    else Serial.println("connected pot to the user network via AP");
}


void loop() {
  // put your main code here, to run repeatedly:
}

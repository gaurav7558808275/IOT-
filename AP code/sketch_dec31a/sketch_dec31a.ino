
#include "WiFi.h"     // HEADERS FOR INITIALISATION
#include "ESPAsyncWebServer.h"



const char *ssid = "GAURAVS_ESP!";
const char *password = "Qwerty!123456";



AsyncWebServer server(80);


void setup(){
  
  
  Serial.begin(115200);
  Serial.println("  ");
  delay(100);
  WiFi.softAP(ssid, password);
  Serial.println();
  Serial.print("IP address: ");
  Serial.println(WiFi.softAPIP());
  delay(100); 
  
  
  server.on("/hello", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(800, "text/plain", " HAPPTY NEW YEAR IN ADVANCE!!!");
  });
  server.begin();
}




void loop(){}

//-------------------------- SETUP HEADER FILE -----------------------//

#include "ThingSpeak.h"   // ThingSpeak library // 

WiFiClient client;

void setup() 
{
  // put your setup code here, to run once:

  int randomVal;
  int x;
  
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);          //  Defining station mode //
  delay(500);
  WiFi.begin(ssid,pass);        // wifi connection establishment //
  ThingSpeak.begin(client);     // Thingspeak begin //
} 

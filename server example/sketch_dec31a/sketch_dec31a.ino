  
  // Send random value to server //
  
  
 // HEADERS //
  
  #include "WiFi.h"                     // HEADER FOR WIFI CONNECVTIVITY //
  #include "AsyncTCP.h"                 // HEADER FOR WEBSERVER // 
  #include "ESPAsyncWebServer.h"        // HEADER FOR SERVER // 


 AsyncWebServer server(80);            // ESTABLISHING THE PORT //
  
 //#include "WiFiconfig.h"

 #define LED 2
 int randomValue;

 const char* ssid = "RENON INDIA PVT LTD";
 const char* password = "renonfamily2020";


  void setup() 
 {
  
  // ONBOARD LED ESTABLISHMENT //
 
  pinMode(LED,OUTPUT);
  
  // WIFI CONNECTION ESTABLISHMENT CODE//
  
  Serial.begin(115200);
  Serial.println("loading.....");
  Serial.println("  ");
  WiFi.begin(ssid,password);
  Serial.println("connecting to...");
  Serial.println("  ");
  Serial.println(ssid);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(150);
    
  }

  Serial.println("connection established!");
  Serial.println("  ");
  delay(200);
  Serial.print(WiFi.localIP());
  delay(100);
  Serial.println("  ");
  Serial.println("Welcome to IOT !!!! Enjoy buddy");
  Serial.println("  ");
  
  // Create the data to be shown on server //

  
  server.on("/hello", HTTP_GET, [](AsyncWebServerRequest *request){ request->send(200, "text/plain", "Hello World");});
  
  
  server.begin();
 
 
 }

  
void loop() 
{
 
  while (WiFi.status() == WL_CONNECTED)
  {
  digitalWrite(LED , HIGH);
  //randomValue = random(20,40);
 // delay(2000);
 // Serial.println(random(20,40));
  
  }
 
}

/*________________________________ ESP32 in APM MODE on host webserver______________________*/
/*_______________________________________Author: GauravEV____________________________________*/


#include "config.h"
#include "setup.h"
#include "WiFi.h"





void setup();

void loop() 
{
  // put your main code here, to run repeatedly:
  server.handleClient();

}

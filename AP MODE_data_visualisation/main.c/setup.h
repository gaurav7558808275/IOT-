/* _______________________________ setup.h_________________________*/


#include "html.h"
#include "WebServer.h"

/*___________________________________________________________________________________*/

WebServer server(80);

int i;
int Val;

/*___________________________________________________________________________________*/

void handle_root() 
{
  String s = htmlpage();
  server.send(200, "text/html",s );
}

/*_____________________________________________________________________________________*/

void value_gen()
{
  for(i=0;i<100;i++)
  {
    Val = i;
  }
}

/*_______________________________________________________________________________________*/

void setup() 
{

  /*________________ initilisation of ESP in AP mode________________________ */
 
 
 Serial.begin(115200);
 Serial.println("Welcome");
 delay(20);
 pinMode(2,OUTPUT);
 Serial.println("Enabling ESP as AP...... ");
 delay(30);
 WiFi.softAP(ssid,pass);
 IPAddress IP = WiFi.softAPIP();
 delay(30);
 Serial.println(IP);

 server.on("/", handle_root);
 int val = Val;
 Serial.print(val);
 

 server.begin();
 
 } 

 

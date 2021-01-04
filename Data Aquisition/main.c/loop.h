//----------------------- LOOP HEADER FILE -----------------------------//

int Val;
int i ;

void loop()
{
 Serial.begin(115200);
 for(i=0;i<100;i++)
 {
  Val = i;    // random value generated to push to cloud //
  Serial.print(Val);                          
  ThingSpeak.writeField(channel,1,Val,API);   // Pushing data to Thingsspeak //
  delay(15000);
 }
 
}

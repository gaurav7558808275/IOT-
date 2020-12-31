// Hall sensor trila //

int val = 0;

void setup() 
{
  // put your setup code here, to run once:
  
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:

 val = hallRead();
Serial.print(val);
Serial.println(" Hall sensor value");
delay(5000);

}

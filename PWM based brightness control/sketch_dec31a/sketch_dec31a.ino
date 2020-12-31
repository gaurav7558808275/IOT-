// PWM based led control


  //const int ledpin1 = 16;                     // LED GREEN //
  //const int  ledpin2 = 7;                     // LED RED //

  const int freq = 5000;                    // SUFFICIENT FREQUENCY OF PWM FOR LED OPERATION //
  //const int dutycycle;                       // DUTY CYCLE OF PWM RQUIRED FOR FOR LOOP //
  const int ledchannel = 1;                 // CHANNEL SETUP FOR PWM //
  const int resolution = 8;                 // WEHAVE FREEDOM OF RESOLUTION FROM 0-15 SETTING 8 BIT RESOLUTION //
    

void setup() 
 {
  pinMode(ONBOARD_LED,OUTPUT);
  
  ledcSetup( ledchannel , freq , resolution );           // SETUP FUNCTION TO ACCEPT ARGUMENT FOR INTITLISATION //
  ledcAttachPin ( ON_BOARD_LED , ledchannel );                  // ATTACHING LEDPIN TO RESPECTIVE CHANNELS, GPIO LINKING BASICALLY //
  //ledcAttachPin ( ledpin1 , ledchannel);                  
 
 }

void loop() {
  // put your main code here, to run repeatedly:

  // LED BRIGHTNESS INCREASE//
  
  for ( int dutycycle = 0; dutycycle <= 255 ; dutycycle ++)
      {
         ledcWrite(ledchannel,ONBOOARD_LED);
         //ledcWrite(ledchannel,ledpin2);
         delay(50);
      }

   // LED BRIGHTNESS DECREASE //

       for ( int dutycycle = 255; dutycycle >= 0  ; dutycycle --)
      {
          ledcWrite(ledchannel,ONBOOARD_LED);
         //ledcWrite(ledchannel,ledpin2);
         delay(50);
      }

}

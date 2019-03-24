    int signal1[] = {13,12,11};
    int signal2[] = {10,9,8};
    int signal3[] = {7,6,5};
    int signal4[] = {4,3,2};
    int infra[] = {1,0,14,15};
    int redDelay = 2000;
    int yellowDelay = 1000;
    void setup() {
      // Declaring all the LED's as output
      for (int i = 0; i < 3; i++) {
        pinMode(signal1[i], OUTPUT);
        pinMode(signal2[i], OUTPUT);
        pinMode(signal3[i], OUTPUT);
        pinMode(signal4[i], OUTPUT);
      }
      for (int j = 0; j < 4; j++) { 
        pinMode(infra[j], INPUT);
      }
    }
    void loop() {
      emergency();

      // Making Green  LED at signal 1 and red LED's at other signal HIGH

      digitalWrite(signal1[2], HIGH);
      digitalWrite(signal1[0], LOW);
      digitalWrite(signal2[0], HIGH);
      digitalWrite(signal3[0], HIGH);
      digitalWrite(signal4[0], HIGH);
      delay(redDelay);

      // Making Green LED at signal 1 LOW and making yellow LED at signal 1 HIGH for 2 seconds
      digitalWrite(signal1[1], HIGH);
      digitalWrite(signal1[2], LOW);
      delay(yellowDelay);
      digitalWrite(signal1[1], LOW);

      emergency();

      
      // Making Green  LED at signal 2 and red LED's at other signal HIGH
      digitalWrite(signal1[0], HIGH);
      digitalWrite(signal2[2], HIGH);
      digitalWrite(signal2[0], LOW);
      digitalWrite(signal3[0], HIGH);
      digitalWrite(signal4[0], HIGH);
      delay(redDelay);
      // Making Green LED at signal 2 LOW and making yellow LED at signal 2 HIGH for 2 seconds
      digitalWrite(signal2[1], HIGH);
      digitalWrite(signal2[2], LOW);
      delay(yellowDelay);
      digitalWrite(signal2[1], LOW);

      emergency();

      // Making Green  LED at signal 3 and red LED's at other signal HIGH
      digitalWrite(signal1[0], HIGH);
      digitalWrite(signal2[0], HIGH);
      digitalWrite(signal3[2], HIGH);
      digitalWrite(signal3[0], LOW);
      digitalWrite(signal4[0], HIGH);
      delay(redDelay);
      // Making Green LED at signal 3 LOW and making yellow LED at signal 3 HIGH for 2 seconds
      digitalWrite(signal3[1], HIGH);
      digitalWrite(signal3[2], LOW);
      delay(yellowDelay);
      digitalWrite(signal3[1], LOW);

      emergency();

      // Making Green  LED at signal 4 and red LED's at other signal HIGH
      digitalWrite(signal1[0], HIGH);
      digitalWrite(signal2[0], HIGH);
      digitalWrite(signal3[0], HIGH);
      digitalWrite(signal4[2], HIGH);
      digitalWrite(signal4[0], LOW);
      delay(redDelay);
      // Making Green LED at signal 4 LOW and making yellow LED at signal 4 HIGH for 2 seconds
      digitalWrite(signal4[1], HIGH);
      digitalWrite(signal4[2], LOW);
      delay(yellowDelay);
      digitalWrite(signal4[1], LOW);
    }



    void emergency()
    {
            
   
// Emergency vehicle interrupt 
   if(digitalRead(infra[0])==HIGH)
    {
         // interrupt Making Green  LED at signal 1 and red LED's at other signal HIGH
  while(digitalRead(infra[0])==HIGH)
  {
      digitalWrite(signal1[2], HIGH);
      digitalWrite(signal1[0], LOW);
      digitalWrite(signal2[0], HIGH);
      digitalWrite(signal3[0], HIGH);
      digitalWrite(signal4[0], HIGH);
      delay(redDelay);
  }  
    // Making Green LED at signal 1 LOW and making yellow LED at signal 1 HIGH for 2 seconds
      digitalWrite(signal1[1], HIGH);
      digitalWrite(signal1[2], LOW);
      delay(yellowDelay);
      digitalWrite(signal1[1], LOW);
    
    
    }
        // interrupt Making Green  LED at signal 2 and red LED's at other signal HIGH

    if( digitalRead(infra[1])==HIGH)
      {
    while(digitalRead(infra[1])==HIGH)
    {
      digitalWrite(signal1[0], HIGH);
      digitalWrite(signal2[2], HIGH);
      digitalWrite(signal2[0], LOW);
      digitalWrite(signal3[0], HIGH);
      digitalWrite(signal4[0], HIGH);
      delay(redDelay);
    }
    // Making Green LED at signal 2 LOW and making yellow LED at signal 2 HIGH for 2 seconds
      digitalWrite(signal2[1], HIGH);
      digitalWrite(signal2[2], LOW);
      delay(yellowDelay);
      digitalWrite(signal2[1], LOW);
    
    
      }
    
   if( digitalRead(infra[2])==HIGH)
   {
          // interrupt Making Green  LED at signal 3 and red LED's at other signal HIGH

   while(digitalRead(infra[2])==HIGH)
   {
     digitalWrite(signal1[0], HIGH);
      digitalWrite(signal2[0], HIGH);
      digitalWrite(signal3[2], HIGH);
      digitalWrite(signal3[0], LOW);
      digitalWrite(signal4[0], HIGH);
      delay(redDelay);
   }
  // Making Green LED at signal 3 LOW and making yellow LED at signal 3 HIGH for 2 seconds
      digitalWrite(signal3[1], HIGH);
      digitalWrite(signal3[2], LOW);
      delay(yellowDelay);
      digitalWrite(signal3[1], LOW);
   }
   
   if( digitalRead(infra[3])==HIGH)
   {
            // interrupt Making Green  LED at signal 4 and red LED's at other signal HIGH
    while(digitalRead(infra[3])==HIGH)
    {
    digitalWrite(signal1[0], HIGH);
      digitalWrite(signal2[0], HIGH);
      digitalWrite(signal3[0], HIGH);
      digitalWrite(signal4[2], HIGH);
      digitalWrite(signal4[0], LOW);
      delay(redDelay);
    }
    // Making Green LED at signal 4 LOW and making yellow LED at signal 4 HIGH for 2 seconds
      digitalWrite(signal4[1], HIGH);
      digitalWrite(signal4[2], LOW);
      delay(yellowDelay);
      digitalWrite(signal4[1], LOW);

   }
   
// interrupt end

    }


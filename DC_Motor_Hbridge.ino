 const int wheel1A = 6;    // H-bridge leg 1 (pin 2, 1A)
  const int wheel2A = 7;    // H-bridge leg 2 (pin 7, 2A)
  const int enablePin12 = 3;    // H-bridge enable pin

  const int wheel4A = 10;    // H-bridge leg 1 (pin 2, 1A)
  const int wheel3A = 9;    // H-bridge leg 2 (pin 7, 2A)
  const int enablePin34 = 11;    // H-bridge enable pin
  
  int speed_value_motor1 = 0;
   int speed_value_motor2 = 0;
  
   void setup() {
 

    // set all the other pins you're using as outputs:
    Serial.begin(9600);
    pinMode(wheel1A, OUTPUT); 
    pinMode(wheel2A, OUTPUT); 
    pinMode(enablePin12, OUTPUT);
    
    //2nd wheel  
    pinMode(wheel4A, OUTPUT); 
    pinMode(wheel3A, OUTPUT); 
    pinMode(enablePin34, OUTPUT);


    // set enablePin high so that motor can turn on:
    digitalWrite(enablePin12, HIGH); 
    digitalWrite(enablePin34, HIGH); 
  }
  
  void loop() {
    
//      digitalWrite(enablePin12, HIGH); 
//    digitalWrite(enablePin34, HIGH);
    // if the switch is high, motor will turn on one direction:
    Serial.println("the code is working");
    
    //forward
    speed_value_motor1 = 225;
    analogWrite(enablePin12, speed_value_motor1);
    
        speed_value_motor2 = 225;
    analogWrite(enablePin34, speed_value_motor2);

      digitalWrite(wheel1A, LOW);   // set leg 1 of the H-bridge low
      digitalWrite(wheel2A, HIGH);  // set leg 2 of the H-bridge high
 
      digitalWrite(wheel4A, HIGH);  // set leg 1 of the H-bridge high
      digitalWrite(wheel3A, LOW);   // set leg 2 of the H-bridge low
      
      delay (2500);
      
      //turn
        speed_value_motor1 = 100;
    analogWrite(enablePin12, speed_value_motor1);
    
        speed_value_motor2 = 255;
    analogWrite(enablePin34, speed_value_motor2);

       digitalWrite(wheel1A, LOW);   // set leg 1 of the H-bridge low
      digitalWrite(wheel2A, HIGH);  // set leg 2 of the H-bridge high
 
      digitalWrite(wheel4A, HIGH);  // set leg 1 of the H-bridge high
      digitalWrite(wheel3A, LOW);   // set leg 2 of the H-bridge low
      
      delay (700);
      
      //forward
           speed_value_motor1 = 225;
    analogWrite(enablePin12, speed_value_motor1);
    
        speed_value_motor2 = 225;
    analogWrite(enablePin34, speed_value_motor2);

       digitalWrite(wheel1A, LOW);   // set leg 1 of the H-bridge low
      digitalWrite(wheel2A, HIGH);  // set leg 2 of the H-bridge high
 
      digitalWrite(wheel4A, HIGH);  // set leg 1 of the H-bridge high
      digitalWrite(wheel3A, LOW);   // set leg 2 of the H-bridge low
      
      delay (2500);
      
      //backwayd
              speed_value_motor1 = 120;
    analogWrite(enablePin12, speed_value_motor1);
    
        speed_value_motor2 = 120;
    analogWrite(enablePin34, speed_value_motor2);

       digitalWrite(wheel1A, HIGH);   // set leg 1 of the H-bridge low
      digitalWrite(wheel2A, LOW);  // set leg 2 of the H-bridge high
 
      digitalWrite(wheel4A, LOW);  // set leg 1 of the H-bridge high
      digitalWrite(wheel3A, HIGH);   // set leg 2 of the H-bridge low
      
      delay (5000);
      
      //forward 1
       speed_value_motor1 = 225;
    analogWrite(enablePin12, speed_value_motor1);
    
        speed_value_motor2 = 225;
    analogWrite(enablePin34, speed_value_motor2);

      digitalWrite(wheel1A, LOW);   // set leg 1 of the H-bridge low
      digitalWrite(wheel2A, HIGH);  // set leg 2 of the H-bridge high
 
      digitalWrite(wheel4A, HIGH);  // set leg 1 of the H-bridge high
      digitalWrite(wheel3A, LOW);   // set leg 2 of the H-bridge low
      
      delay (2500);
      
      
      //turn 1
        speed_value_motor1 = 255;
    analogWrite(enablePin12, speed_value_motor1);
    
        speed_value_motor2 = 100;
    analogWrite(enablePin34, speed_value_motor2);

       digitalWrite(wheel1A, LOW);   // set leg 1 of the H-bridge low
      digitalWrite(wheel2A, HIGH);  // set leg 2 of the H-bridge high
 
      digitalWrite(wheel4A, HIGH);  // set leg 1 of the H-bridge high
      digitalWrite(wheel3A, LOW);   // set leg 2 of the H-bridge low
      
      delay (700);
     
      
      //forward 2
       speed_value_motor1 = 225;
    analogWrite(enablePin12, speed_value_motor1);
    
        speed_value_motor2 = 225;
    analogWrite(enablePin34, speed_value_motor2);

      digitalWrite(wheel1A, LOW);   // set leg 1 of the H-bridge low
      digitalWrite(wheel2A, HIGH);  // set leg 2 of the H-bridge high
 
      digitalWrite(wheel4A, HIGH);  // set leg 1 of the H-bridge high
      digitalWrite(wheel3A, LOW);   // set leg 2 of the H-bridge low
      
      delay (2500);
      
      
      //turn 2
        speed_value_motor1 = 255;
    analogWrite(enablePin12, speed_value_motor1);
    
        speed_value_motor2 = 100;
    analogWrite(enablePin34, speed_value_motor2);

       digitalWrite(wheel1A, LOW);   // set leg 1 of the H-bridge low
      digitalWrite(wheel2A, HIGH);  // set leg 2 of the H-bridge high
 
      digitalWrite(wheel4A, HIGH);  // set leg 1 of the H-bridge high
      digitalWrite(wheel3A, LOW);   // set leg 2 of the H-bridge low
      
      delay (700);
       
      //forward 3
       speed_value_motor1 = 225;
    analogWrite(enablePin12, speed_value_motor1);
    
        speed_value_motor2 = 225;
    analogWrite(enablePin34, speed_value_motor2);

      digitalWrite(wheel1A, LOW);   // set leg 1 of the H-bridge low
      digitalWrite(wheel2A, HIGH);  // set leg 2 of the H-bridge high
 
      digitalWrite(wheel4A, HIGH);  // set leg 1 of the H-bridge high
      digitalWrite(wheel3A, LOW);   // set leg 2 of the H-bridge low
      
      delay (2500);
      
      
      //turn 3
        speed_value_motor1 = 255;
    analogWrite(enablePin12, speed_value_motor1);
    
        speed_value_motor2 = 100;
    analogWrite(enablePin34, speed_value_motor2);

       digitalWrite(wheel1A, LOW);   // set leg 1 of the H-bridge low
      digitalWrite(wheel2A, HIGH);  // set leg 2 of the H-bridge high
 
      digitalWrite(wheel4A, HIGH);  // set leg 1 of the H-bridge high
      digitalWrite(wheel3A, LOW);   // set leg 2 of the H-bridge low
      
      delay (700);
       
      //forward 4
       speed_value_motor1 = 225;
    analogWrite(enablePin12, speed_value_motor1);
    
        speed_value_motor2 = 225;
    analogWrite(enablePin34, speed_value_motor2);

      digitalWrite(wheel1A, LOW);   // set leg 1 of the H-bridge low
      digitalWrite(wheel2A, HIGH);  // set leg 2 of the H-bridge high
 
      digitalWrite(wheel4A, HIGH);  // set leg 1 of the H-bridge high
      digitalWrite(wheel3A, LOW);   // set leg 2 of the H-bridge low
      
      delay (2500);
      
      
      //turn 4
        speed_value_motor1 = 255;
    analogWrite(enablePin12, speed_value_motor1);
    
        speed_value_motor2 = 100;
    analogWrite(enablePin34, speed_value_motor2);

       digitalWrite(wheel1A, LOW);   // set leg 1 of the H-bridge low
      digitalWrite(wheel2A, HIGH);  // set leg 2 of the H-bridge high
 
      digitalWrite(wheel4A, HIGH);  // set leg 1 of the H-bridge high
      digitalWrite(wheel3A, LOW);   // set leg 2 of the H-bridge low
      
      delay (700);
    
      
            speed_value_motor1 = 0;
    analogWrite(enablePin12, speed_value_motor1);
    
        speed_value_motor2 = 0;
    analogWrite(enablePin34, speed_value_motor2);
    
   delay (1000);
   
  }


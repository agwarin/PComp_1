 
int pingPin = 2;
int buzz = 8;
int r = 6;
int g = 5;
int b = 3; 
 
int  b_far = 300;
int  b_close = 76;
int  g_far = 75;
int  g_close = 51;
int  r_far = 50;
int  r_close = 0;
int buzzOn = 10;
int buzzFreq = 40;

 
void setup() {

  Serial.begin(9600);
  
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
    
  pinMode(buzz, OUTPUT);
 
}
 
void loop()
{
 
  long duration, cm;

  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);
  
  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);
  
   cm = microsecondsToCentimeters(duration);
  if (cm < buzzOn){
    tone (buzz, buzzFreq);
   
  } else {
    noTone (buzz);
  }
  if ((cm < r_far) && (cm > 0)) {
    digitalWrite(r, HIGH);
    delay(50);
    digitalWrite(r, LOW);
    delay(50);
    digitalWrite(g, LOW);
    digitalWrite(b, LOW);
    
  } else if ((cm < g_far) && (cm > g_close)) {
    digitalWrite(r, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(b, LOW);
      
  } else if ((cm < b_far) && (cm > b_close)) {
     
     digitalWrite(r, LOW);
    digitalWrite(g, LOW);
    digitalWrite(b, HIGH);
  }
  
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  
  delay(100);
}
 
 long microsecondsToCentimeters(long microseconds)
{
  return microseconds / 29 / 2;
}
 


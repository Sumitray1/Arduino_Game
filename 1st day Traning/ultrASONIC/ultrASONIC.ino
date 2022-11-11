
const int trigPin = 13;
const int echoPin = 12;
const int led1 = 8;
const int led2=7;


void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  
 
    
}
long duration;
void loop()
{
  
    
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH); // duration in microsecond

  //convert to cm
  long r = 3.4 * duration / 2;     
  float distance = r / 100.00;
  // int distance = duration * 0.034 / 2;
  
  if(distance<10)
  {
    digitalWrite(led1,HIGH);
  }
 else
  {
    digitalWrite(led1,LOW);
  }
  
 delay(50);

 if(distance<100)
  {
    digitalWrite(led2,HIGH);
  }
 else
  {
    digitalWrite(led2,LOW);
  }
  
 delay(50);
}
 

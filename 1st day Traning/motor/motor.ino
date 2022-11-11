int ena = 5;
int in1= 6;
int in2 = 7;
void setup()
{
  pinMode(ena , OUTPUT);
  pinMode(in1 , OUTPUT);
  pinMode(in2 , OUTPUT);
}

void loop()
{
  // clockwise
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(ena, 255);
  delay(2000);
  // stop
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  delay(2000);
  // counter clockwise
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(ena, 255);
  delay(4000);
  //stop
   digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  delay(4000);
  
  // clockwise
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(ena, 185);
  delay(4000);
  // stop
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  delay(4000);
  // counter clockwise
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(ena, 185);
  delay(4000);
  //stop
   digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
 
  
  
 
}

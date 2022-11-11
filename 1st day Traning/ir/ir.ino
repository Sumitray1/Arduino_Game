int ir=8;
void setup() 
{ 
 Serial.begin(9600); 
  pinMode(12, OUTPUT);  
  pinMode(ir,INPUT); 
}
 void loop() 
{ 
  int x= digitalRead(ir);
  Serial.println(x);
  if(x==1) 
 { 
  digitalWrite(12, HIGH); // set the LED on
 } 
  else { 
    digitalWrite(12, LOW); // set the LED off
 } 
delay(100); // wait for a second 
} 

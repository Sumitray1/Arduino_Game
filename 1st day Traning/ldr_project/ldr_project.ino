const int ledPin = 8;
const int ledPin1 = 2;
const int ledPin2 = 3;

const int ldrPin = A1;



void setup() {

Serial.begin(9600);

pinMode(ledPin, OUTPUT);
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);
if ( ldrStatus >=40 && ldrStatus <=100)
{digitalWrite(ledPin2, HIGH);}

if (ldrStatus <=100) {

digitalWrite(ledPin, HIGH);
digitalWrite(ledPin1, LOW);


Serial.print("Its DARK, Turn on the LED : ");

Serial.println(ldrStatus);

} else {

digitalWrite(ledPin, LOW);
digitalWrite(ledPin1, HIGH);
Serial.print("Its BRIGHT, Turn off the LED : ");

Serial.println(ldrStatus);

}

}

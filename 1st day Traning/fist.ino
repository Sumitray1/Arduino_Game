int redLED = 3;
int greenLED = 4;
int blankLED = 5;
void loop() 
{
digitalWrite(redLED, HIGH);     // turn the LED on (HIGH is the voltage level)
digitalWrite(greenLED, HIGH);   // turn the LED on (HIGH is the voltage level)

// here I want the blankLED to go HIGH in sync with redLED and greenLED but only after for instance 20 seconds
// then I want blankLED to go LOW in sync with the two other LEDs and blink in sync after that

delay(800);                     // wait for 800 ms = 0,8 second

digitalWrite(redLED, LOW);      // turn the LED off by making the voltage LOW
digitalWrite(greenLED, LOW);    // turn the LED off by making the voltage LOW
delay(800);                     // wait for 800 ms = 0,8 second

}

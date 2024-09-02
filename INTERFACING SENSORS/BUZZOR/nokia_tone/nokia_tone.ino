// buzzer anode + connected to GND and cathode - will be connected to digital pin 8 
#include "pitches.h"
 
// notes in the melody:
int melody[] = {
  262,294,330,349,392,440,494,523};
int duration = 250;  // 500 miliseconds
 
void setup() 
{
 pinMode(8,OUTPUT);
}
 
void loop() 
{  
  for (int thisNote = 0; thisNote < 8; thisNote++) 
  {
    // pin8 output the voice, every scale is 0.5 sencond
    tone(8, melody[thisNote], duration);
    delay(duration+50);
  }
     
    // Output the voice after several minutes
  // restart after two seconds 
  delay(2000);
}

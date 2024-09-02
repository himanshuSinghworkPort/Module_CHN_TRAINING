// PROGRAM DESCRIPTION VIDEO AT http://www.youtube.com/@himanshusingheducationist7700
// ARDUINO UNO MICROCONTROLLER BASED PROGRAMS
// FOR O LEVEL COURSE BY NIELIT
// Internet of Things and Its Applications M1-R5
// PROGRAM BY HIMANSHU SINGH
// PROGRAM :4
// Write a program to interface buzzer with Arduino board to buzz on/off with the delay of1sec
// Define the pin to which the buzzer is connected
const int buzzerPin = 9;  // You can change this to the actual pin number you are using

void setup() 
{
  Serial.begin(9600);
  // Set the buzzer pin as an OUTPUT
  pinMode(buzzerPin, OUTPUT);
  Serial.println("FREQUNCY BASED SOUND SYSTEM: ");
  Serial.println("WHICH FREQUENCY YOU WANT TO LISTEN: ");
  Serial.println("PRESS 1 FOR: DELTA 0.5-4 ");
  Serial.println("PRESS 2 FOR: THETA 4-8 ");
  Serial.println("PRESS 3 FOR: ALPHA 8-12 ");
  Serial.println("PRESS 4 FOR: BETA 12-30 ");
}

void loop() {
  
  char ch;

  ch=Serial.read();
  if(ch=='1')
  {
    digitalWrite(buzzerPin, HIGH);
    tone(9,4,10000);
    delay(10000);
    noTone(9);
    
   
  }
  else if(ch=='2')
  {
    digitalWrite(buzzerPin, HIGH);
    tone(9,8,10000);
    delay(10000);
    noTone(9);
  }
  else if(ch=='3')
  {
    digitalWrite(buzzerPin, HIGH);
    tone(9,12,10000);
    delay(10000);
    noTone(9);
  }
  else if(ch=='4')
  {
    digitalWrite(buzzerPin, HIGH);
    tone(9,30,100000);
    delay(10000);
    noTone(9);
  }

  }

  
  


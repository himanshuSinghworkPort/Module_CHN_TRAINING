
// red -digital pin 13
// green -digital pin 12
// yellow - digital pin 11

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.print("ENTER VALUE R OR r or G or g or Y or y:");
}
void loop()
{
  char ch;

  
    ch = Serial.read();

    
    if (ch == 'r' || ch == 'R')
    {
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);

    }
    else if (ch == 'g' || ch == 'G')
    {

      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
    }
    else if (ch == 'y' || ch == 'Y')
    {

      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
    }



  }
#include <LiquidCrystal_I2C.h>
#include<Wire.h>
#include <Keypad.h> //Header file for Keypad from https://github.com/Chris--A/Keypad

const byte ROWS = 4; // Four rows
const byte COLS = 4; // Three columns


char keys[ROWS][COLS] = {


  {'1','2','3','A'},


  {'4','5','6','B'},


  {'7','8','9','C'},


  {'*','0','#','D'}


};


byte rowPins[ROWS] = { 9,8,7,6};
// Connect keypad ROW0, ROW1, ROW2 and ROW3 to these Arduino pins.
byte colPins[COLS] = { 5,4,3,2 }; 
// Connect keypad COL0, COL1 and COL2 to these Arduino pins.


Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS ); 
//  Create the Keypad



LiquidCrystal_I2C lcd(0X27,16,2);

long Num1,Num2,Number;
char key,action;
boolean result = false;

 

void setup() 
{

lcd.init();
lcd.backlight();
lcd.print("Calculator"); 
lcd.setCursor(0, 1);   // set the cursor to column 0, line 1
   delay(2000); 
lcd.clear(); 

}


void loop() 
{
  lcd.setCursor(0,0);
key = kpd.getKey();


 //storing pressed key value in a char
if(key!=NO_KEY)
if (key=='*') //If cancel Button is pressed
{ 
  lcd.print ("Button Cancel");
 delay(1000);
 Number=Num1=Num2=0;
  result=false;
 lcd.clear();
 
}

else if (key == '1') //If Button 1 is pressed
{
lcd.println ("Button 1");
delay(800);
lcd.clear(); 

    if (Number==0)

    Number=1;

    else

    Number = (Number*10) + 1; //Pressed twice

    }

    

     else if (key == '4') //If Button 4 is pressed

    {lcd.println ("Button 4"); 
      delay(800);
      lcd.clear();
    if (Number==0)

    Number=4;

    else

    Number = (Number*10) + 4; //Pressed twice

    }

    

    else if (key == '7') //If Button 7 is pressed

    {lcd.println ("Button 7");
      delay(800);
      lcd.clear();
    if (Number==0)

    Number=7;

    else

    Number = (Number*10) + 7; //Pressed twice

    } 

  


    else if (key == '0')

    {lcd.println ("Button 0"); //Button 0 is Pressed
    delay(800);
lcd.clear();
    if (Number==0)

    Number=0;

    else

    Number = (Number*10) + 0; //Pressed twice

    }

    

    else if (key == '2') //Button 2 is Pressed

    {lcd.println ("Button 2"); 
delay(800);
lcd.clear();
     if (Number==0)

    Number=2;

    else

    Number = (Number*10) + 2; //Pressed twice

    }

    

    else if (key == '5')

    {lcd.println ("Button 5"); 
delay(800);
lcd.clear();
     if (Number==0)

    Number=5;

    else

    Number = (Number*10) + 5; //Pressed twice

    }

    

    else if (key == '8')

    {lcd.println ("Button 8"); 
delay(800);
lcd.clear();
     if (Number==0)

    Number=8;

    else

    Number = (Number*10) + 8; //Pressed twice

    }   

  


   else if (key == '#')

    {lcd.println ("Button Equal"); 
delay(800);
lcd.clear();
    Num2=Number;

    result = true;

    }

    

    else if (key == '3')

    {lcd.println ("Button 3"); 
delay(800);
lcd.clear();
     if (Number==0)

    Number=3;

    else

    Number = (Number*10) + 3; //Pressed twice

    }

    

    else if (key == '6')

    {lcd.println ("Button 6"); 
delay(800);
lcd.clear();
    if (Number==0)

    Number=6;

    else

    Number = (Number*10) + 6; //Pressed twice

    }

    

    else if (key == '9')

    {lcd.println ("Button 9");
delay(800);
lcd.clear();
    if (Number==0)

    Number=9;

    else

    Number = (Number*10) + 9; //Pressed twice

    }  


     else if (key == 'A' || key == 'B' || key == 'C' || key == 'D') //Detecting Buttons on Column 4

  {

    Num1 = Number;    

    Number =0;

    if (key == 'A')

    {lcd.println ("Addition"); action = '+';
    delay(800);
lcd.clear();
    
    }

     if (key == 'B')

    {lcd.println ("Subtraction"); action = '-'; 
    delay(800);
lcd.clear();
    }

     if (key == 'C')

    {lcd.println ("Multiplication"); action = '*';
    delay(800);
lcd.clear();
}

     if (key == 'D')

    {lcd.println ("Devesion"); action = '/';
    delay(800);
lcd.clear();
    }  


    delay(100);

  }

if(result==true)

{
  if (action=='+')

    Number = Num1+Num2;


  else if (action=='-')

    Number = Num1-Num2;


  else if (action=='*')

    Number = Num1*Num2;


  else if (action=='/')

    Number = Num1/Num2; 

}



lcd.setCursor(0, 0);   // set the cursor to column 0, line 1
lcd.print(Num1); lcd.print(action); lcd.print(Num2); 
if (result==true)
{
lcd.print(" ="); 
lcd.print(Number);} //Display the result
lcd.setCursor(0, 1);   // set the cursor to column 0, line 1
lcd.print(Number); //Display the result
}



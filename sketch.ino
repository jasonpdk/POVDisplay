/*
 * ================================================================================
 *
 *                  Arduino 17 LED POV Display with Bluetooth
 *                              Version: 1.0
 *
 *                              Jason Keane
 *
 * ================================================================================
*/

#include "data.h" // path to the file with the hex codes for each letter

int columnTime = 300; // time between letters in uS
int letterTime = 500; // time between letters in mS

int rows = 17; // the number of LEDs
int columns = 18; // the number of columns to be printed per letter

int pinNumbers[] = {A0, A1, A2, A3, A4, A5, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2};

int hallSensor = 13;
int hallState;

int tx = 1;
int rx = 0;

/* THE MESSAGE TO BE DISPLAYED */
char stringy[20] = "hi ted";
/*******************************/

void setup()
{
    Serial.begin(9600);
    for (int i = 0; i < rows; i++)
    {
        pinMode(pinNumbers[i], OUTPUT);
    }

    pinMode(hallSensor, INPUT);
    pinMode(tx, OUTPUT);
    pinMode(rx, INPUT);
}

void loop()
{
    //BLUETOOTH
    int i;

    if (Serial.available()) 
    {             
        for (int i = 0; i < 20; i++)
        {
            stringy[i] = (char) 0;
        }
        
        i = 0;
        while (Serial.available() > 0) 
        {
            stringy[i]=Serial.read(); 
            i++;      
        }
    }

    hallState = digitalRead(hallSensor);

    if (hallState == LOW)
    {
        splitString(stringy);
    }
    else
    {
        for (int i = 0; i < rows; i++)
        {
            digitalWrite(pinNumbers[i], LOW);
        }
    }

    
  
    /*for (i = 0; i < 20; i++)
    {
        Serial.print(stringy[i]);
    }
    Serial.println();*/
}
void displayLetter(int letter[])
{
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (bitRead(letter[i], j) == 1)
            {
                digitalWrite(pinNumbers[j], HIGH);
            }
            else
            {
                digitalWrite(pinNumbers[j], LOW);
            }
        }
        delayMicroseconds(columnTime);
    }

    for (int k = 0; k < rows; k++)
    {
        digitalWrite(pinNumbers[k], LOW);
    }
}

void splitString(char string[])
{
    for (int i = 0; i < 20; i++)
    {
        if (string[i] == 'a')
        {
            displayLetter(A);
        }
        else if (string[i] == 'b')
        {
            displayLetter(B);
        }
        else if (string[i] == 'c')
        {
            displayLetter(C);
        }
        else if (string[i] == 'd')
        {
            displayLetter(D);
        }
        else if (string[i] == 'e')
        {
            displayLetter(E);
        }
        else if (string[i] == 'f')
        {
            displayLetter(F);
        }
        else if (string[i] == 'g')
        {
            displayLetter(G);
        }
        else if (string[i] == 'h')
        {
            displayLetter(H);
        }
        else if (string[i] == 'i')
        {
            displayLetter(I);
        }
        else if (string[i] == 'j')
        {
            displayLetter(J);
        } 
        else if (string[i] == 'k')
        {
            displayLetter(K);
        }
        else if (string[i] == 'l')
        {
            displayLetter(L);
        }
        else if (string[i] == 'm')
        {
            displayLetter(M);
        }
        else if (string[i] == 'n')
        {
            displayLetter(N);
        }
        else if (string[i] == 'o')
        {
            displayLetter(O);
        }
        else if (string[i] == 'p')
        {
            displayLetter(P);
        }
        else if (string[i] == 'r')
        {
            displayLetter(R);
        }
        else if (string[i] == 's')
        {
            displayLetter(S);
        }
        else if (string[i] == 't')
        {
            displayLetter(T);
        }
        else if (string[i] == 'u')
        {
            displayLetter(U);
        }
        else if (string[i] == 'v')
        {
            displayLetter(V);
        }
        else if (string[i] == 'x')
        {
            displayLetter(X);
        }
        else if (string[i] == 'y')
        {
            displayLetter(Y);
        }
        else if (string[i] == 'z')
        {
            displayLetter(Z);
        }
        
        delayMicroseconds(letterTime);
    }
}

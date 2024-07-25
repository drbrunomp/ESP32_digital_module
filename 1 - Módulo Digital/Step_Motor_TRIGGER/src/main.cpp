#include <Arduino.h>

#define B1 27
#define B2 26
#define B3 25
#define B4 33
#define S1 4

int stateButton,
    hold_time = 200;


void setup() 
{
  pinMode(B1, OUTPUT);
  pinMode(B2, OUTPUT);
  pinMode(B3, OUTPUT);
  pinMode(B4, OUTPUT);
  pinMode(S1, INPUT);
}

void wave_mode()
{
  digitalWrite(B1, HIGH);
  digitalWrite(B2, LOW);
  digitalWrite(B3, LOW);
  digitalWrite(B4, LOW);
  delay(hold_time);

  digitalWrite(B1, LOW);
  digitalWrite(B2, HIGH);
  digitalWrite(B3, LOW);
  digitalWrite(B4, LOW);
  delay(hold_time);

  digitalWrite(B1, LOW);
  digitalWrite(B2, LOW);
  digitalWrite(B3, HIGH);
  digitalWrite(B4, LOW);
  delay(hold_time);

  digitalWrite(B1, LOW);
  digitalWrite(B2, LOW);
  digitalWrite(B3, LOW);
  digitalWrite(B4, HIGH);
  delay(hold_time);
}

void normal_mode()
{
  digitalWrite(B1, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(B3, LOW);
  digitalWrite(B4, LOW);
  delay(hold_time);

  digitalWrite(B1, LOW);
  digitalWrite(B2, HIGH);
  digitalWrite(B3, HIGH);
  digitalWrite(B4, LOW);
  delay(hold_time);

  digitalWrite(B1, LOW);
  digitalWrite(B2, LOW);
  digitalWrite(B3, HIGH);
  digitalWrite(B4, HIGH);
  delay(hold_time);

  digitalWrite(B1, HIGH);
  digitalWrite(B2, LOW);
  digitalWrite(B3, LOW);
  digitalWrite(B4, HIGH);
  delay(hold_time);
}

void loop()
{
    stateButton = digitalRead(S1);
    if(stateButton == 1)
    {
      wave_mode();
    }
    else
    {
      normal_mode();
    }  
}
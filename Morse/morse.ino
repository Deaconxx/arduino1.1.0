#include <Morse.h>

Morse morse(13);
void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  char a;
  String stri="";
  String str="";
  int temp = 0;
  while(Serial.available()>0)
  {
    a = Serial.read();
    stri = stri + a;
    delay(2);
    temp = 1;
    }
    stri.toUpperCase();
  if(temp)
  {
    str = morse.putmorse(stri);
    Serial.println(str);
  }
  morse.morselit(stri);
  // put your main code here, to run repeatedly:
}

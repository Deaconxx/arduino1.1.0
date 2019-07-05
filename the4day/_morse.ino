int pin = 13;


void setup() 
{
  Serial.begin(9600);
  pinMode(pin,OUTPUT);
  // put your setup code here, to run once:

}

void loop() 
{
  char a;
  String stri="";
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
    String k = "";
    String str = "";
    for(int i = 0;stri[i]!= '\0';i++)
    {
    
      switch(stri[i])
      {
        case 'A': k="*-";break;
        case 'B': k="-***";break;
        case 'C': k="-*-*";break;
        case 'D': k="-**";break;
        case 'E': k="*";break;
        case 'F': k="**-*";break;
        case 'G': k="--*";break;
        case 'H': k="--*";break;
        case 'I': k="**";break;
        case 'J': k="*--";break;
        case 'K': k="-*-";break;
        case 'L': k="*-**";break;
        case 'M': k="--";break;
        case 'N': k="-*";break;
        case 'O': k="---";break;
        case 'P': k="*--*";break;
        case 'Q': k="--*-";break;
        case 'R': k="*-*";break;
        case 'S': k="***";break;
        case 'T': k="-";break;
        case 'U': k="**-";break;
        case 'V': k="***-";break;
        case 'W': k="*--";break;
        case 'X': k="-**-";break;
        case 'Y': k="-*--";break;
        case 'Z': k="--**";break;
        case ' ': k="/";break;
        case '\n':k="\n";break;
        } 
        str = str + ' ' + k;
      }
      Serial.println(str);
    }
    for(int j = 0;stri[j]!='\0';j++)
    {
        switch(stri[j])
        {
          case'A':dot();dash();break;
          case'B':dash();dot();dot();dot();break;
          case'C':dash();dot();dash();dot();break;
          case'D':dash();dot();dot();break;
          case'E':dot();break;
          case'F':dot();dot();dash();dot();break;
          case'G':dash();dash();dot();break;
          case'H':dot();dot();dot();dot();break;
          case'I':dot();dot();break;
          case'J':dot();dash();dash();dash();break;
          case'K':dash();dot();dash();break;
          case'L':dot();dash();dot();dot();break;
          case'M':dash();dash();break;
          case'N':dash();dot();break;
          case'O':dash();dash();dash();break;
          case'P':dot();dash();dash();dot();break;
          case'Q':dash();dash();dot();dash();break;
          case'R':dot();dash();dot();break;
          case'S':dot();dot();dot();break;
          case'T':dash();break;
          case'U':dot();dot();dash();break;
          case'V':dot();dot();dot();dash();break;
          case'W':dot();dash();dash();break;
          case'X':dash();dot();dot();dash();break;
          case'Y':dash();dot();dash();dash();break;
          case'Z':dash();dash();dot();dot();break;
          case' ':space();break;
          case'\n':enter();break;
          }
    } 
  // put your main code here, to run repeatedly:
}

void dot()
{
  digitalWrite(pin,HIGH);
  delay(250);
  digitalWrite(pin,LOW);
  delay(250);
}
  
void dash()
{
  digitalWrite(pin,HIGH);
  delay(1000);
  digitalWrite(pin,LOW);
  delay(250);
}
void space()
{
  digitalWrite(pin,LOW);
  delay(750);
}
void enter()
{
  digitalWrite(pin,LOW);
  delay(1750);
}

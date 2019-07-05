class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
  private:
    int _pin;
};

Morse::Morse(int pin)
{
  pinMode(pin,OUTPUT);
  _pin=pin;
}

void Morse::dot()
{
  digitalWrite(_pin,HIGH);
  delay(250);
  digitalWrite(_pin,LOW);
  delay(250);
}

void Morse::dash()
{
  digitalWrite(_pin,HIGH);
  delay(1000);
  digitalWrite(_pin,LOW);
  delay(250);
}
Morse morse(13);
 
void setup()
{
}
 
void loop()
{
  morse.dot(); morse.dot(); morse.dot();
  morse.dash(); morse.dash(); morse.dash();
  morse.dot(); morse.dot(); morse.dot();
  delay(3000);
}

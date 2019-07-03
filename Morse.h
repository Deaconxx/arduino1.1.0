#ifndef Morse_h 
#define Morse_h 
#include "Arduino.h"
class Morse
{
  public: 
    Morse(int pin);
    void dot(); 
    void dash();
	String putmorse(String n);
	void morselit(String n);
	void enter();
	void space();
  private: 
    int _pin;
  };
#endif

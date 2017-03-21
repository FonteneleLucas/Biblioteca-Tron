/*
  Morse.h - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/
#ifndef Tron_h
#define Tron_h

#include "Arduino.h"

class Tron
{
  public:
    ~Tron();
    void velocidade(int speed);
    void andar(String direcao);
  private:
  	int _speed = 100;
  	String _direcao = "";
};

#endif
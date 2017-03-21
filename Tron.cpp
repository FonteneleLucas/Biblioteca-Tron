/*
  Morse.cpp - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Tron.h"

int pinMotors[] = {4, 5, 7, 6};
//                EF, ET, DF, DT

Tron::~Tron(){
	for (int i = 0; i < sizeof(pinMotors); i++) {
    pinMode(pinMotors[i], OUTPUT);
  }
}

void Tron::velocidade(int speed){
	_speed = speed;
}

void Tron::andar(String direcao){
	_direcao = direcao;
	if(_direcao == "frente"){
		analogWrite(pinMotors[0], _speed);
		analogWrite(pinMotors[1], 0);
		analogWrite(pinMotors[2], _speed);
		analogWrite(pinMotors[3], 0);
	}else if(_direcao == "tras"){
		analogWrite(pinMotors[0], 0);
		analogWrite(pinMotors[1], _speed);
		analogWrite(pinMotors[2], 0);
		analogWrite(pinMotors[3], _speed);
	}else if (_direcao == "direita"){
		analogWrite(pinMotors[0], _speed);
		analogWrite(pinMotors[1], 0);
		analogWrite(pinMotors[2], 0);
		analogWrite(pinMotors[3], _speed);
	}else if(_direcao == "esquerda"){
		analogWrite(pinMotors[0], 0);
		analogWrite(pinMotors[1], _speed);
		analogWrite(pinMotors[2], _speed);
		analogWrite(pinMotors[3], 0);
	}else if(_direcao == "parar"){
		analogWrite(pinMotors[0], 0);
		analogWrite(pinMotors[1], 0);
		analogWrite(pinMotors[2], 0);
		analogWrite(pinMotors[3], 0);
	}else{
		analogWrite(pinMotors[0], 0);
		analogWrite(pinMotors[1], 0);
		analogWrite(pinMotors[2], 0);
		analogWrite(pinMotors[3], 0);
		Serial.println("Verifique o argumento passado na função andar() está minusculo");
	}
}

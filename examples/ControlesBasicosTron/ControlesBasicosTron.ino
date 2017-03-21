#include <Tron.h>

//Portas PWM (4, 5, 7, 6) respectivamente: EF, ET, DF, DT

Tron tron;

void setup() {
  Serial.begin(9600);
  //O método velocidade é opcional. Possui velocidade default de 100
  tron.velocidade(80);
}

void loop() {
  tron.andar("frente");
  delay(1500);
  tron.andar("tras");
  delay(1500);
  tron.andar("esquerda");
  delay(1500);
  tron.andar("direita");
  delay(1500);
  tron.andar("parar");
  delay(1500);
  tron.andar("invalido");
  delay(1500);

}

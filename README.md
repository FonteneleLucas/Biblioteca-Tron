# Biblioteca-TronV1.0
Biblioteca Tron para simplificar controle de robô seguidor de linha.
O objetivo desta biblioteca, é facilitar bastante o controle do robô seguidor de linha fazendo o uso das funçõs Velocidade(100), Andar(String sentido), passando como parâmentro uma String literal, que define o sentido.

Portas PWM (4, 5, 7, 6) respectivamente: EF, ET, DF, DT
* Podendo serem modificadas editando o arquivo Tron.cpp

Exemplo: 
Entre o intervalo de 0 a 255 - > velocidade(100);
Andar com parâmentro: "frente", "tras", "esquerda", "direita", "parar". 
* Qualquer valor diferente dos citados, é considerado invalido, sendo assim o robô permanecerá parado!

andar("frente");
andar("tras");
andar("esquerda");
andar("direita");
andar("parar");
andar("invalido");

By FonteneleLucas to DrayoTecnologies



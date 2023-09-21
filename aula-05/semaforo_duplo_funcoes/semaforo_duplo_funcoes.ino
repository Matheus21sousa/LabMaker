  const int pinoLedR = 7; //LED vermelho no pino 7
  const int pinoLedY = 6; //o amarelo no pino 6
  const int pinoLedG = 5; //e o verde no pino 5
  const int pinoLedPR = 2; //O pino do LED vermelho de pedestres é 2
  const int pinoLedPG = 3; //e o verde de pedestres é 3

  void setup (){
    pinMode(pinoLedR,OUTPUT); //Declaramos cada uma das
    pinMode(pinoLedY,OUTPUT); //portas como uma saída
    pinMode(pinoLedG,OUTPUT);
    pinMode(pinoLedPR,OUTPUT);
    pinMode(pinoLedPG,OUTPUT);
  }

  void loop(){
    primeiroEstagio();
    //Aberto para carros, fechado para pedestres
    segundoEstagio();
    //Amarelo para carros, fechado para pedestres
    terceiroEstagio();
    //Fechado para carros, aberto para pedestres
  }

  void primeiroEstagio(){
    digitalWrite(pinoLedR,LOW); //O LED vermelho é desligado
    digitalWrite(pinoLedPG,LOW); //e o  LED verde de pedestres é desligado
    digitalWrite(pinoLedG,HIGH); //O LED verde é acionado
    digitalWrite(pinoLedPR,HIGH); //O LED vermelho de pedestres é acionado
    delay(10000); //Espera 10s
  }

  void segundoEstagio(){
    digitalWrite(pinoLedG,LOW); //O LED verde é desligado
    digitalWrite(pinoLedY,HIGH); //e o amarelo é acionado
    delay(3000); //Espera 3s
  }

  void terceiroEstagio(){
    digitalWrite(pinoLedY,LOW); //O LED amarelo é desligado
    digitalWrite(pinoLedR,HIGH); //e o vermelho é acionado
    digitalWrite(pinoLedPR,LOW); //O LED vermelho de pedestres é desligado
    digitalWrite(pinoLedPG,HIGH); //e o  LED verde de pedestres é acionado
    delay(5000); //Espera 5s
  }



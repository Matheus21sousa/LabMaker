void setup() {
  Serial.begin(9600); /*Quando queremos usar o terminal
  do Arduino devemos inicializar o mesmo no setup.
  9600 é a taxa de transmissão do Arduino, para outros
  microcontroladores esse valor pode mudar */
}

void loop() {
  printarOi(); // Aqui chamamos a função
}

void printarOi(){ /* Quando a função "printarOi" for
  chamada ela executará os comandos abaixo em sequência */
  Serial.print("Oi, "); // Funcao embutida para mostrar algo no terminal
  Serial.println("tudo bem?"); // println (LN), pula uma linha depois
  delay(2000);
}
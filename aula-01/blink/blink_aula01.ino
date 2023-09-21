void setup() {
  // Configuração, executado apenas uma vez
  pinMode(LED_BUILTIN, OUTPUT);
  /* Declaramos que o LED que acenderá é
  uma saída, isto é, recebe sinais do Arduino */
}

void loop() {
  // Loop, as linhas abaixo serão repetidas
  digitalWrite(LED_BUILTIN, HIGH);
  // Enviamos o comando para acionar o LED
  delay(1000);
  // Esperamos por 1000 milissegundos, ou 1s                      
  digitalWrite(LED_BUILTIN, LOW);   
  // Enviamos o comando para desligar o LED
  delay(1000);
  /* Esperamos por 1 segundo antes de retornar
  ao começo do loop */                     
}

// Declaração de constantes (nº dos pinos)
const int pinoPot = A0;
const int pinoLedR = 2;
const int pinoLedG = 3;
// Declaração de variáveis
int valorPot = 0; // Variável que guardará o valor do potenciômetro

void setup()
{
  pinMode(pinoPot, INPUT);   // Pino do potenciômetro é um entrada
  pinMode(pinoLedR, OUTPUT); // e os dos LEDs são saídas
  pinMode(pinoLedG, OUTPUT);
}

void loop()
{
  valorPot = analogRead(pinoPot); // Guarda o valor do potenciômetro
  // lido com a função analogRead() na variável valorPot

  while (valorPot >= 800)
  { // Enquanto o valor do potenciômetro for
    // maior do que 800, o LED verde acenderá e o vermelho apagará
    digitalWrite(pinoLedG, HIGH);
    digitalWrite(pinoLedR, LOW);
    valorPot = analogRead(pinoPot);
  }
  while (valorPot < 800)
  { // Enquanto o valor for menor o contrário
    // que 800 o contrário ocorrerá
    digitalWrite(pinoLedG, LOW);
    digitalWrite(pinoLedR, HIGH);
    valorPot = analogRead(pinoPot); // O valor do potenciômetro deve
    // ser monitorado dentro do while(), pois ele é a condição de parada
  }
  delay(10);
}
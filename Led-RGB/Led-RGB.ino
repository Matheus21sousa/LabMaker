// Pinagem:
// Pino maior: GND
// Pino 1x esq.: R
// Pino 1x dir.: G
// Pino 2x dir.: B 

// DEFINIÇÃO DE PORTAS - Todas devem ser digitais PWM (~)
int pinoR = 7; //Pino RED
int pinoG = 5; //Pino Green
int pinoB = 3; //Pino Blue

// DEFINIÇÕES DE xR, xG, xB
int xR = 0; 
int xG = 255; 
int xB = 255; 

// Atentar para forma como começam os valores, pois altera o funcionamento do loop //
//
//  Para xY = 0, no "void loop", o primeiro "for" deve ser crescente:
//    xY < 255      
//    xY = xY + 5
//  Para xY = 255, no "void loop", o primeiro "for" deve ser decrescente:
//    xY > 0      
//    xY = xY - 5

// DEFINIÇÃO DO ESTADO DE SAÍDA DAS PORTAS
void setup(){
  delay(5000);
  pinMode(pinoR, OUTPUT); 
  pinMode(pinoG, OUTPUT); 
  pinMode(pinoB, OUTPUT); 
}

void loop(){
  // Reduz verde (xG) 
  for (xG = 255; xG > 0; xG = xG-5){
    color(xR, xG, xB);
    delay(100);
    }
  // Aumenta vermelho (xR)
  for (xR = 0; xR < 255; xR = xR+5){
    color(xR, xG, xB);
    delay(100);
    }
  // Reduz azul (xB)
  for (xB = 255; xB > 0; xB = xB-5){
    color(xR, xG, xB);
    delay(100);
    }
  // Aumenta verde (xG)
  for (xG = 0; xG < 255; xG = xG+5){
    color(xR, xG, xB);
    delay(100);
    }
  // Reduz vermelho (xR)
  for (xR = 255; xR > 0; xR = xR-5){
    color(xR, xG, xB);
    delay(100);
    }
  // Aumenta azul (xB)
  for (xB = 0; xB < 255; xB = xB+5){
    color(xR, xG, xB);
    delay(100);
    }
}

// DEFINIÇÃO DO (R, G, B)
// Cria a função "setColor" que contém 3 números inteiros para valores de 0 a 255 // 
void color(int Red, int Green, int Blue){
  analogWrite(pinoR, Red); 
  analogWrite(pinoG, Green); 
  analogWrite(pinoB, Blue); 
} 

// HELP DO CÓDIGO //

// Função para apenas ligar o led:
//  void loop(){
//    color(x, y, z); 
//  }

// Função para sair de xY = 255 para xY = 0:
//  for (xY = 255; xY > 0; xY = xY-5){
//    color(xR, xG, xB);
//    delay(50);
//    }

// Função para sair de xY = 0 para xY = 255:
//  for (xY = 0; xY < 255; xY = xY+5){
//    color(xR, xG, xB);
//    delay(50);
//    }

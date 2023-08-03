// MADE BY: Matheus Martins de Sousa //
//
// O presente projeto é aberto a correções
// Use com sabedoria!
// :)
//

// DEFINIÇÕES DE PORTAS
#define pinoTrig 6 // Pino de comunicaçao ligado do Trigger
#define pinoEcho 4 // Pino de comunicaçao ligado do Echo
#define buzzer 12  // Pino de comunicação do buzer

// VARIÁVEIS UTILIZADAS
unsigned long travel; 
float distancia;
float velocidade_som = 0.00034029; // Velocidade do som em metros por microssegundo

void setup()
{
  pinMode(pinoTrig, OUTPUT);
  pinMode(pinoEcho, INPUT);
  pinMode(buzzer, OUTPUT);   
  
  Serial.begin(9600);
  Serial.println("## Iniciando leitura ##");
  Serial.println(". . . . . .");
}

void loop()
{
  sinal();
  
  travel = pulseIn(pinoEcho, HIGH);
  distancia = travel*0.034029/2; 
  // O pulso mensurado "travel", inclui a viagem de ida e volta
  // Portanto, o valor mensurado é dividido por 2 para obter a distância real
  
  barulho();
    
  Serial.print("Distancia: ");
  Serial.print((distancia),2);
  Serial.println(" cm");
  Serial.println(". . . . . .");
  
  // Intervalo entre atualizacao da distancia
  delay(1000); 
}

// FUNÇÃO 01: Responsavel por mensurar a distância até o objeto
void sinal()
{
  digitalWrite (pinoTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite (pinoTrig, LOW); 
}

// FUNÇÃO 02: Responsável por acionar o buzzer a depender da distância mensurada
void barulho()
{
  if (distancia<20){
    tone(buzzer,528);    
    delay(150);
    noTone(buzzer);
    delay(50);
  }
  else if (distancia>=20 && distancia<30){
    tone(buzzer,440);    
    delay(150);
    noTone(buzzer);
    delay(250);
  }
  else if (distancia>=30 && distancia<40){
    tone(buzzer,349);    
    delay(150);
    noTone(buzzer);
    delay(450);
  }
  else if (distancia>=40 && distancia<50){
    tone(buzzer,294);    
    delay(150);
    noTone(buzzer);
    delay(650);
  }
}
  
// HELP DO PROJETO //

// Frequências para o buzzer:
// Dó    262 Hz
// Ré    294 Hz
// Mi    330 Hz
// Fá    349 Hz
// Sol   392 Hz
// Lá    440 Hz
// Si    494 Hz
// #Dó   528 Hz
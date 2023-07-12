#define pinoTrig 6 // Pino de comunicaçao ligado do Trigger
#define pinoEcho 4 // Pino de comunicaçao ligado do Echo
#define buzzer 12// Pino de comunicação do buzer

unsigned long tempo;
float distancia;
float velocidade_som = 0.00034029;

void setup()
{
  pinMode (pinoTrig, OUTPUT);
  pinMode (pinoEcho, INPUT);
  pinMode(buzzer,OUTPUT);   
  
  Serial.begin(9600);
  Serial.println("## Iniciando leitura ##");
  Serial.println(". . . . . .");
}

void loop()
{
  sinal();
  
  tempo = pulseIn(pinoEcho, HIGH, 23589);
  distancia = tempo*0.034029/2;
  
  barulho();
    
  Serial.print("Distancia: ");
  Serial.print((distancia),2);
  Serial.println(" cm");
  Serial.println(". . . . . .");
  
  delay(500);
}

void sinal()
{
  digitalWrite (pinoTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite (pinoTrig, LOW); 
}

//
void barulho()
{
  if (distancia<20){
    tone(buzzer,528);    
    delay(50);
    noTone(buzzer);
    delay(100);
    tone(buzzer,528);    
    delay(50);
    noTone(buzzer);
    delay(100);
    tone(buzzer,528);    
    delay(50);
    noTone(buzzer);
    delay(100);
    tone(buzzer,528);    
    delay(50);
    noTone(buzzer);
  }
  else if (distancia>=20 && distancia<30){
    tone(buzzer,440);    
    delay(150);
    noTone(buzzer);
    delay(350);
    tone(buzzer,440);    
    delay(150);
    noTone(buzzer);
    delay(350);
    tone(buzzer,440);    
    delay(150);
    noTone(buzzer);
  }
  else if (distancia>=30 && distancia<40){
    tone(buzzer,349);    
    delay(150);
    noTone(buzzer);
    delay(500);
    tone(buzzer,349);    
    delay(150);
    noTone(buzzer);
  }
  else if (distancia>=40 && distancia<50){
    tone(buzzer,294);    
    delay(150);
    noTone(buzzer);
    delay(650);
    tone(buzzer,294);    
    delay(150);
    noTone(buzzer);
  }
}
  

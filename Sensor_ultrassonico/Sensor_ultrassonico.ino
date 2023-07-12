#include "Ultrasonic.h" 

const int echoPin = 7; //(Recebe)
const int trigPin = 6; //(Envia)

Ultrasonic ultrasonic(trigPin,echoPin); //Inicializa os pinos

int distancia; //Var(int)
String result; //Var(string)

void setup(){
  pinMode(echoPin, INPUT); //Define pino de entrada
  pinMode(trigPin, OUTPUT); //Define pino de saída
  Serial.begin(9600); //Inicia porta serial
  }

void loop(){
  hcsr04(); // Chama método "hcsr04()"
  Serial.println(result); //Imprime medida

}
//Método de cálculo da distância
void hcsr04(){
    digitalWrite(trigPin, LOW); //SETA O PINO 6 COM UM PULSO BAIXO "LOW"
    delayMicroseconds(2); //INTERVALO DE 2 MICROSSEGUNDOS
    digitalWrite(trigPin, HIGH); //SETA O PINO 6 COM PULSO ALTO "HIGH"
    delayMicroseconds(10); //INTERVALO DE 10 MICROSSEGUNDOS
    digitalWrite(trigPin, LOW); //SETA O PINO 6 COM PULSO BAIXO "LOW" NOVAMENTE
    //FUNÇÃO RANGING, FAZ A CONVERSÃO DO TEMPO DE
    //RESPOSTA DO ECHO EM CENTIMETROS, E ARMAZENA
    //NA VARIAVEL "distancia"
    distancia = (ultrasonic.Ranging(CM)); //VARIÁVEL GLOBAL RECEBE O VALOR DA DISTÂNCIA MEDIDA
    result = String(distancia); //VARIÁVEL GLOBAL DO TIPO STRING RECEBE A DISTÂNCIA(CONVERTIDO DE INTEIRO PARA STRING)
    delay(500); //INTERVALO DE 500 MILISSEGUNDOS
 }
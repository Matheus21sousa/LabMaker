/* SERVO MOTOR	
    By: Matheus M. Sousa
    Date: 17 august 2023
    O presente projeto é aberto a correções
    Use com sabedoria!
    :)

    Based on - https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
    Arduino library Servo.h is required;
    Library version: 1.2.1 
*/

// Pinagem (MicroServo 9g):
//  Laranja  -  PWM
//  Vermelho -  5V
//  Marrom   -  GND

// BIBLIOTECAS UTILIZADAS
#include <Servo.h>

// VARIÁVEIS E OBJETOS UTILIZADAS
int pos = 0;                           //Cria a variável "pos" que irá armazenar a posição, em graus, do servo
Servo myservo;                         //Define o objeto chamado "myservo"

// VOID SETUP
void setup(){
  myservo.attach(3);                   //Define a porta de comunicação com o servo
  myservo.write(0);                    //Inicia o servo na posição 0°
}

// VOID LOOP
void loop(){
  for (pos = 0; pos <= 180; pos+=2){   //Para "pos" começando em 0 e, enquanto menor que 180, aumenta a variável "pos" em +2
    myservo.write(pos);                //Ajuste da nova posição a cada mudança na variável "pos"
  	delay(30);                         //Intervalo entre mudanças de posição de 30 milisegundos
  }
  for (pos = 180; pos >= 0; pos-=20){  //Para "pos" começando em 180 e, enquanto menor que 0, reduz a variável "pos" em -20
    myservo.write(pos);                //Ajuste da nova posição a cada mudança na variável "pos"
  	delay(60);                         //Intervalo entre mudanças de posição de 60 milisegundos
  } 
}

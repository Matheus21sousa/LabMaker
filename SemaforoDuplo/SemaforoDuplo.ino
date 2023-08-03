// MADE BY: Matheus Martins de Sousa //
//
// O presente projeto é aberto a correções
// Use com sabedoria!
// :)
//

//PORTAS CONECTADAS: Semáforo para carros
#define rCar 7 
#define yCar 5
#define gCar 3
//PORTAS CONECTADAS: Semáforo para pedestres
#define rPedestre 9
#define gPedestre 11

//DEFINIÇÕES DE ESTADOS 
void setup()
{
  pinMode(rCar, OUTPUT);
  pinMode(yCar, OUTPUT);
  pinMode(gCar, OUTPUT);
  pinMode(rPedestre, OUTPUT);
  pinMode(gPedestre, OUTPUT);
}

//EXECUÇÃO DO PROGRAMA
void loop()
{
  verde();
  amarelo();
  vermelho();
}

//FUNÇÃO 01: Sinal verde para carros
void verde(){
  digitalWrite(gCar, HIGH);        //Liga sinal verde para carros
  digitalWrite (rPedestre, HIGH);  //Liga sinal vermelho para pedestres
  delay(7000);
  digitalWrite(gCar, LOW);         //Desliga sinal verde para carros
}

//FUNÇÃO 02: Sinal amarelo 
void amarelo(){
  digitalWrite(yCar, HIGH);        //Liga sinal amarelo 
  delay(2000);
  digitalWrite(yCar, LOW);         //Desliga sinal amarelo
  digitalWrite(rPedestre, LOW);    //Desliga sinal vermelho para pedestres
}

//FUNÇÃO 03: Sinal vermelho para carros
void vermelho(){
  digitalWrite(rCar, HIGH);        //Liga sinal vermelho para carro
  
  digitalWrite(gPedestre, HIGH);   //Liga sinal verde para pedestres
  delay(5800); 
  digitalWrite(gPedestre, LOW);    //Sinal verde para pedestres começa a piscar (liga e desliga) antes de desligar
  delay(200); 
  digitalWrite(gPedestre, HIGH);
  delay(200);
  digitalWrite(gPedestre, LOW);
  delay(200); 
  digitalWrite(gPedestre, HIGH);
  delay(200);
  digitalWrite(gPedestre, LOW);
  delay(200); 
  digitalWrite(gPedestre, HIGH);
  delay(200);
  digitalWrite(gPedestre, LOW);    //Desliga sinal vermelho para carros
  
  digitalWrite(rCar, LOW);         //Desliga sinal vermelho para carros
}
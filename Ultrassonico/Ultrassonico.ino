// MADE BY: Matheus Martins de Sousa //
//
// O presente projeto é aberto a correções
// Use com sabedoria!
// :)
//

//PORTAS CONECTADAS
const int pinoTrig = 6;                 //(Envia sinal ultrassonico)
const int pinoEcho = 7;                 //(Recebe sinal enviado)

//VARIÁVEIS UTILIZADAS
unsigned long travel; 
float distancia_metros;                 //Variavel que armazena distancia em metros                  
float distancia;                        //Variavel que armazena distancia em centrímetros
float velocidade_som = 0.00034029;      //Velocidade do som em metros por microssegundo

//DEFINIÇÕES DE ESTADOS
void setup(){
  pinMode(pinoEcho, INPUT);             //Define pino de entrada
  pinMode(pinoTrig, OUTPUT);            //Define pino de saida
  Serial.begin(9600);                   //Inicia porta serial
  Serial.println("## Iniciando leitura ##");
  Serial.println(". . . . . .");
}

//EXECUÇÃO DO PROGRAMA
void loop(){
  sinal();
  travel = pulseIn(pinoEcho, HIGH);
  distancia_metros = travel*velocidade_som/2;   //O sinal faz ida e volta, por isso, divide-se por 2
  distancia = distancia_metros*100;             //"1 metro = 100 centimetros"
  
  Serial.print("Distancia calculada: ");
  Serial.print(distancia);              
  Serial.println(" cm;");
  delay(500);
}

// FUNÇÃO: Responsavel por mandar um pulso ultrassonico
void sinal()
{
  digitalWrite (pinoTrig, HIGH);        //Pino trig emite um pulso ultrassonico de 10 microssegundos
  delayMicroseconds(10);
  digitalWrite (pinoTrig, LOW);         //Pino trig volta ao estado latente (sem emitir sinal);
}
  int a = 3; // Variaveis que serao passadas
  int b = 2; // como parametros de funcoes

  void setup() {
    Serial.begin(9600);
  }

  void loop() {
  /* Podemos atribuir o valor retornado da funcao
  a uma variavel para usarmos posteriormente */
    int resultadoSoma = somaInteiros(a, b);
  /* Tambem podemos usar o valor retornado como
  argumento de uma outra funcao, nesse caso a "print" */
    Serial.println(divisaoInteiros(resultadoSoma, a));
    delay(5000);
  }

  int somaInteiros(int num1, int num2){
  /* Como somas entre inteiros sempre retornarao um
  numero inteiro, o tipo de variavel da funcao e "int" */
    int soma = num1 + num2;
    return soma; 
  }

  float divisaoInteiros(float num1, float num2){
  /* Ja no caso da divisao de inteiros, podemos ter
  resultados com valores decimais, por isso o tipo
  da variavel da funcao e "float" */
    float divisao = num1/num2;
    return divisao;
  }




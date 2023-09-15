#include <Servo.h>
// Declaramos a biblioteca do servo motor

Servo objetoServo;
// Criamos um objeto "servo" utilizando a biblioteca Servo.h
int anguloServo = 0;

void setup()
{
    objetoServo.attach(9); // Attach = anexar, anexamos o servo ao pino 9
    // Este pino deve ser necessariamente um pino digital PWM (~).
}

void loop()
{
    for (int i = 0; i <= 255; i = i + 1)
    {                                             // Os pino PWM podem enviar valores
        de                                        // 0 a 255 utilizando a função analogWrite().
            anguloServo = map(i, 0, 255, 0, 180); // Utilizando a função map()
        // para transformar uma escala de 0-255 do pino PWM em uma escala 0 a 180
        // correspondente ao valor de graus do motor.
        objetoServo.write(anguloServo);
        // Gira o servo em pequenos incrementos
        delay(20); // Pequeno atraso para o servo motor concluir
                   // sua ação antes que chegue o próximo comando
    }

    for (int i = 255; i >= 0; i--)
    { // Faz o movimento oposto
        anguloServo = map(i, 0, 255, 0, 180);
        objetoServo.write(anguloServo);
        delay(20);
    }
}
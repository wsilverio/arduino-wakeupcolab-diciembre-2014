// jueves3.ino

// importa a biblioteca Servo.h
#include <Servo.h> 

// define os pinos
#define pot A0
#define pinoServo 9

// cria o objeto 'meuservo'
Servo meuservo;

void setup() {
    // inicializa o servo
    meuservo.attach(pinoServo);
}

void loop() {
    // converte o valor do potenciometro para a variavel angulo
    int angulo = map(analogRead(pot), 0, 1023, 0, 180);
    // posiciona o servo
    meuservo.write(angulo);
    // espera o servo se posicionar
    delay(15);
}
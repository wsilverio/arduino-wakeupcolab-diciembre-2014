// jueves1.ino

// led conectado a um pino PWM
#define led 9
// potenciometro conectado a uma entrada analogica
#define pot A5

void setup() {
    // inicializa a comunicacao serial
    Serial.begin(9600);
}

void loop() {
    // converte a leitura do potenciometro para a faixa de PWM
    int brilho = map(analogRead(pot), 0, 1023, 0, 255);
    // imprime o valor do PWM
    Serial.println(brilho);
    // define o ciclio de trabalho para o led
    analogWrite(led, brilho);
}
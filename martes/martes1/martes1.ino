// martes1.ino

// led conectado ao pino 13
#define led 13

/* funcao de configuracao */
void setup() {
    // led configurado como saida digital
    pinMode(led, OUTPUT);
}
/* funcao loop */
void loop() {
    // acende o led
    digitalWrite(led, HIGH);
    // aguarda 0.5s
    delay(500);
    // apaga o led
    digitalWrite(led, LOW);
    // aguarda 0.5s
    delay(500);
}
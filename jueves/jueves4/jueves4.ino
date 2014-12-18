// jueves4.ino
// baseado em http://youtu.be/57S3dylfw3I

// buzzer conectado ao pino 8
#define buzzer 8
// ldr conetado a entrada analog. 0
#define ldr A0
// led conectado ao pino 13
#define led 13

// variaveis de controle
int valMin = 1023, valMax = 0;

void setup() {
    // led como saida
    pinMode(led, OUTPUT);
    // aguarda 1s e acende o led
    delay(1000);
    digitalWrite(led, HIGH);
    
    // armazena o tempo desde o ultimo reset
    unsigned long tempo = millis();

    // calibracao durante 5s
    while((millis() - tempo) < 5000){
        // armazena o valor do sensor
        int leitura = analogRead(ldr);
        // armazena o menor valor lido
        if(leitura < valMin){
            valMin = leitura;
        }
    }

    // armazena o tempo desde o ultimo reset
    tempo = millis();

    // apaga o led e aguarda 1s
    digitalWrite(led, LOW);
    delay(1000);
    // indica uma nova medicao
    digitalWrite(led, HIGH);

    // calibracao durante 5s 
    while((millis() - tempo) < 5000){
        // armazena o valor do sensor
        int leitura = analogRead(ldr);
        // armazena o maior valor lido
        if(leitura > valMax){
            valMax = leitura;
        }
    }

    // apaga o led
    digitalWrite(led, LOW);

    delay(1000);
}

void loop() {
	// converte o valor do sensor para um valor entre 50 e 4kHz
	int freq = map(analogRead(ldr), valMin, valMax, 50, 4000);
	// toca a frequencia por 20ms
	tone(buzzer, freq, 20);
	
	delay(10);
}
// miercoles2.ino
// baseado em http://arduino.cc/en/Tutorial/BarGraph

// potenciometro conectado a entrada analogica 0
#define pot A0
// total de leds
#define qtdeLeds 5
// array contendo os pinos para os leds
const int ledPinos[qtdeLeds] = {2, 3, 4, 5, 6};

void setup() {
    // inicializa comunicacao serial em 9600 bps
    Serial.begin(9600);

    // percorre o array dos leds
    for(int ledAtual = 0; ledAtual < qtdeLeds; ledAtual++){
        // define como saida digital
        pinMode(ledPinos[ledAtual], OUTPUT);
    }
}

void loop() {
    // armazena a leitura do potenciometro
    int valorPot = analogRead(pot);

    Serial.println(valorPot);

    // mapeia o valor do potenciometro na quantidade de leds
    int nivelPot = map(valorPot, 0, 1023, 0, qtdeLeds);

    // percorre o array dos leds
    for(int ledAtual = 0; ledAtual < qtdeLeds; ledAtual++){       
        // se o valor mapeado for maior que a posicao atual
        if(nivelPot > ledAtual){
            // acende o led
            digitalWrite(ledPinos[ledAtual], HIGH);
        }else{
            // apaga o led
            digitalWrite(ledPinos[ledAtual], LOW);
        }

    }
}
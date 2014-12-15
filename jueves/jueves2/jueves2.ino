// jueves2.ino

// define os pinos onde cada cor estara conectada
#define R 9
#define G 11
#define B 10

// define o array do LED RGB
const int LED_RGB[3] = {R, G, B};

void setup() {

    // define os pinos como saida e pisca cada cor na sequencia: R -> G -> B
    for(int cor = 0; cor < 3; cor++){
        pinMode(LED_RGB[cor], OUTPUT);
        
        digitalWrite(LED_RGB[cor], HIGH);
        delay(200);
        digitalWrite(LED_RGB[cor], LOW);
        delay(200);
    }
}

void loop() {
    // define o tempo para pausa
    int espera = 5;

    // percorre o array na sequencia: R -> G -> B
    for(int cor = 0; cor < 3; cor++){
     
        // altera o brilho na ordem: 0 -> 255
        for(int brilho = 0; brilho < 255; brilho++){
            analogWrite(LED_RGB[cor], brilho);
            delay(espera);
        }
        // altera o brilho na ordem: 0 <- 255
        for(int brilho = 255; brilho >= 0; brilho--){ // 255 -> 0
            analogWrite(LED_RGB[cor], brilho);
            delay(espera);
        }        
    }

    // altera o brilho de todos os leds na ordem: 0 -> 255
    for(int brilho = 0; brilho < 255; brilho++){
        analogWrite(LED_RGB[0], brilho); // R
        analogWrite(LED_RGB[1], brilho); // G
        analogWrite(LED_RGB[2], brilho); // B
        delay(espera);
    }

    // altera o brilho de todos os leds na ordem: 0 <- 255
    for(int brilho = 255; brilho >= 0; brilho--){
        analogWrite(LED_RGB[0], brilho); // R
        analogWrite(LED_RGB[1], brilho); // G
        analogWrite(LED_RGB[2], brilho); // B
        delay(espera);
    }
}
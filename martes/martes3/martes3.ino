// martes3.ino

// define os pinos para os perifericos
#define led 13
#define botao 12

// declara uma variavel (global) para armazenar a contagem
// inicia com valor igual a 0
int contador = 0;

/* funcao de configuracao */
void setup() {
    // configura a comunicacao serial para 9600 bps
    Serial.begin(9600);

    // define as I/O
    pinMode(led, OUTPUT);
    pinMode(botao, INPUT_PULLUP);
}

/* funcao loop */
void loop() {
    // verifica se o botao foi pressionado: !(nivel baixo) -> true
    if(!digitalRead(botao)){
        // incrementa o contador
        contador++;

        // exibe o valor do contador
        Serial.print("Contador: ");
        Serial.println(contador);

        // altera o estado do led
        digitalWrite(led, !digitalRead(led));
        
        /* debouncing */
        delay(5); // aguarda 5ms
        while(!digitalRead(botao)); // fica em laco ate o botao ser solto (voltar ao nivel alto)
        delay(5); // aguarda 5ms
    }
}
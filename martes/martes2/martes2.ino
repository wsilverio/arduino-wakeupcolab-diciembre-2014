// martes2.ino

// botao conectado ao pino 12
#define botao 12

/* funcao de configuracao */
void setup() {
    // configura a comunicacao serial para 9600 bps
    Serial.begin(9600);
    // botao configurado como entrada pull-up
    pinMode(botao, INPUT_PULLUP);
}

/* funcao loop */
void loop() {
    // declara uma variavel (local) para armazenar o estado do botao
    boolean estado;
    // atribui o estado do botao a variavel
    estado = digitalRead(botao);

    // verifica se o botao esta pressionado
    if(estado == LOW){
        // se o botao estiver pressionado
        // escreve a frase na via comunicacao serial
        Serial.print("botao pressionado");
    }    
}
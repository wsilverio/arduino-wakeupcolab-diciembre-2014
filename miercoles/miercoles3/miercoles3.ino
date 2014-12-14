// miercoles3.ino

// led conectado ao pino 13
#define led 13
// TIL78 conetado a entrada analog. 0
#define sensorInfra A0
// variaveis de controle
int valMin = 1023, valMax = 0;

void setup() {
    // inicializa a comunicacao serial
    Serial.begin(9600);
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
        int leitura = analogRead(sensorInfra);
        // armazena o maior valor lido
        if(leitura > valMax){
            valMax = leitura;
            Serial.println(valMax);
        }
    }

    // apaga o led e aguarda 1s
    digitalWrite(led, LOW);
    delay(1000);
    // indica uma nova medicao
    digitalWrite(led, HIGH);

    // armazena o tempo desde o ultimo reset
    tempo = millis();

    // calibracao durante 5s
    while((millis() - tempo) < 5000){
        // armazena o valor do sensor
        int leitura = analogRead(sensorInfra);
        // armazena o menor valor lido
        if(leitura < valMin){
            valMin = leitura;
            Serial.println(valMin);
        }
    }

    // apaga o led
    digitalWrite(led, LOW);
    // imprime os extremos
    Serial.print("min: ");
    Serial.print(valMin);
    Serial.print(", max: ");
    Serial.println(valMax);

    delay(1000);
    
}

void loop() {
    // Serial.println(analogRead(sensorInfra));

    // se a leitura atual for menor que o valor minimo somado a 30% da diferenca entre o maximo e o minimo
    if(analogRead(sensorInfra) < (valMin + (valMax - valMin) * 0.30)){
        // acende o led
        digitalWrite(led, HIGH);
    }else{
        // senao, apaga o led
        digitalWrite(led, LOW);
    }
}
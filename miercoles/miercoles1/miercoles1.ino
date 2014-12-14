// miercoles1.ino
#define led 13
#define sensorInfra 12

void setup() {
    pinMode(led, OUTPUT);
    pinMode(sensorInfra, INPUT);
    // pinMode(sensorInfra, INPUT_PULLUP);
}

void loop() {
    // se o fototransistor estiver em modo de corte (feixe interrompido)
    if(digitalRead(sensorInfra)){
        digitalWrite(led, HIGH);
    }else{ // se o fototransistor estiver em modo de saturacao (feixe ativo)
        digitalWrite(led, LOW);
    }
}
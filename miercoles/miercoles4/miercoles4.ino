// miercoles4.ino

// led conectado ao pino 13
#define led 13

// entradas analogicas
#define pot A4
#define mic A5

void setup(){
    pinMode(led, OUTPUT);
}

void loop(){
    if(analogRead(mic) > analogRead(pot)){
        digitalWrite(led, HIGH);
    }else{
        digitalWrite(led, LOW);
    }
}
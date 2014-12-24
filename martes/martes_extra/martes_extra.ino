// martes_extra.ino

#define led1 2
#define led2 3
#define led3 4
#define led4 5

#define tempo 300

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
}

void loop() {
    digitalWrite(led1, HIGH);
    delay(tempo);
    digitalWrite(led1, LOW);
    delay(tempo);

    digitalWrite(led2, HIGH);
    delay(tempo);
    digitalWrite(led2, LOW);
    delay(tempo);

    digitalWrite(led3, HIGH);
    delay(tempo);
    digitalWrite(led3, LOW);
    delay(tempo);

    digitalWrite(led4, HIGH);
    delay(tempo);
    digitalWrite(led4, LOW);
    delay(tempo);
}


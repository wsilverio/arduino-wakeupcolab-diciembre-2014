// fb_counter.ino

// importa a biblioteca do LCD
#include <LiquidCrystal.h>

// rele shield conectado ao pino 13
#define rele 13

// pinos do LCD
#define RS 12
#define EN 11
#define D4 5
#define D5 4
#define D6 3
#define D7 2
// cria o objeto lcd
LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);
// variavel para guardar a quantidade de likes

int valor_antes = 0;

void setup() {
    // inicializa comunicação serial
    Serial.begin(9600);
    // lcd 16 col, 2  lin
    lcd.begin(16, 2);
    // led como saida
    pinMode(rele, OUTPUT);
}

void loop() {
    // verifica se o buffer esta carregado
    if(Serial.available() > 0){

        // reserva a memória para uma string
        String numero = "";

        // escreve os valores recebidos
        while(Serial.available() > 0){
            // adiciona o valor recebido a string
            numero += (char) Serial.read();
        }

        // converte a string para inteiro
        int val = numero.toInt();

        // limpa o display
        lcd.clear();
        // coluna 0, linha 1
        lcd.setCursor(0, 1);
        // escreva a frase no display
        lcd.print("Likes: ");
        // escreve o valor no lcd
        lcd.print(val);

        // se o numero de likes aumento: pisca o led
        if(val > valor_antes){
            valor_antes = val;

            digitalWrite(rele, HIGH);
            delay(2000);
            digitalWrite(rele, LOW);
        }
    }
}
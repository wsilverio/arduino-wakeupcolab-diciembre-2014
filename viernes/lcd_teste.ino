// importa a biblioteca do LCD
#include <LiquidCrystal.h>

// pinos do LCD
#define RS 12
#define EN 11
#define D4 5
#define D5 4
#define D6 3
#define D7 2
// cria o objeto lcd
LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

void setup() {

    // lcd 16 col, 2  lin
    lcd.begin(16, 2);

    lcd.clear();

    // coluna 0, linha 1
    lcd.setCursor(0, 1);

    // escreve o valor no lcd
    lcd.print("Ola, mundo");

}

void loop() {


}
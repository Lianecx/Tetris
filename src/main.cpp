#include "Blocks.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

//CONSTRUCTORS
Adafruit_SSD1306 oled(128, 32, &Wire, 4);
Blocks blocks(oled);

//VARIABLES
const int BUTTON_PIN = 2;

void setup() {
    randomSeed(digitalRead(A0));
    Serial.begin(9600);
    oled.begin();
    oled.clearDisplay();

    pinMode(BUTTON_PIN, INPUT_PULLUP);

    oled.setTextSize(2);
    oled.setFont();
    oled.setTextColor(WHITE);
    oled.setCursor(25, 10);
    oled.println("Tetris");
    oled.display();
    delay(3000);
    oled.clearDisplay();
    oled.setTextSize(1);
    oled.setCursor(0, 10);
    oled.println("by Benjamin, David   and Emilian");
    oled.display();
    delay(3000);
    oled.clearDisplay();
    oled.display();
    oled.setCursor(20, 0);
    oled.println("Press button to");
    oled.setCursor(45, 25);
    oled.println("<START>");
    oled.display();

    awaitButton(BUTTON_PIN);

    oled.clearDisplay();
    for(int i=0; i<oled.height()/2; i+=2) {
        oled.drawRect(i, i, oled.width()-2*i, oled.height()-2*i, 1);
        oled.display();
        delay(200);
    }
    delay(500);
    oled.clearDisplay();
    oled.display();
}

void awaitButton(int pin) {
    if(digitalRead(pin) == 1) awaitButton(pin);
}

int speed = 50;
void loop() {
    blocks.drawHookL(4, 4);
    blocks.drawSnakeL(oled.width()-10, oled.height()-10);
    oled.display();
}
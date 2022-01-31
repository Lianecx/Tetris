#include "Blocks.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Blocks::Blocks(Adafruit_SSD1306 oled) {
    this->oled = oled;
}

//Spawn moving blocks
void Blocks::spawnSnakeR(int speed) {
    int randY = random(0, this->oled.height());
    for(int i=0; i<this->oled.width(); i+=4) {
        this->oled.clearDisplay();
        delay(1);
        drawSnakeR(i, randY);
        delay(speed);
    }
}
void Blocks::spawnSnakeL(int speed) {
    int randY = random(0, this->oled.height());
    for(int i=0; i<this->oled.width(); i+=4) {
        this->oled.clearDisplay();
        delay(1);
        drawSnakeL(i, randY);
        delay(speed);
    }
}
void Blocks::spawnCube(int speed) {
    int randY = random(0, this->oled.height());
    for(int i=0; i<this->oled.width(); i+=4) {
        this->oled.clearDisplay();
        delay(1);
        drawCube(i, randY);
        delay(speed);
    }
}
void Blocks::spawnStick(int speed) {
    int randY = random(0, this->oled.height());
    for(int i=0; i<this->oled.width(); i+=4) {
        this->oled.clearDisplay();
        delay(1);
        drawStick(i, randY);
        delay(speed);
    }
}
void Blocks::spawnHookL(int speed) {
    int randY = random(0, this->oled.height());
    for(int i=0; i<this->oled.width(); i+=4) {
        this->oled.clearDisplay();
        delay(1);
        drawHookL(i, randY);
        delay(speed);
    }
}
void Blocks::spawnHookR(int speed) {
    int randY = random(0, this->oled.height());
    for(int i=0; i<this->oled.width(); i+=4) {
        this->oled.clearDisplay();
        delay(1);
        drawHookR(i, randY);
        delay(speed);
    }
}
void Blocks::spawnArrow(int speed) {
    int randY = random(0, this->oled.height());
    for(int i=0; i<this->oled.width(); i+=4) {
        this->oled.clearDisplay();
        delay(1);
        drawArrow(i, randY);
        delay(speed);
    }
}


//Draw stationary blocks
void Blocks::drawSnakeR(int y, int x) {
    this->oled.fillRect(y, x+4, 4, 4, 1);
    this->oled.fillRect(y+4, x+4, 4, 4, 1);
    this->oled.fillRect(y+4, x+8, 4, 4, 1);
    this->oled.fillRect(y+8, x+8, 4, 4, 1);
    this->oled.display();
}
void Blocks::drawSnakeL(int y, int x) {
    this->oled.fillRect(y, x+8, 4, 4, 1);
    this->oled.fillRect(y+4, x+8, 4, 4, 1);
    this->oled.fillRect(y+4, x+4, 4, 4, 1);
    this->oled.fillRect(y+8, x+4, 4, 4, 1);
    this->oled.display();
}
void Blocks::drawCube(int y, int x) {
    this->oled.fillRect(y, x+4, 4, 4, 1);
    this->oled.fillRect(y, x+8, 4, 4, 1);
    this->oled.fillRect(y+4, x+4, 4, 4, 1);
    this->oled.fillRect(y+4, x+8, 4, 4, 1);
    this->oled.display();
}
void Blocks::drawStick(int y, int x) {
    this->oled.fillRect(y, x+4, 4, 4, 1);
    this->oled.fillRect(y+4, x+4, 4, 4, 1);
    this->oled.fillRect(y+8, x+4, 4, 4, 1);
    this->oled.fillRect(y+12, x+4, 4, 4, 1);
    this->oled.display();
}
void Blocks::drawHookL(int y, int x) {
    this->oled.fillRect(y, x+4, 4, 4, 1);
    this->oled.fillRect(y, x+8, 4, 4, 1);
    this->oled.fillRect(y+4, x+8, 4, 4, 1);
    this->oled.fillRect(y+8, x+8, 4, 4, 1);
    this->oled.display();
}
void Blocks::drawHookR(int y, int x) {
    this->oled.fillRect(y, x+8, 4, 4, 1);
    this->oled.fillRect(y+4, x+8, 4, 4, 1);
    this->oled.fillRect(y+8, x+8, 4, 4, 1);
    this->oled.fillRect(y+8, x+4, 4, 4, 1);
    this->oled.display();
}
void Blocks::drawArrow(int y, int x) {
    this->oled.fillRect(y, x+8, 4, 4, 1);
    this->oled.fillRect(y+4, x+8, 4, 4, 1);
    this->oled.fillRect(y+4, x+4, 4, 4, 1);
    this->oled.fillRect(y+8, x+8, 4, 4, 1);
    this->oled.display();
}

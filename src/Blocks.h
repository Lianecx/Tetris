#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

class Blocks {
private:
    Adafruit_SSD1306 oled;
public:
    Blocks(Adafruit_SSD1306 oled);
    Blocks();

    void spawnSnakeR(int speed);
    void spawnSnakeL(int speed);
    void spawnCube(int speed);
    void spawnStick(int speed);
    void spawnHookL(int speed);
    void spawnHookR(int speed);
    void spawnArrow(int speed);

    void drawSnakeR(int y, int x);
    void drawSnakeL(int y, int x);
    void drawCube(int y, int x);
    void drawStick(int y, int x);
    void drawHookL(int y, int x);
    void drawHookR(int y, int x);
    void drawArrow(int y, int x);
};

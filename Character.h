#ifndef CHARACTER_H
#define CHARACTER_H

#include "raylib.h"

class Character
{
public:
    Character(const char* spritePath, int screenWidth, int screenHeight);
    ~Character();

    void Update();
    void Draw();

private:
    Texture2D sprite;
    Vector2 position;
    int speed;
    float scale;
};

#endif

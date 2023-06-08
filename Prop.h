#ifndef PROP_H
#define PROP_H

#include "raylib.h"

class Prop
{
public:
    Prop(const char* spritePath, float x, float y);
    ~Prop();

    void Update();
    void Draw();
    bool CheckCollision(const Rectangle& other) const;

private:
    Texture2D sprite;
    Rectangle bounds;
};

#endif

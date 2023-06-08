#include "Character.h"

Character::Character(const char* spritePath, int screenWidth, int screenHeight)
{
    sprite = LoadTexture(spritePath);
    position = { static_cast<float>(screenWidth) / 2, static_cast<float>(screenHeight) / 2 };
    speed = 5;
    scale = 2.0f; // Initial scale factor
}

Character::~Character()
{
    UnloadTexture(sprite);
}

void Character::Update()
{
    if (IsKeyDown(KEY_W))
        position.y -= speed;
    if (IsKeyDown(KEY_S))
        position.y += speed;
    if (IsKeyDown(KEY_A))
        position.x -= speed;
    if (IsKeyDown(KEY_D))
        position.x += speed;
    
}

void Character::Draw()
{
    DrawTextureEx(sprite, position, 0.0f, scale, WHITE);
}

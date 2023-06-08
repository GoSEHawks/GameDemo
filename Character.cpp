#include "Character.h"

Character::Character(const char* spritePath, int screenWidth, int screenHeight)
{
    sprite = LoadTexture(spritePath);
    position = { static_cast<float>(screenWidth) / 4, static_cast<float>(screenHeight) / 4};
    speed = 5;
    scale = 1.0f;
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
    DrawTexture(sprite, static_cast<int>(position.x), static_cast<int>(position.y), WHITE);
}

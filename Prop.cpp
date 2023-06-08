#include "Prop.h"

Prop::Prop(const char* spritePath, float x, float y)
{
    sprite = LoadTexture(spritePath);
    bounds = { x, y, static_cast<float>(sprite.width), static_cast<float>(sprite.height) };
}

Prop::~Prop()
{
    UnloadTexture(sprite);
}

void Prop::Update()
{
    // Update any prop-specific logic here
}

void Prop::Draw()
{
    DrawTexture(sprite, static_cast<int>(bounds.x), static_cast<int>(bounds.y), WHITE);
}

bool Prop::CheckCollision(const Rectangle& other) const
{
    return CheckCollisionRecs(bounds, other);
}

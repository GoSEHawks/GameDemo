#include <raylib.h>
#include "Character.h"

int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Game");

    Texture2D mapTexture = LoadTexture("assets/map1.png");

    Character character("assets/adventurer-Sheet1.png", screenWidth, screenHeight);

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        character.Update();

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawTexture(mapTexture, 0, 0, WHITE);
        character.Draw();

        EndDrawing();
    }
    UnloadTexture(mapTexture);
    CloseWindow();

}

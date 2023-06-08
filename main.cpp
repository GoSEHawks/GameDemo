#include <raylib.h>

int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Game");

    Texture2D mapTexture = LoadTexture("assets/map1.png");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();


        ClearBackground(RAYWHITE);
        

        EndDrawing();
    }

    CloseWindow();

}

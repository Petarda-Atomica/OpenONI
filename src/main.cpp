#include <stdio.h>
#include "raylib.h"

int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "OpenONI");

    SetTargetFPS(60);
    SetExitKey(NULL);

    while (!WindowShouldClose())
    {
        BeginDrawing();

            ClearBackground(RAYWHITE);
    
        EndDrawing();
    }

    CloseWindow();
    


    return 0;
}
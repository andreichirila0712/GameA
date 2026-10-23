#include "raylib.h"
#include <iostream>

int main() {
    const int windowWidth = 800;
    const int windowHeight = 640;
    InitWindow(windowWidth, windowHeight, "Game A");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        ClearBackground(WHITE);
        std::string text = "The current FPS is ";

        text.append(std::to_string(GetFPS()));

        BeginDrawing();
            DrawText(text.c_str(), windowWidth / 2, windowHeight / 2, 20, MAROON);
        EndDrawing();
    }

    return 0;
}
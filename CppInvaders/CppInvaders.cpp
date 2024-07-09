#include <raylib.h>
#include "spaceship.h"

int main()
{
    Color grey = {29, 29, 27, 255};

    const int screenWidth = 750;
    const int screenHeight = 700;

    InitWindow(screenWidth, screenHeight, "CppInvaders");
    SetTargetFPS(60);

    Spaceship spaceship;

    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(grey);
        spaceship.Draw();
 

        EndDrawing();
    }

    CloseWindow();
}

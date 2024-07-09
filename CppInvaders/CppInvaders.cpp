#include <raylib.h>
#include "game.h"

int main()
{
    Color grey = {29, 29, 27, 255};

    const int screenWidth = 750;
    const int screenHeight = 700;

    InitWindow(screenWidth, screenHeight, "CppInvaders");
    SetTargetFPS(60);

    Game game;

    while (WindowShouldClose() == false) {
        game.HandleInput();
        game.Update();

        BeginDrawing();
        ClearBackground(grey);
        game.Draw();
        EndDrawing();
    }

    CloseWindow();
}

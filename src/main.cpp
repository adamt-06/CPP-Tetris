#include <raylib.h>
#include "game.h"

int main()
{
    Color darkBlue = {44, 44, 127, 255};

    InitWindow(300, 600, "C++ Tetris");
    SetTargetFPS(60);

    Game game = Game();

    while(WindowShouldClose() == false)
    {
        game.HandleInput();
        BeginDrawing();
        ClearBackground(darkBlue);

        game.Draw();

        EndDrawing();
    }

    CloseWindow();
}
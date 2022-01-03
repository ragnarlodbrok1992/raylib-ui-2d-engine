#include "include/raylib.h"


int main(int charc, char** argv) {

  const int screenWidth = 1024;
  const int screenHeight = 768;

  InitWindow(screenWidth, screenHeight, "RayLib UI 2d Engine.");

  SetTargetFPS(60);

  while (!WindowShouldClose()) {


    BeginDrawing();

    ClearBackground(RAYWHITE);

    DrawText("This is RayLib UI 2d Engine made by Ragnar", 190, 200, 20, LIGHTGRAY);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}

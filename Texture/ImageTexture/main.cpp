#include <iostream>
#include "raylib.h"

int main()
{
    const int ecranLargeur = 800;
    const int ecranLongueur = 450;

    InitWindow(ecranLargeur, ecranLongueur, "Sphere de gloire");

    Image image = LoadImage("wabbit_alpha.png");
    Texture2D texture = LoadTextureFromImage(image);
    UnloadImage(image);

    std::cout << "largeur: " << texture.width << std::endl;

    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(LIGHTGRAY);

        DrawTexture(texture, ecranLargeur/2 - texture.width/2, ecranLongueur/2 - texture.height/2, WHITE);
        DrawText("this IS a texture loaded from an image!", 300, 370, 10, GRAY);

        EndDrawing();
    }

    UnloadTexture(texture);

    CloseWindow();

    return 0;
}

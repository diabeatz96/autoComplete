#include <iostream>
#include <raylib.h>
#include <Bag.h>


const int MAXARRAYSIZE = 20;
const int MAXNAMESIZE = 30;

int main() {


    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Array Movie Box");

    Bag newBag;

    newBag.loadFile();



    while(!WindowShouldClose()) {

        int key = GetCharPressed();

        while (key > 0) {
            if(key) {
                newBag.input[newBag.letterCount] = static_cast<char>(key);
                newBag.input[newBag.letterCount + 1] = '\0';
                newBag.letterCount++;
             }
            key = GetCharPressed();
        }
            if(IsKeyPressed(KEY_BACKSPACE)) {
                newBag.letterCount--;
                if(newBag.letterCount< 0) {
                    newBag.letterCount = 0;
                }
                newBag.input[newBag.letterCount] = '\0';
            }



        BeginDrawing();



        DrawText("TEXT SEARCH", GetScreenWidth()/2 - 170, 40, 45, BLACK);
        DrawText(newBag.input, 240, 140, 20, BLACK);


        if (newBag.getLetterCount() > 2) {
            newBag.searchAutoComplete();
        } else {
            newBag.displayAll();
        }
        ClearBackground(RAYWHITE);

        EndDrawing();
    }

    CloseWindow();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}


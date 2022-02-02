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
                name[letterCount] = static_cast<char>(key);
                name[letterCount + 1] = '\0';
                letterCount++;
             }
            key = GetCharPressed();
        }
            if(IsKeyPressed(KEY_BACKSPACE)) {
                letterCount--;
                if(letterCount < 0) {
                    letterCount = 0;
                }
                name[letterCount] = '\0';
            }




        BeginDrawing();

        ClearBackground(BLUE);

        EndDrawing();
    }

    CloseWindow();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}


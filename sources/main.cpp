#include <iostream>
#include <raylib.h>



const int MAXARRAYSIZE = 20;

int main() {

    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Array Movie Box");



    while(!WindowShouldClose()) {



        BeginDrawing();

        ClearBackground(BLUE);

        EndDrawing();
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}


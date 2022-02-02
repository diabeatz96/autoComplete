#include <iostream>
#include <raylib.h>
#include <Bag.h>


const int MAXARRAYSIZE = 20;

int main() {



    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Array Movie Box");

    Bag newBag;

    newBag.loadFile();

    /*for(int i = 0; i < newBag.animeList.size() - 1; i++) {
        std::cout << newBag.animeList[i];
    }*/



    while(!WindowShouldClose()) {


        BeginDrawing();

        ClearBackground(BLUE);

        EndDrawing();
    }



    std::cout << "Hello, World!" << std::endl;
    return 0;
}


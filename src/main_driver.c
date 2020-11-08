// Main Driver Willy Wangky's World //

#include <stdio.h>
#include "boolean.h"
// #include "matriks.h"
#include "game.h"
#include "main_menu.h"

/*
COMPILE COMMAND (ganti dir ke src):
    gcc -o test  main_driver.c point.c map.c main_menu.c jam.c game.c

RUN COMMANd:
    ./test.exe

MAKEFILE COMING SOON
*/

void init_game()
{

}

void run_test()
{
    boolean end_game = false;
    char input;

    while (!end_game)
    {
        // printf("Name: %s\n", PName(gameInstance));
        DrawMap(_map);

        scanf("%c", &input);
        Move(&_map, input);

        
    }
    /*
    Name: wangkie kumalasari
    Money: 1000
    Current Time: 21.00
    Opening Time: 09.00
    Time Remaining: 12 hour(s)
    Total aksi yang akan dilakukan: 0
    Total waktu yang dibutuhkan: 0
    Total uang yang dibutuhkan: 0
    */
};

int main()
{
    int cont;

    main_menu();
    run_test();

    return 0;
}


#include "../map.h"
#include "../point.h"
#include "../boolean.h"
#include "../mesinkata.h"
#include <stdio.h>

int main()
{
    MAP TEST;
    LoadMap(&TEST, "../map.txt");
    int cont = 0;
    char* messageBuffer;
    Kata command;
    DrawMap(TEST, "Hi, this is a test\n");
    while (cont == 0)
    {
        printf("Perintah : ");
        ReadInput(&command);
        switch(command.TabKata[0])
        {
            case 'w':
            case 'W':
                Move(&TEST, 'W', &messageBuffer);
                DrawMap(TEST, messageBuffer);
                break;
            case 'a':
            case 'A':
                Move(&TEST, 'A', &messageBuffer);
                DrawMap(TEST, messageBuffer);
                break;
            case 's':
            case 'S':
                Move(&TEST, 'S', &messageBuffer);
                DrawMap(TEST, messageBuffer);
                break;
            case 'd':
            case 'D':
                Move(&TEST, 'D', &messageBuffer);
                DrawMap(TEST, messageBuffer);
                break;
            case 'x':
                cont = -1;
                break;
        }
    }
    
    // cara compile
    // gcc -o drivermap drivermap.c ../map.c ../point.c ../mesinkar.c ../mesinkata.c
    // drivermap.exe

    return 0;
}
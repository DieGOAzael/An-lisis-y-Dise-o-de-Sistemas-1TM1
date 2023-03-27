#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void posicion (int a, int b){

COORD coord;
coord.X=a;
coord.Y=b;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main (){

    int m, n, car;

    time(NULL);
    system("Color 02");



    for (int k = 0; k <= 70000; k++){

    m =  1+rand()%80;
    n = 1+rand()%24;
    car = 1+rand()%255;

    posicion (m,n); printf("%c", car);
    }
system("pause>null");
}

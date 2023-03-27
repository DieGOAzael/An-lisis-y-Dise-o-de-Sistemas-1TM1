#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>


void posicion (int i, int j){

COORD coord;
coord.X=i;
coord.Y=j;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


int main(){

for (int x=20; x<=60; x++){

    posicion(x, 12);printf("%c", 178);
    Sleep(80);
    posicion(61,12);
    printf("100 %c");

}


}

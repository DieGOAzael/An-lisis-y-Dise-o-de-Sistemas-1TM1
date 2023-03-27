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

int dado1, dado2, sum, a;



    do{
        system("cls");
        printf("¿Que canción de motomami eres? ");
        printf("Presione una tecla para tirar los dados: ");
        system("pause > null");
        srand (time (NULL));
        /*
        dado1= 1+rand()%6;
        dado2= 1+rand()%6;
        printf("\nDado1 = %i\nDado2= %i", dado1, dado2);
        */
    posicion(40,12);printf("Dado 1: ");posicion(60,12);printf("Dado 2: ");
    for (a=0; a<=10; a++){

        dado1= 1 + rand()%6; dado2 = 1 + rand()%6;
        posicion(50,12); printf("%i", dado1);posicion(70,12);printf("%i", dado2);
        Sleep(80);

    }

        sum = dado1+ dado2;
        printf("\nLa suma de los dados es: %i", sum);
        printf("\nEres: ");

        switch(sum){

    case 2:
        printf("Motomami");
        break;
    case 3:
        printf("Cuuuuute");
        break;
    case 4:
        printf("Saoko");
        break;
    case 5:
        printf("Bizcochito");
        break;
    case 6:
        printf("La Combi Versache");
        break;
    case 7:
        printf("Candy");
        break;
    case 8:
        printf("La Fama");
        break;
    case 9:
        printf("Bulerias");
        break;
    case 10:
        printf("Diablo");
        break;
    case 11:
        printf("Hentai");
        break;


    default:
        printf("G3N15");

        }

        printf("\nPresiona r para repetir: ");
        fflush(stdin);
        sum = getche();


    }while (sum == 114);
    system("pause > lol");
}

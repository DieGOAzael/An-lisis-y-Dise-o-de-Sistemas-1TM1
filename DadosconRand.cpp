/*
Realiza un programa que simule el tiro de dos dados. Presione una tecla para tirar los dados
Dado 1:
Dado 2:

Despues de obtener esos valores, el programa te dira un presagio de tu suerte:

La suma es 6

"Reprobaras tu examen de álgebra..."

Presione r para repetir.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(){

int dado1, dado2, sum;


    do{
        system("cls");
        printf("¿Que canción de motomami eres? ");
        printf("Presione una tecla para tirar los dados: ");
        system("pause > null");
        srand (time (NULL));
        dado1= 1+rand()%6;
        dado2= 1+rand()%6;
        printf("\nDado1 = %i\nDado2= %i", dado1, dado2);

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

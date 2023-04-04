//programita de array
/*
Realiza un programa que solicite los renglones y columnas para generar
una matriz de ese orden

Una vez dimensionada la matriz, se "Auto llenará" de forma automagica
con valores entre 1 y 150 y y sea mostrada

Ej
    Cuantos reglones: 2
    Cuantos columnas: 3
    La matriz es

        17 145
        180 87
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int x,r,c,i,j;

    printf("Ingresa el numero de renglones y de columnas: ");
    scanf("%i%i",&r,&c);
    int matriz[r][c];
    srand(time(NULL));//lo que hace que de verdad haya aleatoridad

    for ( i=0; i<r; i++){

        for ( j=0; j<c; j++){

            matriz[i][j]= 1+rand()%151;


        }

    }
    system ("cls");
    printf("La matriz es: \n");


    for ( i=0; i<r; i++){

        for ( j=0; j<c; j++){

            printf("%i\t", matriz[i][j]);


        }
        printf("\n");

    }


}

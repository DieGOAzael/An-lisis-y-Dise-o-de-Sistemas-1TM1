#include <stdio.h>
#include <stdlib.h>

int main(){

int valor, op;
char resp;

do{
    system ("cls");


    do{

    printf("\nIngresa un valor entre 1 y 50: ");
    scanf("%i", &valor);

    }while (valor < 1 || valor > 50);
    op = (valor >= 1) + (valor >= 11) + (valor >= 21) + (valor >= 31) + (valor >= 41);
    switch (op){

    case 1: printf("\nRango 1-10 "); break;
    case 2: printf("\nRango 11-20 "); break;
    case 3: printf("\nRango 21-30 "); break;
    case 4: printf("\nRango 31-40 "); break;
    default: printf("\nRango 41-50 ");
    }

    printf("Si deseas repetir presiona s: ");
    fflush(stdin);
    scanf("%c", &resp);


}while (resp == 's');

    system ("pause > XD");



}

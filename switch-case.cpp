#include <stdio.h>
#include <stdlib.h>

int main(){

int op;
float cent, faren, grados;

printf ("Selecciona una opcion: \n");
printf ("1.- Centigrados a Farenheit \n");
printf ("2.- Farenheit a Centigrados \n");
printf ("3.- Salir \n Tu opcion: \n");
scanf ("%i", &op);


switch (op){

case 1:
    printf ("Ingresa los grados Centigrados: ");
    scanf ("%f", &cent);
    faren = (cent*(9/5))+32;
    printf ("%f centigrados = %f farenheit", cent, faren);
    break;

case 2:
    printf ("Ingresa los datos Farenheit: ");
    scanf ("%f", &faren);
    cent = ((faren - 32)*(5)/9);
    printf ("%f farenheit = %f centigrados ", faren, cent);
    break;

default:
    printf ("No hubo nada que calcular");

}
system ("pause > null");

}

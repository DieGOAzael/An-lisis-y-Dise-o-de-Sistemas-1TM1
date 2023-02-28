#include <stdio.h>
#include <stdlib.h>
int main(){

     int num1,num2;


     printf ("Ingrese dos numeros:\n");
     scanf ("%i", &num1);
     scanf ("%i", &num2);

     if (num1>num2){

     printf("El primer numero %i", num1);
    printf(" es MAYOR que el segundo %i", num2);

     } else if (num1 < num2){

    printf("El primer numero %i", num1);
    printf(" es MENOR que el segundo %i", num2);
     } else if (num1 == num2){

     printf("Los numeros son iguales");
     }


}

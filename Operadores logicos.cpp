#include <stdio.h>
#include <stdlib.h>


//OPERADORES LOGICOS


/*
Verdadero tiene el valor de 1
Falso tiene el valor de 0

&& AND: AMBOS DEBEN SER VERDADEROS
|| OR: UNO U OTRO DEBE SER VERDADERO
! NOT NIEGA ALGO

IF-ELSE
Sí-De lo contrario
*/
 int main(){

     int op;

     printf ("Selecciona \n1.-Para Decimal-Binario\n2.-Para Binario-Decimal\n");
     scanf ("%i", &op);

    if (op == 1){

    printf("\nConversion a Binario \n");


    int var1,var2,var3,var4,var5,var6,var7,var8, bin, num1;

    printf("Ingrese un numero entero del (1-255): \n");
    scanf ("%i", &num1);

    //system ("cls");

    var1 = num1 % 2;
    num1 = num1/2;

    var2 = num1 % 2;
    num1 = num1 / 2;

    var3 = num1 % 2;
    num1 = num1/2;

    var4 = num1 % 2;
    num1 = num1 / 2;

    var5 = num1 % 2;
    num1 = num1/2;

    var6 = num1 % 2;
    num1 = num1 / 2;

    var7 = num1 % 2;
    num1 = num1/2;

    var8 = num1 % 2;

    printf ("El numero binario es: %i%i%i%i%i%i%i%i" ,var8,var7,var6,var5,var4,var3,var2,var1);

    system ("pause > null");


     }else if(op == 2){


    printf("\nConversion de binario a entero \n");

    int var1,var2,var3,var4,var5,var6,var7,var8, bin, num1;

    printf ("Ingresa un binario (8 bits) y obten su entero: ");
    scanf ("%i%i%i%i%i%i%i%i", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8);

    var1 = var1 * 128;
    var2 = var2 * 64;
    var3 = var3 * 32;
    var4 = var4 * 16;
    var5 = var5 * 8;
    var6 = var6 * 4;
    var7 = var7 * 2;
    var8 = var8 * 1;

    num1 = var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8;

    printf ("El entero es: %i", num1);

    system ("pause > null"); //anula el mensaje de presionar una tecla para continuar


     } else{

     printf ("Eliga una opcion existente.");
    system ("pause > null");

     }
 }



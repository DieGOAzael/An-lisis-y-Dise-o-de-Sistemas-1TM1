#include <stdio.h>
#include <stdlib.h>


//programa que tranforma un numero entero a binario
 int main(){

    int var1,var2,var3,var4,var5,var6,var7,var8, bin, num1;

    printf("Ingrese un numero entero del (1-255): \n");
    scanf ("%i", &num1);

    system ("cls");

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

 }

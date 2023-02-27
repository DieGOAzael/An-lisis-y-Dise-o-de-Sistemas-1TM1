#include <stdio.h>
#include <stdlib.h>

//realiza un programa que solicite un binario (8 bits) y nos diga su valor entero

int main(){

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


}

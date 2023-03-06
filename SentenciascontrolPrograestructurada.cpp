#include <stdio.h>
#include <stdlib.h>
int main(){

int op;
float b, h, r, x;


printf ("Menu de opciones\n");
printf ("1.- Area de un circulo\n");
printf ("2.- Volumen de un cilindro\n");
printf ("3.- Perimetro de un rectangulo\n");
printf ("4.- Salir\nElige una opcion: ");
scanf ("%i",&op);

system ("cls");

/*
Li diferencia entre if-else y else asi normal es que en el primero se encuentra la condicion e ignora todo lo denmas
En el else solito tiene que pasar por todos los condicionales y despues ejecutar donde encuentre el condicional
*/
if ( op == 1){


    printf ("Ingresa el radio del circulo: ");
    scanf ("%f", &r);
    x = 3.1416 * (r*r);
    printf ("\nEl Area es: %f", x);

}
else if ( op == 2){
    printf ("Ingresa la altura y el radio del cilindro: ");
    scanf("%f%f", &h, &r);
    x= 3.1416 * (r*r)*h;
    printf ("\nEl volumen es: %f", x);


} else if ( op == 3){

printf ("Ingresa la altura y la base del rectangulo: ");
scanf ("%f%f", &h, &b);
x= h+h+b+b;
printf ("\n El perimetro es: %f", x);

} else {

printf ("\nThank u, next");

}

system ("pause > null");

}

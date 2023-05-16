#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int menu(){

    int op;

printf("\n1.- Conversion de pulgadas a cm\n");
printf("2.- Conversion de Millas a Km\n");
printf("3.- Conversion de Libras a Kg\n");
printf("4.- Salir\n");

scanf("%i", &op);

return op;

}


void InCm(){
float m, n;

printf ("Introduce las pulgadas:\n ");
scanf("%f", &m);
n = m*2.54;
system("cls");
printf ("Conversion realizada, son: %f cm", n);


}

void MillasKm(){
float m, n;

printf ("Introduce las millas:\n ");
scanf("%f", &m);
n = m*1.609;
system("cls");
printf ("Conversion realizada, son: %f km", n);


}

void LibKg(){
float m, n;

printf ("Introduce las libras:\n ");
scanf("%f", &m);
n = m/2.205;
system("cls");
printf ("Conversion realizada, son: %f kg", n);


}
int main(){


    int opmain;

    do{
    opmain= menu();
    switch(opmain){
case 1:
    InCm();
    break;
case 2:
    MillasKm();
    break;
case 3:
    LibKg();
    break;
default:
    printf ("Chao");

    }

    }while (opmain!=4);

}

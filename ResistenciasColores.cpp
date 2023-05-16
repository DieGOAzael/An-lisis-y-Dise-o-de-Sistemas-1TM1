#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float r,B1, B2, B3, B4;
int op;


printf("Ingresa color de banda 1");


printf("\n0 Negro \n1.Cafe \n2.Rojo");
printf("\n3 Naranja \n4.Amarillo \n5.Verde");
printf("\n6 Azul \n7.Violeta \n8.Gris");
printf("\n9.Blanco");
printf("Color: ");
scanf ("%i", &op);

switch (op){

case 0: B1 = 0; break;
case 1: B1 = 10; break;
case 2: B1 = 20; break;
case 3: B1 = 30; break;
case 4: B1 = 40; break;
case 5: B1 = 50; break;
case 6: B1 = 60; break;
case 7: B1 = 70; break;
case 8: B1 = 80; break;

default: B1 = 90; break;

}

//Ahora banda 2



printf("Ingresa color de banda 2");


printf("\n0 Negro \n1.Cafe \n2.Rojo");
printf("\n3 Naranja \n4.Amarillo \n5.Verde");
printf("\n6 Azul \n7.Violeta \n8.Gris");
printf("\n9.Blanco");
printf("Color: ");
scanf ("%i", &op);

switch (op){

case 0: B2 = 0; break;
case 1: B2 = 1; break;
case 2: B2 = 2; break;
case 3: B2 = 3; break;
case 4: B2 = 4; break;
case 5: B2 = 5; break;
case 6: B2 = 6; break;
case 7: B2 = 7; break;
case 8: B2 = 8; break;

default: B1 = 9; break;

}

//Ahora solicitamos banda 3

printf("Ingresa color de banda 3");


printf("\n0 Negro \n1.Cafe \n2.Rojo");
printf("\n3 Naranja \n4.Amarillo \n5.Verde");
printf("\n6 Azul \n7.Violeta \n8.Gris");
printf("\n9.Blanco");
printf("Color: ");
scanf ("%i", &op);
/*
switch (op){
case 0: B3 = 1; break;
case 1: B3 = 10; break;
case 2: B3 = 100; break;
case 3: B3 = 1000; break;
case 4: B3 = 10000; break;
case 5: B3 = 100000; break;
case 6: B3 = 1000000; break;
case 7: B3 = 10000000; break;
case 8: B3 = 100000000; break;

default: B1 = 1000000000; break;
}
*/

//si


B3 = pow(10,op);


r = (B1+B2)*B3;
printf("\nB4: (1.Oro 2.Plata)");
scanf("%i, &op");
printf("\nLa resistencia es %.f", r);
if (op==1){

    printf("+-5%c", 37);



}else{
        printf("+-10%c", 37);

        system ("pause>null");


    }

}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

int x, y, op;

printf("Generador de 10 valores aleatorios: \n");

system ("color e9");
srand(time(NULL));
scanf("%i", op);




    switch(op){

    case 1:

        for (x=1; x<=10; x++){

    y = rand();
    printf("\nAleatorio: %i", y);

    }
        break;
    case 2:

        for (x=1; x<=10; x++){

    y = 1+ rand()%10;
    printf("\nAleatorio: %i", y);

    }
        break;
    case 3:

        for (x=1; x<=10; x++){

    y = 25 + rand()%21;
    printf("\nAleatorio: %i", y);

    }
        break;

    case 4:

        for (x=1; x<=10; x++){

    y = 100+rand()%151;
    printf("\nAleatorio: %i", y);

    }
        break;
    case 5:
        for (x=1; x<=10; x++){

    y = -50 + rand()%101;
    printf("\nAleatorio: %i", y);

    }
        break;
    case 6:

        for (x=1; x<=10; x++){

    y = 512 + rand()%515;
    printf("\nAleatorio: %i", y);

    }
        break;
    case 7:
        for (x=1; x<=10; x++){

    y = 190 + rand()%316;
    printf("\nAleatorio: %i", y);

    }
        break;
    case 8:
        for (x=1; x<=10; x++){

    y = -20 + rand()%26;
    printf("\nAleatorio: %i", y);

    }
        break;


    }


    printf("\nQue observas?");
    system("pause>null");
}

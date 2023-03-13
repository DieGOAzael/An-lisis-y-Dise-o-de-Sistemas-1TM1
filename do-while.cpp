#include <stdio.h>
#include <stdlib.h>

int main (){

char resp;
int op, edad;

    do{

        system ("cls");
        printf ("ingresa tu edad: ");
        scanf ("%i", &edad);
        printf ("\n");

        if (edad < 0 || edad > 100)
        printf ("Posiblemente no existes.");

        else if (edad >= 0 && edad <=4)
        printf ("Eres un tierno, inocente y dulce bebe.");

        else if (edad >= 5 && edad <= 12)
        printf ("Aun te llegan los reyes magos.");

        else if (edad >= 13 && edad <= 15)
        printf ("Eres un pre-adolescente.");

        else if (edad == 16 || edad == 17)
        printf ("Un perfecto adolescente.");

        else if (edad >= 18 && edad <= 29)
        printf ("Ya le entras a los antros y caguamas.");

        else if (edad >= 30 && edad <= 49)
        printf ("Adulto maduro y con responsabilidades.");

        else if (edad >= 50 && edad <= 65)
        printf ("Ya comprendes muchas cosas de la vida.");

        else if (edad >= 66 && edad <= 75)
        printf ("Seguramente ya disfrutas de tus nietos.");

        else
        printf ("Eres un sabio adulto mayor.");

        printf ("\nPara repetir presiona r: ");

        fflush (stdin); //para caracteres o cadenas de caracteres
        //limpia las variables ingresadas en la memoria de corto plazo de la compu
        scanf ("%c", &resp);




    }while (resp == 'r');

    system ("pause > XD");


}

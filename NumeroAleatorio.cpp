#include <iostream>
#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;
int main(){

srand (time (NULL));

    int numAleatorio;

    numAleatorio;
    numAleatorio = rand ()%100;

    cout << "El numero aleatorio es: " << numAleatorio;

    return 0;

}

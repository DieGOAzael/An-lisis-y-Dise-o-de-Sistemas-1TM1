#include <iostream>
using namespace std;
/*el usuario va a introducir una cantidad de segundos, convirtiendolo a minutos
y segundos, ej
146 segundos ==>> 2 minutos, 26 segundos
En caso de mas de 3600 segundos mande un mensaje "No se va a realizar el calculo"*/

int main(){

int segi, minf, segf;


    cout << "Introduzca los segundos a convertir: " << endl;
    cin >> segi;

    if (segi <= 3600){
    cout << "Los segundos introducidos son:  " << segi << endl;
    minf = segi / 60 ;
    segf = segi % 60;
    cout << "Tiempo: " << minf << " minutos, " << segf << " segundos" << endl;

    }else if (segi > 3600) {

    cout << "No se va a realizar la operacion" << endl;

    }

}

#include <iostream>
using namespace std;

int main(){

    char nomb[30];
    float calf1, calf2, calf3, prom;

    cout << "Nombre por apellidos: ";
    gets(nomb);
    cout << "Primera calificacion: ";
    cin >> calf1;
    cout << "Segunda calificacion: ";
    cin >> calf2;
    cout << "Tercera calificacion: ";
    cin >> calf3;

    prom = (calf1 + calf2 + calf3)/3;

    cout << "Estimado : ";
    puts(nomb);
    cout << "Su promedio es de: " << prom << endl;

}

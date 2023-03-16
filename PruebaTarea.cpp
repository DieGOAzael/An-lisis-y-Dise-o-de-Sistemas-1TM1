#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

float calf1, calf2, calf3, calf4, calf5, promedio;


cout << "Ingrese sus 5 calificaciones: " << endl;
cout << "Primera calificacion: " << endl;
cin >> calf1;
cout << "Segunda calificacion: " << endl;
cin >> calf2;
cout << "Tercera calificacion: " << endl;
cin >> calf3;
cout << "Cuarta calificacion: " << endl;
cin >> calf4;
cout << "Quinta calificacion: " << endl;
cin >> calf5;

promedio = (calf1 + calf2 + calf3 +calf4 + calf5) / 5;

cout << "Tu promedio es: " << promedio << endl;
if (promedio < 6)
    cout << "Joven ve pensando en cambiar de carrera o ya dese de baja";
else if (promedio >= 6 && promedio <= 7.9)
    cout << "Debes esforzarte más, just can do it";
else if (promedio >= 8 && promedio <= 10)
    cout << "Esto es lo tuyo sigue esforzandote";
else
    cout << "El promedio no es valido, ingresa tus calificaciones reales";


}

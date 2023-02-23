#include <iostream>
using namespace std;

int main(){

system("color D7");
 char  Nomb[30];
 int Edad;
 float Prom;
 char Sexo;


cout << "//////////////////////////////////////////////////////" << endl;
    cout << "Bienvenido, llene la siguientes ficha: " << endl;
    cout << "Nombre por apellidos: ";
    gets(Nomb);
    cout << "Edad: ";
    cin >> Edad;
    cout << "Promedio: ";
    cin >> Prom;
    cout << "Sexo (H o M): ";
    cin >> Sexo;

    system("cls"); //limpia pantalla
    system("color B4");
    cout << "Creando la ficha..."<< endl;


    cout << "*************************************************" << endl;
    cout << "Su nombre es: ";
    puts(Nomb);
    cout << "Tiene de edad: " << Edad << endl;
    cout << "Con promedio de: " << Prom << endl;
    cout << "Y sexo biologico: " << Sexo<< endl;
    cout << "*************************************************" << endl;


}

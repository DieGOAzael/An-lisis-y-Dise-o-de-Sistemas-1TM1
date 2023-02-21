#include <iostream>
using namespace std;
int main(){

    int edad;
    float temp;
    char sex;
    char Name[25];

    cout << "Bienvenido, ingrese los siguientes datos" << endl;
    cout << "Ingrese su edad:" << endl;
    cin >> edad;
    cout << "Ingrese su temperatura:" << endl;
    cin >> temp;
    cout << "Ingrese su sexo (H o M):" << endl;
    cin >> sex;
    //gets y puts para cadenas de caracteres, o sea chars
    cout << "Ingrese su primer nombre: " << endl;
    gets(Name);

    cout << "\nSus datos son:  \nTiene " << edad << " anios" << endl;
    cout << "Una temperatura de: " << temp << " C" << endl;
    cout << "Y su sexo biologico es: " << sex << endl;
    cout << "Su nombre: " << endl;
    //gets y puts para cadenas de caracteres, o sea chars
    puts(Name);
}

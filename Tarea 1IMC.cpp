#include <iostream>
using namespace std;

int main(){

    char nomb[30];
    int edad;
    float peso;
    float altu, IMC;


    cout << "Indice de Masa Corporal: " << endl;
    cout << "Nombre por apellidos: ";
    gets(nomb);
    cout << "Edad: ";
    cin >> edad;
    cout << "Peso en metros: ";
    cin >> peso;
    cout << "Altura: ";
    cin >> altu;

     system("cls"); //limpia pantalla

      cout << "Calculando..."<< endl;


    cout << "Estimado : ";
    puts(nomb);

    IMC = peso/(altu*altu);

     cout << "Su IMC es : " << IMC << " a sus " << edad << endl;
}

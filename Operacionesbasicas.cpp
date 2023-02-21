#include <iostream>

using namespace std;
int main(){

    int num1, num2, suma, rest, mult, modulo;
    float div;


    cout<< "*********Operaciones*********"<<endl;

    cout<< "Hagamos las operaciones basicas"<<endl;
    cout << "Introduce un primer numero: "<<endl;
    cin >> num1;
    cout << "Introduce un segundo numero: "<<endl;
    cin >> num2;
    suma = num1 + num2;
    rest = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    cout << "Los resultados son: \n Para suma: " << suma << "\n Para resta: " << rest << "\n Para multi: " << mult << " \n Para division: " << div << "" <<endl;
    modulo = num1 % num2;
    cout << " El modulo es: " << modulo <<"."<< endl;

    return 0;



}

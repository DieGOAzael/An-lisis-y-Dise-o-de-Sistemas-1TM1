#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main(){

    const int filas = 10;
    const int columnas = 25;


    for (int i = 0; i < filas; i++){

        for (int j = 0; j < columnas; j++){

            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

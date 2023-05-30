#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;


struct Libreria {char Tit[30], Autor[30], Editorial[30];

    float precio;
    int anio;
}lib[10];

int registro(int);
void mostrar (int);

int menu(){

    system ("cls");
    int op;

    cout << "=== MENU ===" << endl;
    cout << "1.- Regsitro de libro" << endl;
    cout << "2.- Lista de existencias" << endl;
    cout << "3.- Salir " << endl;
    cout << "Elige una opcion: " << endl;
    cin >> op;
    return op;
}

int main(){

int x=0, opcion, y;
    do{

        opcion = menu();

        switch(opcion){

        case 1:

        x = registro(x);

            break;

        case 2:
            y = x-1;

            if (y < 0){

                cout << "No hay registros" << endl;
                system ("pause>null");
            }else{

            mostrar (y);
            }
            break;

        default: cout << "Adios..." << endl;
        system ("pause>null");


        }


    }while(opcion != 3);

}//cierre de sesion


int registro (int b){

    system ("cls");
    cout << "Titulo del libro: " ;fflush(stdin);
    gets(lib[b].Tit);
    cout << "Autor: " ; fflush(stdin);
    gets (lib[b].Autor);
    cout << "Editorial: "; fflush(stdin);
    gets (lib[b].Editorial);
    cout << "Anio: ";
    cin >> lib[b].anio;
    cout << "Precio: ";
    cin >> lib[b].precio;

    cout << "Registro completado";
    b++;

    return b;

}

void mostrar (int c){

system("cls");
    for (int i = 0; i <= c; i++){

        cout << lib[i].Tit << endl;
        cout << lib[i].Autor << endl;
        cout << lib[i].Editorial << endl;
        cout << lib[i].anio << endl;
        cout << lib[i].precio << endl;
        cout << endl << endl;
    }

    cout << "Son todos los registros" << endl;
    system ("pause>null");

}

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

struct Libreria {
    char Tit[30], Autor[30], Editorial[30];
    string Precio;
    string Anio;
} lib[10];

int registro(int);
void mostrar(int);
int menu() {
    system("cls");
    int op;

    cout << "===MENU===" << endl;
    cout << "1. Registrar CD\n";
    cout << "2. Mostrar CD'S\n";
    cout << "3. Salir\n";
    cout << "Elije una opcion: ";
    cin >> op;
    return op;
}

int main() {
    string rep;
    int x = 0, opcion, y;
    do {
        opcion = menu();
        switch (opcion) {
            case 1:
                do {
                    if (x < 10) {
                        x = registro(x);
                        cout << "\nDeseas registrar otro CD? (s/n)" << endl;
                        cin >> rep;
                    } else {
                        cout << "\nNo puedes registrar mas CD'S" << endl;
                        rep = "n";
                        system("pause>null");
                        break;
                    }
                } while (rep == "s" || rep == "S");
                break;
            case 2:
                y = x - 1;
                if (y < 0) {
                    cout << "\nNo hay registros" << endl;
                    system("pause>null");
                } else {
                    mostrar(y);
                }
                break;
            default:
                cout << "Adios..." << endl;
                system("pause>null");
        }
    } while (opcion != 3);
}

int registro(int b) {
    system("cls");
    cout << "Titulo del CD: ";
    fflush(stdin);
    gets(lib[b].Tit);
    cout << "\nInterprete o grupo: ";
    fflush(stdin);
    gets(lib[b].Autor);
    cout << "\nAnio de lanzamiento: ";
    cin >> lib[b].Anio;
    cout << "\nPrecio: ";
    cin >> lib[b].Precio;
    cout << "\nRegistro completo";
    b++;
    return b;
}
void mostrar(int c) {
    int li;
    system("cls");
    cout << "1. Listado completo" << endl;
    cout << "2. Por numero" << endl;
    cin >> li;

    if (li == 1) {
        system("cls");
        for (int i = 0; i <= c; i++) {
            cout << "Titulo:      " << lib[i].Tit << endl;
            cout << "Interprete:  " << lib[i].Autor << endl;
            cout << "Anio:        " << lib[i].Anio << endl;
            cout << "Precio:      " << lib[i].Precio << endl;
            cout << "\n";
        }
        cout << "\nSon todos los registros";
        system("pause>null");
    } else if (li == 2) {
        int num;
        system("cls");
        cout << "Ingrese el numero de registro que desea ver (1-" << c + 1 << "): ";
        cin >> num;

        if (num >= 1 && num <= c + 1) {
            do {
                system("cls");
                int index = num - 1;
                cout << "Registro " << num << ":\n";
                cout << "Titulo:      " << lib[index].Tit << endl;
                cout << "Interprete:  " << lib[index].Autor << endl;
                cout << "Anio:        " << lib[index].Anio << endl;
                cout << "Precio:      " << lib[index].Precio << endl;
                cout << "\n";

                cout << "Desea ver el siguiente registro? (s/n): ";
                string respuesta;
                cin >> respuesta;

                if (respuesta != "s" && respuesta != "S") {
                    break;
                }

                num++;

                if (num > c + 1) {
                    cout << "No hay mas registros para mostrar" << endl;
                    break;
                }

            } while (true);
        } else {
            cout << "Numero de registro invalido." << endl;
        }

        system("pause>null");
    }
}

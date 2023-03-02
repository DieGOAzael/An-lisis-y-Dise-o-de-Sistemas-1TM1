#include <iostream>
//#include <>
using namespace std;
int main(){

int x;
int op;
char nov;


cout << "Elige una de las siguientes opciones: " << endl;
cout << "1.- De 500 a 1.  " << endl;
cout << "2.- 1 a 500 de 3 en 3. " << endl;
cout << "3.- De 100 a 1 en 5 en 5. " << endl;
cout << "4.- Una plana de 30 veces." << endl;
cout << "5.- Pregunta de la novia." << endl;
cin >> op;

    switch (op){

        case 1:
            for (x = 500; x >= 1; x--){
          cout <<x<<" ";
            }
            break;
        case 2:

            for (x = 1; x <= 500; x+=3){
              cout <<x<<" ";
                }
            break;

        case 3:

            for (x = 100; x >= 1; x-=5){
          cout <<x<<" ";
            }
            break;


        case 4:

            for (x = 1; x <=30; x++){
                cout << x << " .-Programar es mi destino pokemon\n";
            }

            break;


        case 5:

            for (x = 1; x <= 15; x++){

                cout << x << " ¿Quieres ser mi novia?(s/n) \n";
                cin >> nov;

                if (nov == 's'){
                        cout << "SIUUUUU";
                     break;
                }
            }

            break;

    }
}


#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
using namespace std;

int main(){

int x, y, z, a, b, c, hora, minutos, seg;



    cout << "Ingrese una hora inicial en este formato hh:mm:ss " << endl;
    cout << "Ingrese una hora: " << endl;
    cin >> x;
    cout << "Ingrese los minutos: " <<endl;
    cin >> y;
    cout << "Ingrese los segundos: " <<endl;
    cin >> z;


    cout << "Ingrese una hora final en este formato hh:mm:ss " << endl;
    cout << "Ingrese una hora: " << endl;
    cin >> a;
    cout << "Ingrese los minutos: " <<endl;
    cin >> b;
    cout << "Ingrese los segundos: " <<endl;
    cin >> c;


     for (hora = x; hora <= a; hora++){




                for (minutos= y;  minutos <= 59; minutos++){
                    if (minutos == 59){
                        y = 0;
                    }
                        for (seg = z; seg <=59; seg++){
                            if (seg==59){
                                    z=0;

                            }
                            if ( hora == a ){
                                        if (minutos == b){
                                            if (seg == c+1){
                                                cout << "Fin del cronometro";
                                                exit(0);
                                            }
                                        }
                                    }

                            cout << hora << ":" << minutos << ":" << seg << endl;

                        }


                }
            }

}

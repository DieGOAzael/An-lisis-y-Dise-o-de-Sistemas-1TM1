#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main(){

    int num,fac,r=1;

    cout << "\n\t\tPROGRAMA PARA CALCULAR EL FACTORIAL DE UN NUMERO\t"<<endl;
    cout << "Ingresa el numero para calcular el factoriar:"<<endl;
    cin >> num;
    cout << "Desarrollo: ";
    fac=num;


   do{

        if (fac <0 || fac >10){

            cout << "Ingrese solo un valor del 1 al 10"<< endl;
            exit(0);
        }else{


        (fac==1)?printf("%d",fac):printf("%d x ",fac);
        r=r*fac;
        fac=fac-1;
        }
    }while(fac >0 && fac <=10);

    cout << "\n\nEl resultado de factorial de " << num << " es: " << r <<endl;


}

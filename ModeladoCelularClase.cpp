#include <iostream>
#include <string>

using namespace std;

class Celular{

    string Pantalla;
    float Precio;
    string SistemaOP;
    string Marca;
    float Saldo;


    public:
        //Constructora sin parametros
        Celular(){

        Pantalla = "Nada";
        Precio = 0;
        SistemaOP= "Nada";
        Marca = "Nada";
        Saldo = 0;

        }
        //constructura con parametros
        Celular (string a, float b, string c, string d, float e){

        Pantalla = a;
        Precio = b;
        SistemaOP = c;
        Marca = d;
        Saldo = e;

        }

        void setPantalla(string a);
        void setPrecio(float b);
        void setSistemaOP(string c);
        void setMarca (string d);
        void setSaldo (float e);

        string getPantalla();
        float getPrecio();
        string getSistemaOP();
        string getMarca();
        float getSaldo();

};


void Celular::setPantalla (string a){
    Pantalla = a;
}
void Celular::setPrecio (float b){
    Precio = b;
}
void Celular::setSistemaOP (string c){
    SistemaOP = c;
}
void Celular::setMarca (string d){
    Marca = d;
}
void Celular::setSaldo (float e){
    Saldo = e;
}

string Celular::getPantalla(){
    return Pantalla;
}
float Celular::getPrecio(){
    return Precio;
}
string Celular::getSistemaOP(){
    return SistemaOP;
}
string Celular::getMarca(){
    return Marca;
}
float Celular::getSaldo(){
    return Saldo;
}


int main(){
    Celular objcel("AMOLED",17456, "ANDROID X", "SAMSUMG", 63.80);
    cout << "Imprimiendo la información del objeto celular" << endl;
    cout << "Marca: " << objcel.getMarca()<<endl;
    cout << "Precio: " << objcel.getPrecio()<<endl;
    cout << "SO: "<< objcel.getSistemaOP()<<endl;
    cout << "Pantalla: " << objcel.getPantalla()<<endl;
    cout << "Saldo: "<< objcel.getSaldo()<<endl;
    return 0;

}





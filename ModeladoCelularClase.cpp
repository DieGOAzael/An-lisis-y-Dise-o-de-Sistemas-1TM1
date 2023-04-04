#include <iostream>
#include <string>

using namespace std;

class Celular{

    string Pantalla;
    float Precio;
    string OS;
    string Marca;
    float Saldo;


    public:
        Celular();//Constructora

        void setPantalla(string a);
        void setPrecio(float b);
        void setOS(string c);
        void setMarca (string d);
        void setSaldo (float e);

        string getPantalla();
        float getPrecio();
        string getOS();
        string getMarca();
        float getSaldo();



        void enviarmsj();

};
Celular::Celular(){//desarollando la constructora

}

void Celular::setPantalla (string a){
    Pantalla = a;
}
void Celular::setPrecio (float b){
    Precio = b;
}
void Celular::setOS (string c){
    OS = c;
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
string Celular::getOS(){
    return OS;
}
string Celular::getMarca(){
    return Marca;
}
float Celular::getSaldo(){
    return Saldo;
}



void Celular::enviarmsj(){

    if (Saldo>=1){

        cout << "Mensaje enviado..." << endl;
        Saldo = Saldo - 1;
    } else
        cout << "No se envio el mensaje POR POBRE" << endl;
}


int main(){

      int opcion;
      char rep;

    //objeto de la clase celular

    Celular objCelulin;
    cout << "Asignando valores a los atributos del objeto celular"<<endl;
    objCelulin.setMarca("Motorola");
    objCelulin.setPantalla("AMOLED");
    objCelulin.setPrecio (2313.3);
    objCelulin.setSaldo (50);
    objCelulin.setOS ("Android");

do{




    cout << "Selecciona la opcion deseada: " << endl;
    cout << "1.Imprimir informacion del celular"<< endl;
    cout << "2. Enviar informacio"<< endl;
    cout << "3. Consultar saldo" << endl;
    cin >> opcion;

    switch (opcion){


        case 1:


            cout << "\tEse telefono parece carpintero, porque hace ring, porque hace ring\t"<<endl;
            cout << "Marca de celular: " << objCelulin.getMarca() << " cuesta: " << objCelulin.getPrecio() <<endl;
            cout << "Tiene de OS " << objCelulin.getOS() << " con tipo de pantalla " << objCelulin.getPantalla() << endl;
            cout << "Su saldo es de " << objCelulin.getSaldo() << " RING RING" << endl;
            break;

        case 2:

                objCelulin.enviarmsj();
                break;
        case 3:

            cout << "Su saldo actual: " << objCelulin.getSaldo()<< endl;
            break;

        default:
            cout << "Esta opción no existe" << endl;
    }

    cout<<"Presiona r para regresar"<<endl;
cin>>rep;
system ("cls");

}while (rep=='r');


    return 0;
}





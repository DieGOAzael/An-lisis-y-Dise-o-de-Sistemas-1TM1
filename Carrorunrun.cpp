#include <iostream>
#include <string>
#include<windows.h>
#include<time.h>
using namespace std;

void posicion(int i, int j){
    COORD coord;
    coord.X=i;
    coord.Y=j;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


class Car{
    string Modelo;
    float  Kilometraje;
    string Marca;
    float  Gasolina;
    string Color;

    public:
    Car();

    void setModelo (string a);
    void setKilometraje (float b);
    void setMarca (string c);
    void setGasolina (float d);
    void setColor (string e);

    string getModelo ();
    float  getKilometraje ();
    string getMarca ();
    float  getGasolina ();
    string getColor ();

    void Adelante ();
    void Retroceder ();
    void Cargar();
};

Car::Car(){
}

void Car::setModelo(string a){
    Modelo=a;
}
void Car::setKilometraje(float b){
    Kilometraje=b;
}
void Car::setMarca(string c){
    Marca=c;
}
void Car::setGasolina(float d){
    Gasolina=d;
}
void Car::setColor(string e){
    Color=e;
}
string Car::getModelo(){
return Modelo;
}

float Car::getKilometraje(){
return Kilometraje;
}

string Car::getMarca(){
return Marca;
}

float Car::getGasolina(){
return Gasolina;
}

string Car::getColor(){
return Color;
}


void Car::Adelante()
{

    if (Gasolina>60){
        for(int x=50; x<=70; x++)
        {
            posicion(x,10); printf(".........________");
            posicion(x,11); printf(".. ___/____|____\___");
            posicion(x,12); printf(".(_---_________ _---_)");
            posicion(x,13); printf("....(o)..............(o)");
            Sleep(33);
            system("cls");
            Sleep(1);

        }

            Gasolina=Gasolina-30;
            posicion(50,22); printf("Se termino de avanzar\n");
            system("pause<null");
    }

    else
    {
        posicion(50,15); printf(".........________");
        posicion(50,16); printf(".. ___/____|____\___");
        posicion(50,17); printf(".(_---_________ _---_)");
        posicion(50,18); printf("....(o)..............(o)");
        posicion(50,70); printf("Sin Gasolina\n");
    }
}

void Car::Retroceder()
{

    if (Gasolina>50){
        for(int x=50; x>=30; x--){
            posicion(x,10); printf(".........________");
            posicion(x,11); printf(".. ___/____|____\___");
            posicion(x,12); printf(".(_---_________ _---_)");
            posicion(x,13); printf("....(o)..............(o)");

                    Sleep(180);
                    system("cls");
                    Sleep(1);

                }
            Gasolina=Gasolina-2;
            posicion(50,22); printf("Se termino de retroceder \n");
            system("pause<null");
    }
    else{
            posicion(50,10); printf(".........________");
            posicion(50,11); printf(".. ___/____|____\___");
            posicion(50,12); printf(".(_---_________ _---_)");
            posicion(50,13); printf("....(o)..............(o)");


            posicion(50,22); printf("Sin Gasolina\n");
    }
}


void Car::Cargar(){
    int masgas;

    cout << "Ingrese cuanta gasolina va a recargar \n"<< endl;
    cin >> masgas;
    Gasolina = Gasolina + masgas;
}

int main(){

    int opcion;
    int r;
    char rep;
    Car objFord;

    objFord.setModelo ("Explorer");
    objFord.setKilometraje(500);
    objFord.setMarca ("Ford");
    objFord.setGasolina (600);
    objFord.setColor ("Gris");
    do{


    cout<<"Selecciona una opcion"<<endl;
    cout<<"1.- Informacion del carro"<<endl;
    cout<<"2.- Avanzar 10m"<<endl;
    cout<<"3.- Retroceder 10m"<<endl;
    cout<<"4.- Consultar la gasolina"<<endl;
    cout<<"5.- Cargar Gasolina"<< endl;
    cout<<"6.- Salir"<<endl;
    cin>>r;

        switch(r){
            case 1: cout<<"Modelo: "<<objFord.getModelo()<<" con kilometraje de: "<<objFord.getKilometraje()<<endl;
            cout<<"Marca: "<<objFord.getMarca()<<" Gasolina: "<<objFord.getGasolina()<<endl;
            cout<<"Color: "<<objFord.getColor()<<endl;
        break;

        case 2:
            system("cls");
            objFord.Adelante();
        break;

        case 3:
            system("cls");
            objFord.Retroceder();
        break;

        case 4:
            system("cls");
            cout<<"Litros de gasolina: "<<objFord.getGasolina()<<endl;
            break;

        case 5:
            system("cls");
            objFord.Cargar();
            cout<< "Se cargo la gasolina, ahora tiene: "<< objFord.getGasolina() << endl;
            break;

        case 6:
            exit(0);
        break;

        default:
            cout<<"Esta opcion no existe";
        }
    cout<<"\t\tPresiona r para regresar\t\t"<<endl;

    cin>>rep;

    system ("cls");
    }while (rep=='r');
    return 0;
}

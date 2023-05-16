#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdio.h>
#include <string>


using namespace std;
void posicion(int i, int j)
{
    COORD coord;
    coord.X=i;
    coord.Y=j;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//Variablessss
    int /*h, hf,*/ m,s,sf,mf;
    char bck;

class Pelicula
{
    string Titulo;
    int Duracion;
    string Genero;
    int Year;
    int Valorar;
    bool Estado;

public:
    Pelicula();
    Pelicula(string a,int b,string c,int d,int e, bool f);
    void setTitulo(string a);
    void setDuracion(int b);
    void setGenero(string c);
    void setYear(int d);
    void setValorar(int e);
    void setEstado(bool f);

    string getTitulo();
    int getDuracion();
    string getGenero();
    int getYear();
    int getValorar();
    bool getEstado();

    void PararPeli();
    void AvanzarPeli();
    void RetrocederPeli();
    void PausarPeli();
    void Rate();
    void DetenerPeli();
    void Info();
};

Pelicula::Pelicula()
{
    Titulo="ninguno";
    Duracion=00;
    Genero="ninguno";
    Year=00;
    Valorar=00;
    Estado= 00;
}

Pelicula::Pelicula(string a,int b,string c,int d,int e, bool f)
{
    Titulo=a;
    Duracion=b;
    Genero=c;
    Year=d;
    Valorar=e;
    Estado=f;
}

void Pelicula::setTitulo(string a)
{
    Titulo=a;
}

void Pelicula::setDuracion(int b)
{
    Duracion=b;
}

void Pelicula::setGenero(string c)
{
    Genero=c;
}

void Pelicula::setYear(int d)
{
    Year=d;
}

void Pelicula::setValorar(int e)
{
    Valorar=e;
}

void Pelicula::setEstado(bool f){
    Estado=f;
}

string Pelicula::getTitulo()
{
    return Titulo;
}

int Pelicula::getDuracion()
{
    return Duracion;
}

string Pelicula::getGenero()
{
    return Genero;
}

int Pelicula::getYear()
{
    return Year;
}

int Pelicula::getValorar()
{
    return Valorar;
}

bool Pelicula::getEstado()
{
    return Estado;
}

//////////////////////////////////////////////////////////////////

void Pelicula::AvanzarPeli()
{ //El primer if es para que cuando el minuto supere los 60, pues se reste y le sume a la hora
    //Checa como funciona la hora y los segundos
    system("cls");
    m+=3;
    /*
    if (m >= 60) {
            //h += 1;
            m -= 60;
    }
    */
    if(m<mf)
    {
        cout<</*h<<":"<<*/m<<":"<<s<<endl;
    }

    else if(/*h>hf||*/m>mf)
    {
        cout<<"Pelicula finalizada";
        m-=3;
    }
}

void Pelicula::RetrocederPeli()
{
        system("cls");
    if(m>3)
    {
        m-=3;
        cout<</*h<<":"<<*/m<<":"<<s<<endl;
    }

    else if(m<3)
    {
        cout<<"No se puede regresar mas";
    }

}

void Pelicula::PausarPeli()
{
    system("cls");
    int hr, mr, sr;


    //hr = hf-h;
    mr = mf-m;
    sr =60-s;
    /*
    if (mr<0){
        mr=0;
    }
    if (sr<0){
        sr = 0;
    }
    */
    cout<<"Tiempo donde te quedaste: "<</*h<<":"<<*/m<<":"<<s<<" / Falta por ver: "<</*hr<<":"<<*/mr<<":"<<sr;





}

void Pelicula::Rate()
{
    system("cls");
        int calif;
        int rate, aux;
    cout<<"Califica tu pelicula: \n1:Me gusta\n2:No me gusta"<<endl;
    cin>>calif;

    if(calif==1)
    {
        Valorar=2;
        cout <<"Calificaste esta pelicula"<<endl;
    }
    else
    {
        Valorar=3;
        cout <<"Calificaste esta pelicula"<<endl;
    }
}



void Pelicula::DetenerPeli(){
system("cls");
    cout << "La pelicula se ha detenido, no podras hacer otra accion mas que calificarla y ver su informacion."<<endl;

}

void Pelicula::Info()
{
    system("cls");
    if (Valorar>1)
    {
        if (Valorar==2)
        {
            cout<<"Le diste Me gusta a la pelicula";
        }
        else
        {
            cout<<"Le diste No me gusta a la pelicula"<<endl;
        }
    }

    else
    {
        cout<<"No haz calificado esta pelicula"<<endl;
    }

}

///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    Pelicula objPokemon;
    objPokemon.setTitulo("Feliz anio nuestro by Netflix");
    objPokemon.setDuracion(59);
    objPokemon.setGenero("Comedia");
    objPokemon.setYear(2022);
    objPokemon.setValorar(1);
    objPokemon.setEstado(false);
    srand(time(NULL));
    //h=rand()%2;
    m=rand()%58;
    s=rand()%60;
    //hf=objPokemon.getDuracion()/60;
    mf=objPokemon.getDuracion();
    sf=mf/60;

do{

            cout<<"Tiempo actual: "<<m<<":"<<s<<" / Duracion de la pelicula: "<</*hf<<":"<<*/mf<<":"<<sf<<" ";
            cout<<objPokemon.getTitulo()<<endl;


    int opc;
    bool detenerp;

    cout<<"Opciones:"<<endl;

    cout<<"1.- Avanzar Pelicula"<<endl;
    cout<<"2.- Retroceder la Pelicula"<<endl;
    cout<<"3.- Pausar la Pelicula"<<endl;
    cout<<"4.- Detener Pelicula"<<endl;
    cout<<"5.- Informacion y estado de la pelicula"<<endl;
    cout<<"6.- Calificar"<<endl;
    cout<<"7.- Quitar y salir"<<endl;
    cin>>opc;



    switch(opc)
{
    case 1:

detenerp = objPokemon.getEstado();

        if (detenerp == false){
        objPokemon.AvanzarPeli();
        }else {
        cout <<"La pelicula esta detenida"<<endl;
        }
        break;
    case 2:
        if (detenerp == false){
        objPokemon.RetrocederPeli();
        }else {
        cout <<"La pelicula esta detenida"<<endl;
        }
        break;
    case 3:
        if (detenerp == false){
        objPokemon.PausarPeli();
        }else {
        cout <<"La pelicula esta detenida"<<endl;
        }
        break;
    case 4:
        objPokemon.DetenerPeli();
        objPokemon.setEstado(true);

        break;
    case 5:
        objPokemon.Info();

            cout<<objPokemon.getTitulo()<<endl<<"Con una duracion de: "<</*hf<<":"<<*/mf<<":"<<sf<<endl;
            cout<<"Genero: "<<objPokemon.getGenero()<<endl<<"Estrenada en: "<<objPokemon.getYear(); break;
    case 6:
        objPokemon.Rate(); break;

    case 7: return 0; break;

    default:
            cout<<"Operacion invalida\n";
}


cout<<endl<<" 'r' para regresar"<<endl;
cin>>bck;
system("cls");
    }while(bck=='r');
}

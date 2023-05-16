#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

class Helado{

	string Sabor;
	float Precio;
	string Presentacion;
public:

	Helado(string a,float b,string c);

	void setSabor(string a);
	void setPrecio(float b);
	void setPresentacion(string c);
	string getSabor();
	float getPrecio();
	string getPresentacion();
	void Comer();
};

Helado::Helado(string a,float b,string c){
	Sabor=a;
	Precio=b;
	Presentacion=c;
}

void Helado::setSabor(string a){
	Sabor=a;
}
void Helado::setPrecio(float b){
	Precio=b;
}
void Helado::setPresentacion(string c){
	Presentacion=c;
}
string Helado::getSabor(){
	return Sabor;
}
float Helado::getPrecio(){
	return Precio;
}
string Helado::getPresentacion(){
	return Presentacion;
}

int main(){

 	Helado ice_cream[3]={Helado("Fresa",10.00,"cono"),
 	Helado("Chocochispas",70.00,"vaso"),
 	Helado("Napolitano",15.00,"cono")};

 	for(int i=0;i<=2;i++){
 		cout<<ice_cream[i].getSabor()<<" ";
 		cout<<ice_cream[i].getPrecio()<<" ";
 		cout<<ice_cream[i].getPresentacion()<<" "<<endl;
	}
    return 0;
 }

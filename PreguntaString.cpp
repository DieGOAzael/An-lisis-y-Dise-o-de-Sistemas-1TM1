#include <string.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

int main(){

char nombre[20], resp[20], frase[]="BENITO JUAREZ";

cout << "Hola, escribe tu nombre: "; fflush(stdin);
gets(nombre);

system("cls");

cout << "Muy bien " << nombre << " Responde lo siguiente: " << endl;

cout << "A quien se le conoce como el Beremerito de las americas?" << endl;

fflush(stdin);gets(resp); //para limpiar cualquier archivo basura o alguna cosa que se puedo guardar por ahi

strupr(resp);//upr de upper que dice que lo que agarre lo haga mayusculas
//strlwr() de lower para minusculas

if (strcmp(resp, frase)==0){
//strcmp de compare, hace una comparacion
//el 0 es porque las letras ASCII tienen un valor numerico y en la caso de comparar una resta, debería dar 0.
//Permite comparar cadenas si son iguales, el resultado es 0
cout << "Tu respuesta es correcta"<< endl;
}
else {

cout << "Te recomiendo leer jeje" <<endl;
}


strcat(nombre, " ,   ");
strcat(nombre,frase);
cout << endl<< nombre << " fue tu respuesta";

system("pause>xd");

}

//strcpy(destino.Origen)

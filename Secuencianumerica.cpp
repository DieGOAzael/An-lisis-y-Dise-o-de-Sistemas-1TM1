#include <iostream>
using namespace std;
int main(){
int x, cont = 0;
system ("color e9");

for (x = 1000; x >= 10; x-=10){

    if (cont != 10){
        cout <<x<<" ";
        cont = cont + 1;
    }

    if (cont == 10){
        cont = 0;
        cout <<""<< endl;

    }

}


}

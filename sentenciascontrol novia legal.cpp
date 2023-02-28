#include <iostream>

using namespace std;
int main(){

    char resp;
    int edad;

    cout << "How old are u?: ";
    cin >> edad;

    cout << "Novios? s/n: ";
    cin >> resp;



    if ((edad >= 18) && (resp == 's')){

    cout << "siuuuuuuuuuu" << endl;

    } else if ((edad < 18) && (resp == 's')){

    cout << "Maldito loco ya te cayo la ley " << endl;

    }else

    cout << "Vemos, vemos"<< endl;

return 0;
}

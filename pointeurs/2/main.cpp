#include <iostream>

using namespace std;

int main() {
    int tab[10];
    int* ptr;

    ptr = &tab[0];

    cout << "valeur de ptr : "<<ptr<<endl;

    *ptr = 1;

    ptr = tab;
    cout << "valeur de ptr : "<<ptr<<endl;

    for (int i = 1; i < 11; ++i) {
        *ptr = (i+1)*(i+1);
        ++ptr;
    }

    ptr = tab;

    cout<<"5 eme valeur du tableau : "<<tab[4]<<endl;
    cout<<"5 eme valeur du tableau : "<<ptr[4]<<endl;
    cout<<"5 eme valeur du tableau : "<<*(ptr+4)<<endl;

    return 0;
}
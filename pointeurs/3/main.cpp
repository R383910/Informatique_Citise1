#include <iostream>

#include "fonction.h"

using namespace std;

int main() {
    float a = 2.8;
    float b = 5.6;

    Echange(&a,&b);
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    return 0;
}

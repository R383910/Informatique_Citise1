#include <iostream>

#include "pgcd.h"

using namespace std;

int main() {
    unsigned int a, b, plusGrandDiviseur;

    cout << "Saisir a, un entier naturel" << endl;
    cin >> a;
    cout << "Saisir b, un entier naturel" << endl;
    cin >> b;

    plusGrandDiviseur = PGCD(a, b);

    cout << "Le plus grand diviseur de " << a << " et " << b << " est " << plusGrandDiviseur << endl;
    
    return 0;
}

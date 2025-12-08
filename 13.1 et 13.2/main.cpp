#include <iostream>
#include "fonction.h"

using namespace std;

int main() {

    cout << "Saisie de z1 :" << endl;
    Complexe z1 = Saisir_complexe();

    cout << "Saisie de z2 :" << endl;
    Complexe z2 = Saisir_complexe();

    cout << "z1 = "; Affiche_complexe(z1); cout << endl;
    cout << "z2 = "; Affiche_complexe(z2); cout << endl;

    Complexe somme = Add_complexe(z1, z2);
    cout << "Somme : "; Affiche_complexe(somme); cout << endl;

    Complexe produit = Mult_complexe(z1, z2);
    cout << "Produit : "; Affiche_complexe(produit); cout << endl;

    Complexe inv = Inverse(z1);
    cout << "Inverse de z1 : "; Affiche_complexe(inv); cout << endl;

    cout << "Module de z1 : " << Module(z1) << endl;

    float omega;
    cout << "Entrer la pulsation omega (w) : ";
    cin >> omega;

    Complexe p = {0, omega};

    Complexe h_val = Calculer_H(p);

    float gain = Module(h_val);

    cout << "Pour w = " << omega << " rad/s :" << endl;
    cout << "H(jw) = "; Affiche_complexe(h_val); cout << endl;
    cout << "|H(jw)| = " << gain << endl;

    return 0;
}
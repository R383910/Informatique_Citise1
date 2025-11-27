#include <iostream>
using namespace std;
#include "bigintConv.h"

int main()
{
    char nombre[1000] = "1234567891011121314151617";
    unsigned int tab[100];
    int taillePratique = ConversionChaineVersBase2pow32(nombre, 100u, tab);
    cout << "Taille pratique: " << taillePratique << endl;
    for (int i = 0; i < taillePratique; ++i) cout << tab[i] << " ";
    cout << endl;
    return 0;
}

#include <iostream>
using namespace std;
#include "bigintConvInverse.h"

int main()
{
    unsigned int tab[3] = {3197516993u, 255446423u, 66926u}; // exemple donné dans l'énoncé
    char chaine[1000];
    ConversionBase2pow32VersChaine(tab, 3u, chaine);
    cout << "Nombre reconstruit: " << chaine << endl;
    return 0;
}

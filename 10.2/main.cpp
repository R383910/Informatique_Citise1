#include <iostream>
using namespace std;

#include "saisieEntiers.h"

int main()
{
    const unsigned int tailleMax = 100;
    int entiersMemo[100];

    int taillePratique = SaisieEntiers(tailleMax, entiersMemo);
    int nbZeros = CompterZeros(entiersMemo, taillePratique);

    cout << "Nombre d’elements saisis : " << taillePratique << endl;
    cout << "Il y a " << nbZeros << " elements nuls et "
         << (taillePratique - nbZeros) << " elements non nuls" << endl;

    return 0;
}
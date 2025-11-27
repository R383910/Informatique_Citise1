#include <iostream>
#include "saisieEntiers.h"
using namespace std;

// R : Saisir des entiers jusqu’à -1 ou jusqu’à remplir le tableau
// E : tailleMax : 1 entier
// E/S : tab : 1 tableau de 100 entier
// S : 1 entier
unsigned int SaisieEntiers(unsigned int tailleMax, int tab[])
{
    int valeur;
    unsigned int i = 0;

    while (i < tailleMax && valeur != -1)
    {
        cout << "Entrer une valeur (-1 pour arreter) : ";
        cin >> valeur;

        if (valeur != -1)
        {
            tab[i] = valeur;
            i++;
        }
    }

    return i;
}

// R : Compter le nombre d’éléments nuls
// E : tab : 1 tableau de 100 entier, taille : 1 entier
// E/S : aucun
// S : 1 entier
int CompterZeros(const int tab[], unsigned int taille)
{
    int zeros = 0;

    for (unsigned int i = 0; i < taille; i++)
    {
        if (tab[i] == 0)
        {
            zeros++;
        }
    }

    return zeros;
}
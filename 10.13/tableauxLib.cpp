#include <iostream>
using namespace std;
#include "tableauxLib.h"

int SaisieReels(unsigned int tailleMax, float tab[])
{
    unsigned int i = 0;
    float v;
    while (i < tailleMax)
    {
        cout << "Entrez un reel (-99999 pour arreter): ";
        cin >> v;
        if (v == -99999.0f) break;
        tab[i++] = v;
    }
    return (int)i;
}

void AfficherReels(float tab[], unsigned int taille)
{
    cout << "{";
    for (unsigned int i = 0; i < taille; ++i)
    {
        cout << tab[i];
        if (i + 1 < taille) cout << ",";
    }
    cout << "}" << endl;
}

void CopierReels(float tabSource[], float tabDestination[], unsigned int taille)
{
    for (unsigned int i = 0; i < taille; ++i) tabDestination[i] = tabSource[i];
}

bool ComparerReels(float tab1[], float tab2[], unsigned int taille)
{
    for (unsigned int i = 0; i < taille; ++i) if (tab1[i] != tab2[i]) return false;
    return true;
}

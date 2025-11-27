#include <iostream>
using namespace std;
#include "operationsTableau.h"

void CopierTableau(int tabSource[], int tabDestination[], unsigned int taille)
{
    for (unsigned int i = 0; i < taille; ++i) tabDestination[i] = tabSource[i];
}

void AfficherTableau(int tab[], unsigned int taille)
{
    cout << "{";
    for (unsigned int i = 0; i < taille; ++i)
    {
        cout << tab[i];
        if (i + 1 < taille) cout << ",";
    }
    cout << "}" << endl;
}

bool SontIdentiques(int tab1[], int tab2[], unsigned int taille)
{
    for (unsigned int i = 0; i < taille; ++i)
        if (tab1[i] != tab2[i]) return false;
    return true;
}

float CalculerMoyenne(int tab[], unsigned int taille)
{
    if (taille == 0) { cout << "Erreur: taille nulle" << endl; return 0.0f; }
    int somme = 0;
    for (unsigned int i = 0; i < taille; ++i) somme += tab[i];
    return static_cast<float>(somme) / static_cast<float>(taille);
}

void SommeCumulee(int tabSource[], int tabCumul[], unsigned int taille)
{
    int s = 0;
    for (unsigned int i = 0; i < taille; ++i)
    {
        s += tabSource[i];
        tabCumul[i] = s;
    }
}

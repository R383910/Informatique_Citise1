#include <iostream>
using namespace std;
#include "nomprenom.h"

int LongueurChaineLocal(char s[])
{
    int i = 0;
    while (s[i] != '\0') ++i;
    return i;
}

void CopierPrefixe(char src[], char dest[], int length, int offsetDest)
{
    for (int i = 0; i < length; ++i) dest[offsetDest + i] = src[i];
}

void NomPrenom(char prenom[], char nom[], char resultat[])
{
    int Lp = LongueurChaineLocal(prenom);
    int Ln = LongueurChaineLocal(nom);
    int pTake = (Lp >= 3 ? 3 : Lp);
    int nTake = (Ln >= 3 ? 3 : Ln);

    int pos = 0;
    for (int i = 0; i < pTake; ++i) { resultat[pos++] = prenom[i]; }
    resultat[pos++] = '-';
    for (int i = 0; i < nTake; ++i) { resultat[pos++] = nom[i]; }
    resultat[pos] = '\0';
}

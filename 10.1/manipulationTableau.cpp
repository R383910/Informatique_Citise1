#include <iostream>
#include "manipulationTableau.h"
using namespace std;

// R : Afficher le premier et le dernier élément d’un tableau
// E : tailleMax : 1 entier
// E/S : tab : 1 tableau de réel
// S : vide
void AfficherPremierDernier(float tab[], unsigned int tailleMax)
{
    if (tailleMax == 0)
    {
        cout << "Erreur : tableau vide" << endl;
    }
    else
    {
        tab[0] = -3.4f;
        tab[tailleMax - 1] = tab[0] - 1.0f;

        cout << "Le premier element de ce tableau est : " << tab[0] << endl;
        cout << "Le dernier element de ce tableau est : " << tab[tailleMax - 1] << endl;
    }
}

// R : Afficher un élément et modifier une case du tableau
// E : tailleTab : 1 entier, iConsult : 1 entier, iModifier : 1 entier, valeur : 1 réel
// E/S : tab : 1 tableau de réel
// S : vide
void ModifierCaseTableau(float tab[], unsigned int tailleTab,
                         unsigned int iConsult,
                         unsigned int iModifier,
                         float valeur)
{
    if (iConsult >= 1 && iConsult <= tailleTab)
    {
        cout << "Le ieme element du tableau est : " << tab[iConsult - 1] << endl;
    }
    else
    {
        cout << "Erreur : indice invalide pour la consultation" << endl;
    }

    if (iModifier < tailleTab)
    {
        tab[iModifier] = valeur;

        cout << "Vous avez modifie la " << (iModifier + 1)
             << "e case. Son nouveau contenu est : "
             << tab[iModifier] << endl;
    }
    else
    {
        cout << "Erreur : indice invalide pour la modification" << endl;
    }
}
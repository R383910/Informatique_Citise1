#include "statistiquesTableau.h"

// R : Calculer la moyenne, la moyenne des carrés et la variance
// E : aucune
// E/S : tab : 1 tableau de 7 réel
// S : vide
void CalculerStatistiques(float tab[7])
{
    float somme = 0;
    float sommeCarres = 0;

    for (unsigned int i = 0; i < 4; i++)
    {
        somme += tab[i];
        sommeCarres += tab[i] * tab[i];
    }

    float moyenne = somme / 4.0f;
    float moyenneCarres = sommeCarres / 4.0f;

    tab[4] = moyenne;
    tab[5] = moyenneCarres;
    tab[6] = moyenneCarres - (moyenne * moyenne);
}
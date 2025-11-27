#include <iostream>
#include "saisieOrdonnee.h"
using namespace std;

// R : Saisir 3 réels en les rangeant automatiquement par ordre croissant
// E : aucune
// E/S : tab : 1 tableau de 3 réel
// S : vide
void SaisieOrdonnee(float tab[3])
{
    float valeur;

    for (unsigned int i = 0; i < 3; i++)
    {
        cout << "Entrer une valeur : ";
        cin >> valeur;

        if (i == 0)
        {
            tab[0] = valeur;
        }
        else if (i == 1)
        {
            if (valeur < tab[0])
            {
                tab[1] = tab[0];
                tab[0] = valeur;
            }
            else
            {
                tab[1] = valeur;
            }
        }
        else
        {
            if (valeur < tab[0])
            {
                tab[2] = tab[1];
                tab[1] = tab[0];
                tab[0] = valeur;
            }
            else if (valeur < tab[1])
            {
                tab[2] = tab[1];
                tab[1] = valeur;
            }
            else
            {
                tab[2] = valeur;
            }
        }

        cout << "Etat actuel : { "
             << tab[0] << " , "
             << tab[1] << " , "
             << tab[2] << " }" << endl;
    }
}
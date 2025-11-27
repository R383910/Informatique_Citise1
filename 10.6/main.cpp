#include <iostream>
using namespace std;
#include "tableau2D.h"

int main()
{
    int tab[4][6] = {
        {2,3,5,7,11,13},
        {17,19,23,29,31,37},
        {41,43,47,53,59,61},
        {67,71,73,79,83,89}
    };

    cout << "Tableau initial:" << endl;
    AfficherTableau2D(tab);

    PermuterLignes(tab, 0, 2); // permuter 1ere et 3eme ligne
    PermuterColonnes(tab, 1, 4); // permuter 2eme et 5eme colonne

    cout << endl << "Tableau apres permutations:" << endl;
    AfficherTableau2D(tab);

    return 0;
}

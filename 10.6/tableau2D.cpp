#include <iostream>
using namespace std;
#include "tableau2D.h"

void PermuterLignes(int tab[4][6], unsigned int ligne1, unsigned int ligne2)
{
    for (unsigned int j = 0; j < 6; ++j)
    {
        int tmp = tab[ligne1][j];
        tab[ligne1][j] = tab[ligne2][j];
        tab[ligne2][j] = tmp;
    }
}

void PermuterColonnes(int tab[4][6], unsigned int col1, unsigned int col2)
{
    for (unsigned int i = 0; i < 4; ++i)
    {
        int tmp = tab[i][col1];
        tab[i][col1] = tab[i][col2];
        tab[i][col2] = tmp;
    }
}

void AfficherTableau2D(int tab[4][6])
{
    for (unsigned int i = 0; i < 4; ++i)
    {
        cout << "| ";
        for (unsigned int j = 0; j < 6; ++j)
        {
            cout << tab[i][j] << " ";
        }
        cout << "|" << endl;
    }
}

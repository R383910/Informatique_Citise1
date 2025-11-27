#include "carreMagique.h"

bool EstMagique(int tab[3][3])
{
    int cible = tab[0][0] + tab[0][1] + tab[0][2];

    for (unsigned int i = 0; i < 3; ++i)
    {
        int sommeL = 0, sommeC = 0;
        for (unsigned int j = 0; j < 3; ++j)
        {
            sommeL += tab[i][j];
            sommeC += tab[j][i];
        }
        if (sommeL != cible || sommeC != cible) return false;
    }

    int diag1 = tab[0][0] + tab[1][1] + tab[2][2];
    int diag2 = tab[0][2] + tab[1][1] + tab[2][0];
    if (diag1 != cible || diag2 != cible) return false;

    return true;
}

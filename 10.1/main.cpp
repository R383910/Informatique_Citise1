#include "manipulationTableau.h"

int main()
{
    const unsigned int tailleMax = 5;
    float tab[5] = {0,0,0,0,0};

    AfficherPremierDernier(tab, tailleMax);

    ModifierCaseTableau(tab, tailleMax, 3, 3, 7.4f);

    return 0;
}

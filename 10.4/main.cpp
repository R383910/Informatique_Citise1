#include <iostream>
#include "saisieOrdonnee.h"
using namespace std;

int main()
{
    float tab[3] = {0,0,0};

    SaisieOrdonnee(tab);

    cout << "Tableau final : { "
         << tab[0] << " , "
         << tab[1] << " , "
         << tab[2] << " }" << endl;

    return 0;
}
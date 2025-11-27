#include <iostream>
using namespace std;
#include "operationsTableau.h"

int main()
{
    const unsigned int taille = 5;
    int tabSource[100] = {1,2,3,4,5};
    int tabDest[100] = {0};
    int tabCumul[100] = {0};

    CopierTableau(tabSource, tabDest, taille);
    cout << "TabSource: "; AfficherTableau(tabSource, taille);
    cout << "TabDest: "; AfficherTableau(tabDest, taille);

    cout << "Sont identiques ? " << SontIdentiques(tabSource, tabDest, taille) << endl;
    cout << "Moyenne : " << CalculerMoyenne(tabSource, taille) << endl;

    SommeCumulee(tabSource, tabCumul, taille);
    cout << "Somme cumulee: "; AfficherTableau(tabCumul, taille);

    return 0;
}

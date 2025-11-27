#include <iostream>
using namespace std;
#include "chaineUtils.h"

int main()
{
    char texte[200] = "Bonjour je suis en info";

    cout << "Longueur: " << LongueurChaine(texte) << endl;
    cout << "Voyelles: " << CompterVoyelles(texte) << endl;
    cout << "Mots: " << CompterMots(texte) << endl;

    return 0;
}

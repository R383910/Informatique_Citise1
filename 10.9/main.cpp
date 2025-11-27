#include <iostream>
using namespace std;
#include "nomprenom.h"

int main()
{
    char prenom[100] = "Florent";
    char nom[100] = "Bernard";
    char res[100];

    NomPrenom(prenom, nom, res);
    cout << res << endl; // "Flo-Ber"

    // Cas particulier
    char prenom2[100] = "Zo";
    char nom2[100] = "Andriamanoharisoa";
    NomPrenom(prenom2, nom2, res);
    cout << res << endl; // "Zo-And"

    char prenom3[100] = "Omar";
    char nom3[100] = "Sy";
    NomPrenom(prenom3, nom3, res);
    cout << res << endl; // "Oma-Sy"

    return 0;
}

#include <iostream>
using namespace std;

#include "fonction.h"

coureur SaisieCoureur() {
    coureur c;

    cout << "nom : ";
    cin >> c.nom;

    cout << "dossard : ";
    cin >> c.dossard;

    cout << "distance : ";
    cin >> c.distance;

    cout << "temps ref : ";
    cin >> c.tempsRef;

    cout << "temps real : ";
    cin >> c.tempsReal;

    return c;
}

void AfficheCoureur(coureur c) {
    cout << "nom : " << c.nom << endl;

    cout << "dossard : " << c.dossard << endl;

    cout << "distance : " << c.distance << endl;

    cout << "temps ref : " << c.tempsRef << endl;

    cout << "temps real : " << c.tempsReal << endl;
}
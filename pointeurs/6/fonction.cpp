#include <iostream>
#include <string.h>
#include "fonction.h"

using namespace std;

unsigned int Longueur_chaine(const char * chaine) {
    unsigned int longueur = 0;

    while (chaine[longueur] != '\0') {
        longueur += 1;
    }
    return longueur + 1;
}

char * Concatene_nouvelle(const char * chaine1, const char * chaine2) {
    unsigned int longueurChaine1 = Longueur_chaine(chaine1);
    unsigned int longueurChaine2 = Longueur_chaine(chaine2);
    char* nouvelChaine = new char[longueurChaine1+longueurChaine2-1];
    strcat(nouvelChaine,chaine1);
    strcat(nouvelChaine,chaine2);
    return nouvelChaine;
}
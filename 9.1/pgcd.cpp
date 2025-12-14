#include "pgcd.h"

/*
    R : Calcule le plus grand diviseur commun de 2 entiers naturels avec l'agorithme d'euclide
    E : a et b 2 entiers naturels
    S : le pgcd de a et b un entier naturel
*/
unsigned int PGCD(unsigned int a, unsigned int b) {
    unsigned int echange;
    
    while (b != 0) {
        echange = b;
        b = a % b;
        a = echange;
    }

    return a;
}

#include <iostream>
#include <cmath>
#include "fonction.h"

using namespace std;

Complexe Saisir_complexe(void) {
    Complexe z;
    cout << "Entrer la partie reelle : ";
    cin >> z.re;
    cout << "Entrer la partie imaginaire : ";
    cin >> z.im;
    return z;
}

void Affiche_complexe(Complexe z) {
    if (z.im >= 0) {
        cout << z.re << " + " << z.im << "i";
    } else {
        cout << z.re << " - " << -z.im << "i";
    }
}

Complexe Conjugue(Complexe z) {
    Complexe res;
    res.re = z.re;
    res.im = -z.im;
    return res;
}

Complexe Oppose(Complexe z) {
    Complexe res;
    res.re = -z.re;
    res.im = -z.im;
    return res;
}

Complexe Inverse(Complexe z) {
    Complexe res;
    float denom = z.re * z.re + z.im * z.im;

    if (denom == 0) {
        cout << "Erreur : Division par zero (module nul)" << endl;
        res = {0, 0}; // Retour par défaut
    } else {
        res.re = z.re / denom;
        res.im = -z.im / denom;
    }
    return res;
}

float Module(Complexe z) {
    return sqrt(z.re * z.re + z.im * z.im);
}

float Argument(Complexe z) {
    return atan2(z.im, z.re);
}

Complexe Add_complexe(Complexe z1, Complexe z2) {
    Complexe res;
    res.re = z1.re + z2.re;
    res.im = z1.im + z2.im;
    return res;
}

Complexe Mult_complexe(Complexe z1, Complexe z2) {
    Complexe res;
    res.re = z1.re * z2.re - z1.im * z2.im;
    res.im = z1.re * z2.im + z1.im * z2.re;
    return res;
}

Complexe Div_complexe(Complexe z1, Complexe z2) {
    return Mult_complexe(z1, Inverse(z2));
}

Complexe Calculer_H(Complexe p) {
    Complexe c2 = {2, 0};
    Complexe c5 = {5, 0};
    Complexe c6 = {6, 0};
    Complexe c25 = {25, 0};
    Complexe c14 = {14, 0};

    Complexe p_plus_2 = Add_complexe(p, c2);
    Complexe numerateur = Mult_complexe(c14, p_plus_2);

    Complexe term1 = Add_complexe(p, c5);

    Complexe p_carre = Mult_complexe(p, p);
    Complexe six_p = Mult_complexe(c6, p);
    Complexe term2_part = Add_complexe(p_carre, six_p);
    Complexe term2 = Add_complexe(term2_part, c25);

    Complexe denominateur = Mult_complexe(term1, term2);

    return Div_complexe(numerateur, denominateur);
}
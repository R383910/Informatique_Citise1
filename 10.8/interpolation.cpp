#include <iostream>
using namespace std;
#include "interpolation.h"

void RemplirAbscisses(float xk[], float x0, float delta, unsigned int n)
{
    for (unsigned int k = 0; k <= n; ++k)
        xk[k] = x0 + static_cast<float>(k) * delta;
}

void InterpolerTableau(float fk[], float xk[], unsigned int nbK,
                       float xp[], unsigned int nbP, float fp[])
{
    // nbK = n+1 (nombre de points fk)
    if (nbK < 2) {
        for (unsigned int p = 0; p < nbP; ++p) fp[p] = 0.0f;
        cout << "Erreur: nbK insuffisant pour interpolation" << endl;
        return;
    }

    float x0 = xk[0];
    float xn = xk[nbK - 1];

    for (unsigned int p = 0; p < nbP; ++p)
    {
        float x = xp[p];
        if (x < x0 || x > xn)
        {
            cout << "Warning: xp hors intervalle [" << x0 << "," << xn << "], fp mis a 0" << endl;
            fp[p] = 0.0f;
            continue;
        }
        // trouver k tel que xk[k] <= x <= xk[k+1]
        unsigned int k = 0;
        while (k + 1 < nbK && xk[k+1] < x) ++k;
        // si x == xk[k], on prend fk[k]
        if (x == xk[k]) { fp[p] = fk[k]; continue; }
        // sinon interpolation entre k et k+1
        if (k + 1 < nbK)
        {
            float t = (x - xk[k]) / (xk[k+1] - xk[k]);
            fp[p] = fk[k] + t * (fk[k+1] - fk[k]);
        }
        else
        {
            fp[p] = fk[k];
        }
    }
}

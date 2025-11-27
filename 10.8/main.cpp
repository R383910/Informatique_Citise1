#include <iostream>
using namespace std;
#include "interpolation.h"

int main()
{
    const unsigned int n = 4; // exemple : 4 -> 5 points fk[0..4]
    float fk[100] = {0.0f, 1.0f, 4.0f, 9.0f, 16.0f};
    float xk[100];
    RemplirAbscisses(xk, 0.0f, 1.0f, n); // x0=0, delta=1

    float xp[3] = {0.5f, 2.2f, 4.0f};
    float fp[3];

    InterpolerTableau(fk, xk, n+1, xp, 3, fp);

    for (unsigned int i = 0; i < 3; ++i) cout << "fp["<<i<<"] = " << fp[i] << endl;

    return 0;
}

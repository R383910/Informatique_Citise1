#include <iostream>
#include "fonction.h"

using namespace std;

void AfficheReels(const float* p_f, unsigned int nb) {
    for (int i = 0; i < nb; ++i) {
        cout<<p_f[i]<<endl;
    }
}
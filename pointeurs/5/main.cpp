#include <iostream>

#include "fonction.h"
#include "pointeurs/4/fonction.h"

using namespace std;

int main() {
    unsigned int nb_float;
    float* mem = nullptr;

    cout<<"entrer un nombre de reel a saisir : ";
    cin>>nb_float;

    mem = CreateReels(nb_float);

    for (int i = 0; i < nb_float; ++i) {
        cout<<"entrer un reel : ";
        cin>>mem[i];
    }

    AfficheReels(mem,nb_float);

    delete mem;

    return 0;
}

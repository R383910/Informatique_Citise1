#include <iostream>
using namespace std;
#include "carreMagique.h"

int main()
{
    int carre[3][3] = {
        {8,1,6},
        {3,5,7},
        {4,9,2}
    };

    cout << "Est magique ? " << EstMagique(carre) << endl;
    return 0;
}

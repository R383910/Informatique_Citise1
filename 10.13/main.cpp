#include <iostream>
using namespace std;
#include "tableauxLib.h"

int main()
{
    float t1[100] = {1.0f, 2.0f, 3.0f};
    float t2[100] = {0};
    CopierReels(t1, t2, 3);
    AfficherReels(t2, 3);
    cout << "Egaux? " << ComparerReels(t1, t2, 3) << endl;
    return 0;
}

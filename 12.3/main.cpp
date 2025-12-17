#include <iostream>
using namespace std;

#include "fonction.h"

int main()
{
    coureur c;

    c = SaisieCoureur();
    AfficheCoureur(c);

    return 0;
}
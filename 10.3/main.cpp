#include <iostream>
using namespace std;

#include "statistiquesTableau.h"

int main()
{
    float tab[7] = {3.5f, 4.0f, 2.5f, 6.0f, 0, 0, 0};

    CalculerStatistiques(tab);

    for (unsigned int i = 0; i < 7; i++)
    {
        cout << "tab[" << i << "] = " << tab[i] << endl;
    }

    return 0;
}
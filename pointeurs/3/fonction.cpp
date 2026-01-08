#include <iostream>
#include "fonction.h"

using namespace std;

void Echange(float* a, float* b) {
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
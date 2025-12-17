#include <iostream>
using namespace std;

#include "fonction.h"

point3d SaisiePoint3D() {
    point3d point;

    cout<<"entrer la valeur de x : ";
    cin>>point.x;

    cout<<"entrer la valeur de y : ";
    cin>>point.y;

    cout<<"entrer la valeur de z : ";
    cin>>point.z;

    return point;
}

vector3d CalculVector3D(point3d a, point3d b) {
    vector3d vector;

    vector.x = b.x - a.x;
    vector.y = b.y - a.y;
    vector.z = b.z - a.z;

    return vector;
}

void AfficherVecteur3D(vector3d vector) {
    cout << "x : " << vector.x << endl;
    cout << "y : " << vector.y << endl;
    cout << "z : " << vector.z << endl;
}

float Norme(vector3d vector) {
    float norme;

    norme = sqrt(pow(vector.x,2) + pow(vector.y,2) + pow(vector.z,2));

    return  norme;
}

bool Orthogonal(vector3d vector1, vector3d vector2) {
    bool orto;
    float scal;

    scal = vector1.x * vector2.x + vector1.y * vector2.y + vector1.z * vector2.z;

    return scal;
}
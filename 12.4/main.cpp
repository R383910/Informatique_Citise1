#include <iostream>
using namespace std;

#include "fonction.h"

int main()
{
    point3d m,n;
    vector3d om,on,mn;
    bool ortho;
    float norme;

    m = SaisiePoint3D();
    n = SaisiePoint3D();

    om = CalculVector3D(ORIGINE, m);
    on = CalculVector3D(ORIGINE, n);
    mn = CalculVector3D(m,n);

    AfficherVecteur3D(om);
    AfficherVecteur3D(on);
    AfficherVecteur3D(mn);

    norme = Norme(om);
    cout<<"La norme de om est : "<< norme;

    ortho = Orthogonal(om,on);
    cout<<"OM et ON sont orthogonal est : "<<ortho;

    return 0;
}
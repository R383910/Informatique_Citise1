struct point3d {
    float x;
    float y;
    float z;
};

struct vector3d {
    float x;
    float y;
    float z;
};

const point3d ORIGINE = {0,0,0};

point3d SaisiePoint3D();

vector3d CalculVector3D(point3d a, point3d b);

void AfficherVecteur3D(vector3d vector);

float Norme(vector3d vector);

bool Orthogonal(vector3d vector, vector3d vector2);
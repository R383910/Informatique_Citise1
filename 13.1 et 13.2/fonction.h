struct Complexe {
    float re;
    float im;
};

Complexe Saisir_complexe(void);

void Affiche_complexe(Complexe z);

Complexe Conjugue(Complexe z);

Complexe Oppose(Complexe z);

Complexe Inverse(Complexe z);

float Module(Complexe z);

float Argument(Complexe z);

Complexe Add_complexe(Complexe z1, Complexe z2);

Complexe Mult_complexe(Complexe z1, Complexe z2);

Complexe Div_complexe(Complexe z1, Complexe z2);

Complexe Calculer_H(Complexe p);
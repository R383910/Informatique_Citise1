// R : Remplir un tableau d'abscisses xk espacées régulièrement à partir de x0 (pas : 1 réel)
// E : x0 : 1 réel, delta : 1 réel, n : 1 entier
// E/S : xk : 1 tableau de 100 réel
// S : vide
void RemplirAbscisses(float xk[], float x0, float delta, unsigned int n);

// R : Interpoler linéairement : calculer fp à partir de fk et xp
// E : fk : 1 tableau de 100 réel, xk : 1 tableau de 100 réel, xp : 1 tableau de 100 réel, nbK : 1 entier, nbP : 1 entier
// E/S : fp : 1 tableau de 100 réel
// S : vide
void InterpolerTableau(float fk[], float xk[], unsigned int nbK,
                       float xp[], unsigned int nbP, float fp[]);

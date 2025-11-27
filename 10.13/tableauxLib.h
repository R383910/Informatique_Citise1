// R : Saisir des éléments réels dans un tableau
// E : tailleMax : 1 entier
// E/S : tab : 1 tableau de 100 réel
// S : 1 entier (taille pratique)
int SaisieReels(unsigned int tailleMax, float tab[]);

// R : Afficher éléments d'un tableau réel
// E : tab : 1 tableau de 100 réel, taille : 1 entier
// E/S : aucun
// S : vide
void AfficherReels(float tab[], unsigned int taille);

// R : Copier tableau réel (taille donnée)
// E : tabSource : 1 tableau de 100 réel, taille : 1 entier
// E/S : tabDestination : 1 tableau de 100 réel
// S : vide
void CopierReels(float tabSource[], float tabDestination[], unsigned int taille);

// R : Comparer deux tableaux réels
// E : tab1 : 1 tableau de 100 réel, tab2 : 1 tableau de 100 réel, taille : 1 entier
// E/S : aucun
// S : 1 bool
bool ComparerReels(float tab1[], float tab2[], unsigned int taille);

// R : Copier les éléments d'un tableau dans un autre
// E : tabSource : 1 tableau de 100 entier, taille : 1 entier
// E/S : tabDestination : 1 tableau de 100 entier
// S : vide
void CopierTableau(int tabSource[], int tabDestination[], unsigned int taille);

// R : Afficher les éléments d'un tableau sous la forme {e1,e2,...,en}
// E : tab : 1 tableau de 100 entier, taille : 1 entier
// E/S : aucun
// S : vide
void AfficherTableau(int tab[], unsigned int taille);

// R : Tester si deux tableaux sont identiques
// E : tab1 : 1 tableau de 100 entier, tab2 : 1 tableau de 100 entier, taille : 1 entier
// E/S : aucun
// S : 1 bool
bool SontIdentiques(int tab1[], int tab2[], unsigned int taille);

// R : Calculer la moyenne des éléments d'un tableau
// E : tab : 1 tableau de 100 entier, taille : 1 entier
// E/S : aucun
// S : 1 réel
float CalculerMoyenne(int tab[], unsigned int taille);

// R : Remplacer les valeurs d'un tableau par sa somme cumulée
// E : tabSource : 1 tableau de 100 entier, taille : 1 entier
// E/S : tabCumul : 1 tableau de 100 entier
// S : vide
void SommeCumulee(int tabSource[], int tabCumul[], unsigned int taille);

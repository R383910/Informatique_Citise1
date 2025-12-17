struct coureur {
    char nom[100];
    unsigned int dossard;
    unsigned int distance;
    float tempsRef;
    float tempsReal;
};

coureur SaisieCoureur();

void AfficheCoureur(coureur c);
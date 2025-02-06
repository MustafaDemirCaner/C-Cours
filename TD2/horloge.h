#ifndef HORLOGE_H
#define HORLOGE_H

typedef struct horloge {
    int heures;
    int minutes;
    int secondes;
} Horloge;

Horloge creerHorloge(int heures, int minutes, int secondes);
void afficherHorloge(Horloge h);
Horloge ajouterHeures(Horloge h, int heures);
Horloge ajouterSecondes(Horloge h, int secondes);
Horloge ajouterTemps(Horloge h, int heures, int minutes, int secondes);
Horloge ajouterHorloges(Horloge h1, Horloge h2);
int comparerHorloges(Horloge h1, Horloge h2);

#endif
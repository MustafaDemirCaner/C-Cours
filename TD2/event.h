#ifndef EVENT_H
#define EVENT_H

#include "horloge.h"
#include "alerte.h"

typedef struct event {
    int id;
    Alerte alerte;
    Horloge horloge;
} Evenement;

void afficherEvenement(Evenement e);
creerEvenement(int id, Alerte alerte, int heures, int minutes, int secondes);
int estEvenementPlusGrave(Evenement e1, Evenement e2);
int estPlusRecent(Evenement e1, Evenement e2);

#endif
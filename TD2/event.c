#include <stdio.h>

#include "event.h"

void afficherEvenement(Evenement e) {
    printf("%d", e.id);
    afficherAlerte(e.alerte);
    printf(" ");
    afficherHorloge(e.horloge);
}

creerEvenement(int id, Alerte alerte, int heures, int minutes, int secondes) {
    Evenement e = {id, alerte, creerHorloge(heures, minutes, secondes)};
    return e;
}

int estEvenementPlusGrave(Evenement e1, Evenement e2) {
    return estAlertePlusGrave(e1.alerte, e2.alerte);
}

int estPlusRecent(Evenement e1, Evenement e2) {
    return comparerHorloges(e1.horloge, e2.horloge) == 1;

}
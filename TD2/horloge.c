#include <stdio.h>
#include "horloge.h"

Horloge creerHorloge(int heures, int minutes, int secondes) {
    Horloge h = {heures, minutes, secondes};
    return h;
}

void afficherHorloge(Horloge h) {
    printf("%02d:%02d:%02d", h.heures, h.minutes, h.secondes);
}

Horloge ajouterHeures(Horloge h, int heures) {
    h.heures = (h.heures + heures) % 24;
    return h;
}

Horloge ajouterMinutes(Horloge h, int minutes) {
    h.minutes = h.minutes + minutes;
    int heures = h.minutes / 60;
    h.minutes %= 60;
    if (h.minutes < 0) {
        h.minutes += 60;
        heures--;
    }
    h = ajouterHeures(h, heures);
    return h;
}   

Horloge ajouterSecondes(Horloge h, int secondes) {
    h.secondes = h.secondes + secondes;
    int minutes = h.secondes / 60;
    h.secondes %= 60;
    if (h.secondes < 0) {
        h.secondes += 60;
        minutes--;
    }  
    return h;
}

Horloge ajouterTemps(Horloge h, int heures, int minutes, int secondes) {
    h = ajouterHeures(h, heures);
    h = ajouterMinutes(h, minutes);
    h = ajouterSecondes(h, secondes);
    return h;
}

Horloge ajouterHorloges(Horloge h1, Horloge h2) {
    return h1 = ajouterTemps(h1, h2.heures, h2.minutes, h2.secondes);
}

int comparerHorloges(Horloge h1, Horloge h2) {
    if (h1.heures > h2.heures) return 1;
    else if (h1.heures < h2.heures) return -1;
    else if (h1.minutes > h2.minutes) return 1;
    else if (h1.minutes < h2.minutes) return -1;
    else if (h1.secondes > h2.secondes) return 1;
    else if (h1.secondes < h2.secondes) return -1;
    else return 0;
}
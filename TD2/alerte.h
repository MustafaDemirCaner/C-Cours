#ifndef ALERTE_H
#define ALERTE_H

typedef enum alerte {
    ALERTE_OK,
    ALERTE_WARNING,
    ALERTE_ERROR,
    ALERTE_CRITICAL,
    ALERTE_FATAL,
    ALERTE_UNKNOWN = -1
} Alerte;

void afficherAlerte(Alerte a);
int getNiveau(Alerte a);
int estAlertePlusGrave(Alerte a1, Alerte a2);


#endif


#include <stdio.h>
#include "alerte.h"

void afficherAlerte(Alerte a) {
    switch (a) {
        case ALERTE_OK:
            printf("ALERTE_OK");
            break;
        case ALERTE_WARNING:
            printf("ALERTE_WARNING");
            break;
        case ALERTE_UNKNOWN:
            printf("ALERTE_UNKNOWN");
            break;
        case ALERTE_FATAL:
            printf("ALERTE_FATAL");
            break;
        case ALERTE_ERROR:
            printf("ALERTE_ERROR");
            break;
        case ALERTE_CRITICAL:
            printf("ALLERTE_CRITICAL");
            break;
    }
}

int getNiveau(Alerte a) {
    return a;    
}

int estAlertePlusGrave(Alerte a1, Alerte a2) {
    return a1 > a2;
}
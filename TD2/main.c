#include <stdio.h>
#include <stdlib.h>

#include "event.h"

int main() {
    Evenement e = {1, ALERTE_FATAL, creerHorloge(16, 20, 42)};
    afficherEvenement(e);
    
    return 0;

}
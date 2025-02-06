#include <stdio.h>
#include <stdlib.h>
#include "fonctionTD1.h"

int main() {
    
    printf("addition: %d\n", addition(5,3));
    
    printf("carre: %d\n", carre(3));
    
    afficher_valeur(42);
    
    printf("\n");

    printf("celsiusToFahrenheit: %f\n", celsiusToFahrenheit(1));
    
    printf("fahrenheitToCelsius: %f\n", fahrenheitsToCelsius(42));
    
    float valeur;
    printf("Saisissez une temperature en celsius :\n");
    scanf("%f", &valeur);
    printf("%f degres celsius vaut %f degres fahrenheit", valeur, celsiusToFahrenheit(valeur));

    printf("Saisissez une temperature en fahrenheit :");
    scanf("%f", &valeur);
    printf("%f degres fahrenheit vaut %f degres celcuis\n", valeur, fahrenheitsToCelsius(valeur));
    
    printf("est_bissextile: %d\n", est_bissextile(2024));

    printf("nb_chiffres: %d\n", nb_chiffres(123456789));

    printf("somme_chiffres: %d\n", somme_chiffres(2025));

    printf("est_nombre_palindromiqu: %d\n", est_nombre_palindromique(33));

    printf("somme_diviseurs_propres: %d\n", somme_diviseurs_propres(6));
    
    printf("est_nombre_parfait: %d\n", est_nombre_parfait(6));

    printf("somme_carres_chiffres: %d\n", somme_carres_chiffres(123));
    
    printf("est_nombre_heureux: %d\n", est_nombre_heureux(19));

    return 0;
}
    
#include <stdio.h>
#include <stdlib.h>
#include "fonctionTD1.h"

int addition(int a, int b){
    return a + b;
}

int carre(int a){
    return a * a;
}

void afficher_valeur(int val){
    printf("La valeur en parametre est %d", val);
}

float celsiusToFahrenheit(float celsius){
    return (9.0/5.0) * celsius + 32;
}

float fahrenheitsToCelsius(float fahrenheit){
    return (5.0/9.0) + fahrenheit - 32;
}

int est_bissextile(int x){
    return (x % 4 == 0 && x % 100 != 0) || x % 400 == 0;        
}

int nb_chiffres(int x){
    int cpt = 0;
    while (x > 0){
        x /= 10;
        cpt++;
    }
    return cpt;
}

int somme_chiffres(int x){
    int res = 0;
    while (x > 0){
        res += x % 10;
        x /= 10;
    }
    return res;
}

int est_nombre_palindromique(int x){
    return x == nombre_mirroir(x);
}

int nombre_mirroir(int x){
    int res = 0;
    while (x > 0){
        res = res * 10 + x % 10;
        x /= 10;
    }
    return res;
}

int somme_diviseurs_propres(int x){
    int somme = 0;
    for (int i = 1; i < x; i++){
        if (x % i == 0){
            somme += i;
        }
    }
    return somme;
}

int est_nombre_parfait(int x) {
    return somme_diviseurs_propres(x) == x;
}

int somme_carres_chiffres(int x) {
    int res = 0;
    while (x > 0){
        int unite = x % 10;
        res += unite * unite;
        x /= 10;
    }
    return res;
}

int est_nombre_heureux(int x) {
    if (x == 1){
        return 1;
    } else if (x == 4){
        return 0;
    } else {
        return est_nombre_heureux(somme_carres_chiffres(x));
    }
}
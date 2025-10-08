// utils.c — Fonctions utilitaires pour l'affichage
#include <stdio.h>

void afficher_tableau(int *tab, int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

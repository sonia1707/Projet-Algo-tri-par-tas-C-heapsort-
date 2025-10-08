#include <stdio.h>
#include "build_heap.h"
#include "heapify.h"
#include "utils.h"
// Fonction principale pour construire le tas max
void build_heap(int *tab, int taille) {
    for (int i = taille / 2 - 1; i >= 0; i--) {
        heapify(tab, taille, i);
    }
}
// Fonction pour afficher l'état du tas
void printHeap(int *tab, int taille) {
    printf("État du tas: ");
    printArray(tab, taille);

    printf("Structure arbre:\n");
    for (int i = 0; i < taille; i++) {
        printf("Nœud %d", tab[i]);
        int gauche = 2 * i + 1;
        int droite = 2 * i + 2;

        if (gauche < taille) printf(" → G: %d", tab[gauche]);
        else printf(" → G: NULL");

        if (droite < taille) printf(", D: %d", tab[droite]);
        else printf(", D: NULL");

        printf("\n");
    }
}

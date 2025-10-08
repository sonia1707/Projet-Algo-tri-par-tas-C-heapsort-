#include <stdio.h>
#include "build_heap.h"
#include "heapify.h"
#include "utils.h"
<<<<<<< HEAD
// Fonction pour construire le tas max
void buildMaxHeap(int arr[], int n) {
    // Construction du tas max en partant du dernier nœud non-feuille
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}
// Fonction utilitaire pour afficher l'état du tas (bonus)
void printHeap(int arr[], int n) {
    printf("État du tas: ");
    printArray(arr, n);
// Affichage de la structure (simplifié)
    printf("Structure arbre:\n");
    for (int i = 0; i < n; i++) {
        printf("Nœud %d", arr[i]);
        int left = 2 * i + 1;
        int right = 2 * i + 2;
         if (left < n) printf(" → G: %d", arr[left]);
        else printf(" → G: NULL");
        if (right < n) printf(", D: %d", arr[right]);
        else printf(", D: NULL");
=======
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

>>>>>>> 138647673255686a4562d353d638dedd06ce258f
        printf("\n");
    }
}

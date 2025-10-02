#include "utils.h"
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
        printf("\n");
    }
}

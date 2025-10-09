#include <stdio.h>
#include "utils.h"
#include "heapsort.h"
#include "build_heap.h"
#include "heapify.h"
// Fonction principale de tri par tas
void heapsort(int arr[], int n) {
<<<<<<< HEAD
 // Étape 1 : Construction du tas max 
    buildMaxHeap(arr, n);
     printf("Après construction du tas max: ");
    printArray(arr, n);
// Étape 2 : Extraction des éléments un par un
    for (int i = n - 1; i > 0; i--) {
 // Déplacer la racine (max) à la fin
        swap(&arr[0], &arr[i]);
 // Appeler heapify sur le tas réduit
        heapify(arr, i, 0);
// Affichage intermédiaire (bonus)
=======
    // Étape 1 : Construction du tas max
    build_heap(arr, n);
    printf("Après construction du tas max: ");
    printArray(arr, n);
    // Étape 2 : Extraction des éléments un par un
    for (int i = n - 1; i > 0; i--) {
        // Déplacer la racine (max) à la fin
        swap(&arr[0], &arr[i]);

        // Appeler heapify sur le tas réduit
        heapify(arr, i, 0);

        // Affichage intermédiaire (bonus)
>>>>>>> 138647673255686a4562d353d638dedd06ce258f
        printf("Après extraction %d: ", n - i);
        printArray(arr, n);
    }
}

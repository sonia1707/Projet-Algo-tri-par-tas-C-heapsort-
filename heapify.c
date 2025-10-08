#include "utils.h"
#include "heapify.h"
// Fonction pour rétablir la propriété du tas (heapify)
void heapify(int arr[], int n, int i) {
    int largest = i;          // Racine
    int left = 2 * i + 1;     // Enfant gauche
    int right = 2 * i + 2;    // Enfant droit

#include "utils.h"
#include "heapify.h"
// Fonction pour rétablir la propriété du tas (heapify)
void heapify(int arr[], int n, int i) {
    int largest = i;          // Racine
    int left = 2 * i + 1;     // Enfant gauche
    int right = 2 * i + 2;    // Enfant droit
// Si l'enfant gauche est plus grand que la racine
    if (left < n && arr[left] > arr[largest])
        largest = left;
 // Si l'enfant droit est plus grand que le plus grand actuel
    if (right < n && arr[right] > arr[largest])
        largest = right;
// Si le plus grand n'est pas la racine
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest); // Récursivement
    }
}

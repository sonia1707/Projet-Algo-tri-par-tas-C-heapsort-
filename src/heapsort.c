#include <stdio.h>

// Fonction pour transformer un sous-arbre en tas max
void heapify(int arr[], int n, int i) {
    int largest = i;           // Racine du sous-arbre
    int left = 2 * i + 1;      // Fils gauche
    int right = 2 * i + 2;     // Fils droit

    // Si le fils gauche est plus grand que la racine
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Si le fils droit est plus grand que le plus grand actuel
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Si la racine n'est pas le plus grand, on échange
    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        // Appel récursif pour rétablir le tas plus bas
        heapify(arr, n, largest);
    }
}

// Fonction principale du tri par tas
void heapsort(int arr[], int n) {
    // Construction du tas max
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extraction des éléments un par un
    for (int i = n - 1; i > 0; i--) {
        // Échange entre la racine et le dernier élément
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Réduction du tas et réorganisation
        heapify(arr, i, 0);
    }
}

// Fonction utilitaire pour afficher le tableau
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Point d’entrée du programme
int main() {
    int arr[] = {4, 10, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Tableau original : ");
    printArray(arr, n);

    heapsort(arr, n);

    printf("Tableau trié : ");
    printArray(arr, n);

    return 0;
}

#include  <stdio.h>
#include "utils.h"
#include "heapsort.h"
// Fonction pour tester avec différents jeux de données
void runTests() {
    printf("=== TESTS DU TRI PAR TAS ===\n\n");

// Test 1 : Tableau normal
    int arr1[] = {12, 11, 13, 5, 6, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
     printf("Test 1 - Tableau normal:\n");
    printf("Original: ");
    printArray(arr1, n1);
     heapsort(arr1, n1);
    printf("Résultat: ");
    printArray(arr1, n1);
    printf("Tri correct: %s\n\n", isSorted(arr1, n1) ? "OUI" : "NON");
    
// Test 2 : Tableau déjà trié
    int arr2[] = {1, 2, 3, 4, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
     printf("Test 2 - Tableau déjà trié:\n");
    printf("Original: ");
    printArray(arr2, n2);
     heapsort(arr2, n2);
    printf("Résultat: ");
    printArray(arr2, n2);
    printf("Tri correct: %s\n\n", isSorted(arr2, n2) ? "OUI" : "NON");
    
// Test 3 : Tableau inversé
    int arr3[] = {5, 4, 3, 2, 1};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
     printf("Test 3 - Tableau inversé:\n");
    printf("Original: ");
    printArray(arr3, n3);
    heapsort(arr3, n3);
    printf("Résultat: ");
    printArray(arr3, n3);
    printf("Tri correct: %s\n\n", isSorted(arr3, n3) ? "OUI" : "NON");
}

// Programme principal
int main() {
    printf("========================================\n");
    printf("        TRI PAR TAS - GROUPE 5\n");
    printf("========================================\n\n");
    
// Exécuter les tests automatisés
    runTests();
    
// Test interactif
    printf("=== TEST INTERACTIF ===\n");
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
     printf("Tableau de démonstration:\n");
    printf("Original: ");
    printArray(arr, n);
    heapsort(arr, n);
    printf("Final: ");
    printArray(arr, n);
    printf("Tri validé: %s\n", isSorted(arr, n) ? "OUI" : "NON");
    
    return 0;  
}
   

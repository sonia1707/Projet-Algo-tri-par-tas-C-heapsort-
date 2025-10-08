#include <stdio.h>
#include "utils.h"
#include "heapsort.h"

int main() {
    int tableau[] = {4, 10, 3, 5, 1};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    printf("Tableau original : ");
    afficher_tableau(tableau, taille);

    heapsort(tableau, taille);

    printf("Tableau trié     : ");
    afficher_tableau(tableau, taille);

    return 0;
}

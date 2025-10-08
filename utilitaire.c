#include <stdio.h>

// Fonction auxiliaire pour maintenir la propriété de tas-max
void entasse(int tab[], int taille, int i) {
    int max_index = i;
    int gauche = 2 * i;
    int droite = 2 * i + 1;

    if (gauche <= taille && tab[gauche] > tab[max_index]) {
        max_index = gauche;
    }

    if (droite <= taille && tab[droite] > tab[max_index]) {
        max_index = droite;
    }

    if (max_index != i) {
        int temp = tab[i];
        tab[i] = tab[max_index];
        tab[max_index] = temp;
        entasse(tab, taille, max_index);
    }
}

// Construction du tas-max à partir d’un tableau désordonné
void construit(int tab[], int taille) {
    for (int i = taille / 2; i >= 1; i--) {
        entasse(tab, taille, i);
    }
}

// Tri par tas principal
void tri_par_tas(int tab[], int taille) {
    construit(tab, taille);

    for (int i = taille; i >= 2; i--) {
        int temp = tab[1];
        tab[1] = tab[i];
        tab[i] = temp;
        entasse(tab, i - 1, 1);
    }
}

// Exemple d’utilisation
int main() {
    int tab[] = {0, 8, 4, 6, 3, 1, 2, 5}; // tab[0] est fictif
    int taille = 7;

    tri_par_tas(tab, taille);

    printf("Tableau trie : ");
    for (int i = 1; i <= taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}


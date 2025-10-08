// heapify.c — Fonction de réorganisation du tas
void heapify(int *tab, int taille, int i) {
    int plus_grand = i;
    int gauche = 2 * i + 1;
    int droite = 2 * i + 2;

    if (gauche < taille && tab[gauche] > tab[plus_grand])
        plus_grand = gauche;
    if (droite < taille && tab[droite] > tab[plus_grand])
        plus_grand = droite;

    if (plus_grand != i) {
        int temp = tab[i];
        tab[i] = tab[plus_grand];
        tab[plus_grand] = temp;
        heapify(tab, taille, plus_grand);
    }
}

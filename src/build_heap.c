// build_heap.c — Construction du tas initial
#include "heapify.h"

void build_heap(int *tab, int taille) {
    for (int i = taille / 2 - 1; i >= 0; i--) {
        heapify(tab, taille, i);
    }
}

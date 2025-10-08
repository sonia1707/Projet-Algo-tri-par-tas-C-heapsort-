### 🧠 Algo-tri-par-tas-C-heapsort-
Implémentation du tri par tas (heapsort) en langage C et sans bibliothèque externe.
### Introduction:
"Pourquoi nous avons choisis le tri par tas ?"
"Comprendre un algorithme, c'est aussi comprendre comment on l'utilise"
### 🎯 Objectifs:
- Implémenter le tri par tas en C sans bibliothèque externe.
- Structurer le projet en modules clairs et réutilisables.
- Documenter le processus d’apprentissage.
## 🗂️ Structure du projet:

| Fichier         | Rôle                                 |
|-----------------|--------------------------------------|
| `main.c`         Point d’entrée du programme          |
| `heapify.c/h`   | Maintient la propriété du tas        |
| `build_heap.c/h`| Construit le tas initial             |
| `heapsort.c/h`  | Applique l’algorithme de tri         |
| `utils.c/h`     | Fonctions utilitaires                |
### ⚙️ Compilation:
Tester sous MSYS2 avec GCC
```bash
make // Attention aux erreurs de tabulation dans le Makefile
./heapsort
```
### 🔍 Explication de L’algorithme:
1- Construction du tas: consiste à transformer le tableau en un tas max
2- Tri: consiste à échanger le premier élément avec le dernier, réduire la taille du tas et réappliquer "heapify"

"On a eu du mal à comprendre pourquoi heapify est appelé en ordre inverse… jusqu’à ce que on a visualisé le tas comme un arbre binaire inversé"
### 🧗‍♂️ Difficultés rencontrées:


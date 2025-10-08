# Projet Algo — Tri par Tas (Heapsort)
Implémentation du tri par tas en Langage C, sans bibliothèque externe, dans le cadre d’un projet de groupe. Ce dépôt reflète notre démarche pédagogique et structuré.
## Introduction
 “Pourquoi avons-nous choisi le tri par tas ?”  
 “Comprendre un algorithme, c’est aussi comprendre comment on l’utilise.”
Le tri par tas est un algorithme de tri efficace basé sur une structure de données en arbre binaire. Il nous a permis de mieux comprendre la logique de priorisation et de manipulation de structures dynamiques.
## Objectifs
- Implémenter le tri par tas en C sans bibliothèque externe
- Structurer le projet en modules clairs et réutilisables
- Documenter le processus d’apprentissage et les choix algorithmiques
- Travailler en équipe avec une répartition des rôles
- Styliser le projet avec une documentation claire et visuellement engageante

##  Structure du projet

| Fichier         | Rôle                                 |
|-----------------|--------------------------------------|
| `main.c`        | Point d’entrée du programme          |
| `heapify.c/h`   | Maintient la propriété du tas        |
| `build_heap.c/h`| Construit le tas initial             |
| `heapsort.c/h`  | Applique l’algorithme de tri         |
| `utils.c/h`     | Fonctions utilitaires                |
| `.vscode/`      | Configuration VS Code (tasks, IntelliSense) |
| `Makefile`      | Compilation automatisée              |
| `README.md`     | Documentation du projet              |

##  Compilation
Testé sous **MSYS2 avec GCC**  
```bash
cd /chemin-du-projet/nom-du-dossier-du-projet
make  # Les erreurs de tabulation dans le Makefile peuvent compliquer la compilation du projet
./heapsort
```
### Membres du groupe:
1- Letticia: 
main.c : point d’entrée du programme, gestion des appels
2- Sonia:
build_heap.c et build_heap.h: construction du tas initial
3- Mélanie:
utils.c et utils.h: fonctions utilitaires et support technique
4- Romance:
heapify.c et heapify.h: maintien de la propriété du tas
5- Larysa:
heapsort.c et heapsort.h: implémentation du tri
  


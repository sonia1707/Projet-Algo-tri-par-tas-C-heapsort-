# Makefile pour le projet Heapsort — signé SJ-Mitsu

CC = gcc
CFLAGS = -Wall -Wextra
SRC = src/main.c src/utils.c src/heapify.c src/build_heap.c src/heapsort.c
EXEC = heapsort

all:
    $(CC) $(CFLAGS) $(SRC) -o $(EXEC)
    @echo "✅ Compilation réussie ! Exécutable : $(EXEC)"

clean:
    rm -f $(EXEC)
    @echo "🧹 Nettoyage terminé — signé SJ-Mitsu"

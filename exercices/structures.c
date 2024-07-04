#include <stdio.h>
#include <string.h>

#define MAX_LIVRES 3
#define MAX_TITRE 100
#define MAX_AUTEUR 50

struct Livre {
    char titre[MAX_TITRE];
    char auteur[MAX_AUTEUR];
    int pages;
};

int main() {
    struct Livre livres[MAX_LIVRES];
    int i;

    for (i = 0; i < MAX_LIVRES; i++) {
        printf("Entrez les informations pour le livre %d:\n", i + 1);

        printf("Titre: ");
        fgets(livres[i].titre, MAX_TITRE, stdin);
        // Enlever le caractère de nouvelle ligne s'il est présent
        livres[i].titre[strcspn(livres[i].titre, "\n")] = '\0';

        printf("Auteur: ");
        fgets(livres[i].auteur, MAX_AUTEUR, stdin);
        // Enlever le caractère de nouvelle ligne s'il est présent
        livres[i].auteur[strcspn(livres[i].auteur, "\n")] = '\0';

        printf("Nombre de pages: ");
        scanf("%d", &livres[i].pages);
        getchar(); // Pour consommer le caractère de nouvelle ligne laissé par scanf
    }

    printf("\nInformations des livres saisis:\n");
    for (i = 0; i < MAX_LIVRES; i++) {
        printf("Livre %d:\n", i + 1);
        printf("Titre: %s\n", livres[i].titre);
        printf("Auteur: %s\n", livres[i].auteur);
        printf("Nombre de pages: %d\n", livres[i].pages);
    }

    return 0;
}

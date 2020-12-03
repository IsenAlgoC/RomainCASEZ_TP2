#include <stdlib.h>
#include <stdio.h>

int main() {
    unsigned int largeur, hauteur, profondeur, test, grand, moyen, petit;
    do {
        do {
            printf("Enter la largeur, la largeur doit etre comprise entre 0 et 150 cm.");
            scanf_s("%d", &largeur);
        } while (largeur > 150 | largeur < 1);
        do {
            printf("Enter la hauteur, la hauteur doit etre comprise entre 0 et 150 cm.");
            scanf_s("%d", &hauteur);
        } while (hauteur > 150 | hauteur < 1);
        do {
            printf("Enter la profondeur, la profondeur doit etre comprise entre 0 et 150 cm.");
            scanf_s("%d", &profondeur);
        } while (profondeur > 150 | profondeur < 1);

        if (largeur > hauteur & largeur > profondeur) {
            grand = largeur;
            if (hauteur > profondeur) {
                moyen = hauteur;
                petit = profondeur;
            }
            else {
                moyen = profondeur;
                petit = hauteur;
            };
        }
        else if (hauteur > largeur & hauteur > profondeur) {
            grand = hauteur;
            if (largeur > profondeur) {
                moyen = largeur;
                petit = profondeur;
            }
            else {
                moyen = profondeur;
                petit = largeur;
            };
        }
        else {
            grand = profondeur;
            if (largeur > hauteur) {
                moyen = largeur;
                petit = hauteur;
            }
            else {
                moyen = hauteur;
                petit = largeur;
            }
        }
        if (grand < 56 & moyen < 36 & petit < 26) {
            printf("\n VALIDE");
        }
        else {
            printf("NON Valide");
        };
        printf("\nSi vous voulez essayer une autre valise taper 1 si vous avez fini taper 0  ");
        scanf_s("%d", &test);
    } while (test != 0);
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int nombreMystere = rand(), nombreEntre = 0, compteur = 0;
    const int MAX = 100, MIN = 1;

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    do
    {
        printf("Quel est le nombre ? ");
        scanf_s("%d", &nombreEntre);

        if (nombreMystere > nombreEntre) { //Comparaison du nombre mystere avec le nombre entre
            compteur += 1;
            printf("Trop petit !\n");
        }
        else if (nombreMystere < nombreEntre) {
            compteur += 1;
            printf("Trop grand !\n");
        }
        else
            printf("Bien joue vous avez devine le bon nombre\nVous avez effectue %d tentatives, votre score est de %d", compteur, compteur);
    } while (nombreEntre != nombreMystere);

    return 0;
}
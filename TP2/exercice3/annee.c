#include <stdio.h>
#include <stdlib.h>


/********** programme composé de if et else ***********/
int main() {
    int anneebis = 0;
    printf("Entrez une annee comprise entre 0 et 10000 (entier naturel!): ");
    scanf_s("%d", &anneebis);
    if (anneebis % 4 == 0) {
        if (anneebis % 100 == 0) {
            if (anneebis % 400 == 0)
                printf("\n%d est une annee bissextile!\n", anneebis);
            else
                printf("\n%d n'est pas une annee bissextile!\n", anneebis);
        }
        else
            printf("\n%d est une annee bissextile!\n", anneebis);
    }
    else
        printf("\n%d pas une annee bissextile!\n", anneebis);

    /************ programme a base d'une seule expression logique **************/

    int anneebi = 0;
    printf("Entrez une annee comprise entre 0 et 10000 (entier naturel!): ");
    scanf_s("%d", &anneebi);
    if ((anneebi % 4 == anneebi % 400 == anneebi % 100 == 0) | (anneebi % 4 == 0 & anneebi % 100 != 0)) {
        printf("\n%d est une annee bissextile!\n", anneebi);
    }
    else
        printf("\n%d n'est pas une annee bissextile!\n", anneebi);
}

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include<math.h>


//*********BOUCLE FOR****************//
int main() {
	int somme = 0, n = 1, i = 0;
	for (i = 0; i <= 100; i++) {
		somme += i;
	}
	printf("\nLa somme totale vaut %d et n est egal a %d", somme, (i - 1));


	//*********BOUCLE WHILE*************//
	int somme2 = 0, j = 0;
	while (j <= 100) {
		somme2 += j;
		j += 1;
	}
	printf("\nLa somme totale vaut %d et n est egal a %d", somme2, (j - 1));


	//********DO WHILE****************//
	int somme3 = 0, k = 2;
	do {
		somme3 += k;
		k += 1;
	} while (k <= 100);
	printf("\nLa somme totale vaut %d et n est egal a %d", somme3, (k - 1));

	/***********  Valeur max Unsigned Short Int ***********/

	printf("\nla valeur maximum est: %d", USHRT_MAX);

	/* La valeur maximum pour n est donc 361 si l'on ne souhaite pas dépasser cette valeur... */
	int max = 361;

	//***BOUCLE WHILE POUR SORTIR EN CAS DE DEPASSEMENT****////
	int a = 0, m = 1, somme4 = 0, valmax = 0;
	printf("\nEntrer la valeur de n pour la boucle WHILE :");
	scanf_s("%d", &m);
	while ((a < m) & (USHRT_MAX - somme4) >= a) {
		a += 1;
		somme4 += a;
		valmax++;
	}
	printf("\nLa valeur de n est:%d\La valeur maximum de n pour ne pas depasser la valeur est:%d\nLa somme des n nombres entiers vaut %d(sans depasser la valaur max)\n", m, valmax, somme4);
}



#include <stdio.h>
#include <stdlib.h>
#include <time.h>  //clock_t, clock(), CLOCKS_PER_SEC
#include <unistd.h>  //sleep()
#include "fonction.h"

int main(int argc, char *argv[]) {
	int n, choix_1;
	short n1;
	double temps_exec;
	clock_t debut_ck;
	clock_t fin_ck;
	time_t debut_t;
	time_t fin_t;
	printf("\n\n\tSaisir un entier positif : \t");
	scanf("%d", &n);
	if (n > 0){
		do{
			printf("\n\nMenu 1 : *************************************" );
			printf("\n\t 0 - Saisir à nouveau un entier positif :");
			printf("\n\t 1 - Calculer le factoriel récursif et non terminal");
			printf("\n\t 2 - Calculer le factoriel récursif et terminal");
			printf("\n\t 3 - Calculer le factoriel itératif");
			printf("\n\t 4 - Calculer le fibonacci récursif et non terminal");
			printf("\n\t 5 - Calculer le fibonacci récursif et terminal");
			printf("\n\t 6 - Calculer le fibonacci itératif");
			printf("\n\t 7 - Tester clock()");
			printf("\n\t 8 - Tester time()");
			printf("\n\t 9 - Terminer ! ");
			printf("\n\t ********************************************* \n\t ");
			scanf("%d", &choix_1);
			switch(choix_1){
				case 0 :
					do{
						printf("\n\tSaisir un entier positif : \t");
						scanf("%d", &n);
					} while (n < 0);
					break;
				case 1 :
					temps_exec = 0.0;
					debut_ck = clock();
					printf("\t\tLe factoriel de %d vaut : %llu", n1, FactRecNT(n),"\n");
					fin_ck = clock();
					temps_exec += (double)(fin_ck - debut_ck) * 1e-6;
  					printf("\n\t\tTemps d'exécution : %f seconds\n", temps_exec);
					break;
				case 2 :
					temps_exec = 0.0;
					debut_ck = clock();
					printf("\t\tLe factoriel de %d vaut : %llu", n, FactRecT(n,1),"\n");
					fin_ck = clock();
					temps_exec += (double)(fin_ck - debut_ck) * 1e-6;
  					printf("\n\t\tTemps d'exécution : %f seconds\n", temps_exec);
					break;
				case 3 :
					temps_exec = 0.0;
					debut_ck = clock();
					printf("\n\t\tLe factoriel de %d vaut : %llu", n, FactIter(n),"\n");
					fin_ck = clock();
					temps_exec += (double)(fin_ck - debut_ck) * 1e-6;
  					printf("\n\t\tTemps d'exécution : %f seconds\n", temps_exec);
					break;
				case 4 :
					temps_exec = 0.0;
					debut_ck = clock();
					printf("\t\tLe Fibonacci de %d vaut : %llu", n, FiboRecNT(n),"\n");
					fin_ck = clock();
					temps_exec += (double)(fin_ck - debut_ck) * 1e-6;
  					printf("\n\t\tTemps d'exécution : %f seconds\n", temps_exec);
					break;
				case 5 :
					temps_exec = 0.0;
					debut_ck = clock();
					printf("\t\tLe Fibonacci de %d vaut : %llu", n, FiboRecT(n, 0, 1),"\n");
					fin_ck = clock();
					temps_exec += (double)(fin_ck - debut_ck) * 1e-6;
  					printf("\n\t\tTemps d'exécution : %f seconds\n", temps_exec);
					break;
				case 6 :
					temps_exec = 0.0;
					debut_ck = clock();
					printf("\t\tLe Fibonacci de %d vaut : %llu", n, FiboIter(n),"\n");
					fin_ck = clock();
					temps_exec += (double)(fin_ck - debut_ck) * 1e-6;
  					printf("\n\t\tTemps d'exécution : %f seconds\n", temps_exec);
					break;
				case 7 :
					CalculTempsM1(n);
					break;
				case 8 :
					CalculTempsM2(n);
					break;
				case 9 : break;
				default :  printf("\nMenu principal : Choix non conforme!\n");
			}
		} while (choix_1 != 9);
	}
	return 0;
}

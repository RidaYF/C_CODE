
#include "fonction.h"
#include <stdio.h>
#include <time.h>
#include <unistd.h>

/* Calcule et retourne de marnière récursive et non terminale le factoriel d’un entier saisi */
unsigned long long int FactRecNT(int n) {
	if (n == 0)
		return 1;
	else
		return (n * FactRecNT(n-1));
}

/* Calcule et retourne de marnière récursive et terminale le factoriel d’un entier saisi,
	* r vaut 1 */
unsigned long long int FactRecT(int n, unsigned long long int r){
	if (n == 0)
		return r;
	else
		return (FactRecT(n-1, n*r));
}

/* Calcule et retourne de marnière itérative le factoriel d’un entier saisi */
unsigned long long int FactIter(int n){
	unsigned long long int r = 1 ;
	while ( n > 0 ) {
		r = n*r;
		n = n-1;
	}
	return r ;
}

/* Calcule et retourne de marnière récursive et non terminale le nieme terme de la suite Fibonacci */
unsigned long long int FiboRecNT(int n){
    if (n<=1)
        return n;
    else
        return FiboRecNT(n-2)+FiboRecNT(n-1);
}

/* Calcule et retourne de marnière récursive et terminale le nieme terme de la suite Fibonacci.
	*  x vaut 0 et y vaut 1*/
unsigned long long int FiboRecT(int n, int x, int y){
	if (n == 0)
		return x;
	else
		return FiboRecT(n - 1, x + y, x);
}

/* Calcule et retourne de marnière itérative le nieme terme de la suite Fibonacci */
unsigned long long int FiboIter(int n)
{
	int i;
	unsigned long long int res,f1,f2;
    if (n<=1)
        res=n;
    else{
        f2=0;
        f1=1;
        for (i=2; i<=n; i++){
            res=f2+f1;
            f2=f1;
            f1=res;
        }
    }
    return res;
}

/* Tester la fonction clock() */
void CalculTempsM1(int s) {
	double temps_ecoule = 0.0;
    clock_t debut = clock();
    sleep(s);
    clock_t fin = clock();
    temps_ecoule += (double)(fin - debut) / CLOCKS_PER_SEC;
    printf("\t\tTemps écoulé calculé par clock(): %f seconds\n", temps_ecoule);
}

/* Tester la fonction time() */
void CalculTempsM2(int s) {
	time_t debut = time(NULL);
    sleep(s);
    time_t fin = time(NULL);
    printf("\t\tTemps écoulé calculé par time(): %f seconds\n", (double)(fin - debut));
}


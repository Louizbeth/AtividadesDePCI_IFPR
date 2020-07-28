#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    system("clear");
    int valorA, valorB, valorC;
    double delta, sqrtdelta, raizA, raizB, valorI;
	
	printf("Digite os coeficientes (a) (b) e (c): ");
    scanf("%i %i %i", &valorA, &valorB, &valorC);
    delta = pow(valorB,2) - 4*valorA*valorC;
    sqrtdelta = sqrt(delta);
    valorI = sqrt(-1);

    if(valorA!=0) {
        if(delta>=0) {
	        raizA = (-valorB + sqrtdelta) / (2*valorA);
            raizB = (-valorB - sqrtdelta) / (2*valorA);
        }
        else {
            raizA = (-valorB + valorI*sqrt(-delta) )/(2*valorA);
            raizB = (-valorB - valorI*sqrt(-delta) )/(2*valorA);
        }
        printf("Primeira raiz: %.1lf\n", raizA);
	    printf("Primeira raiz: %.1lf\n", raizB);
    }
    else {
        printf("Não é uma esquação de segundo grau.");
    }
    //Ana Carolina Veiga da Silva TADS20
    return 0;
}
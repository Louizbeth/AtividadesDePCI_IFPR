#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    system("clear");
    int valorA, valorB, valorC;
    double potencia, raiz, seno;
    printf("Digite os valores de (a) (b) e (c): ");
    scanf("%i %i %i", &valorA, &valorB, &valorC);
    //seno(a^b + √c)
    potencia = pow(valorA, valorB);
    raiz = sqrt(valorC);
    seno = sin(potencia + raiz);
    printf("- Resultado = %.2lf \n", seno);
    
    //Ana Carolina Veiga da Silva TADS20
    return 0;
}

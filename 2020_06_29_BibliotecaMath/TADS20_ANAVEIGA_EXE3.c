#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
    system("clear");
    int valorA, valorB;
    double potencia, raiz, tangente;
    printf("Digite os valores de (a) e (b): ");
    scanf("%i %i", &valorA, &valorB);
    //tangente(√a^b)
    potencia = pow(valorA, valorB);
    raiz = sqrt(potencia);
    tangente = tan(raiz);
    
    printf("- Resultado = %.2lf \n", tangente);

    //Ana Carolina Veiga da Silva TADS20
    return 0;
}

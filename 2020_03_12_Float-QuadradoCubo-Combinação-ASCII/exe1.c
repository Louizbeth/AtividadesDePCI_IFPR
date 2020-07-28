#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    
    int v1,v2,v3,v4,v5;
    float d1,d2,d3;
    printf("Digite o primeiro valor: ");
    scanf("%i", &v1);
    printf("Digite o segundo  valor: ");
    scanf("%i", &v2);
    printf("Digite o terceiro valor: ");
    scanf("%i", &v3);
    printf("Digite o quarto   valor: ");
    scanf("%i", &v4);
    printf("Digite o quinto   valor: ");
    scanf("%i", &v5);

    d1 = (float) v1/v5;
    d2 = (float) v2/v4;
    d3 = (float) v3/(d1+d2);

    system("clear");
    printf("Primeiro valor digitado: %i \n",v1);
    printf("Segundo  valor digitado: %i \n",v2);
    printf("Terceiro valor digitado: %i \n",v3);
    printf("Quarto   valor digitado: %i \n",v4);
    printf("Quinto   valor digitado: %i \n",v5);
    printf("Primeira divisão: %.5f \n",d1);
    printf("Segunda  divisão: %.2f \n",d2);
    printf("Terceira divisão: %.5f \n",d3);
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int v1,v2,v3,v4;

    printf("Digite o primeiro valor:        ");
    scanf("%i", &v1);
    printf("Digite o segundo  valor:        ");
    scanf("%i", &v2);
    printf("Digite o terceiro valor:        ");
    scanf("%i", &v3);
    printf("Digite o quarto   valor:        ");
    scanf("%i", &v4);

    v1 = v1%2;
    v2 = v2%2;
    v3 = v3%2;
    v4 = v4%2;
    printf("\nNúmero binário:                 %i %i %i %i\n",v1,v2,v3,v4);
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int v1,v2,v3;

    printf("Digite o primeiro valor:\t");
    scanf("%i", &v1);
    v1 = v1 * v1;
    printf("O valor ao quadrado:\t\t%i\n\n",v1);

    printf("Digite o segundo valor:\t\t");
    scanf("%i", &v2);
    v2 = v2 * v2 * v2;
    printf("O valor ao cubo:\t\t%i\n\n", v2);

    printf("Digite o terceiro valor:\t");
    scanf("%i", &v3);
    v3 = (v1 + v2)/v3;
    printf("Cálculo final:\t\t\t%i\n\n",v3);
    
}    
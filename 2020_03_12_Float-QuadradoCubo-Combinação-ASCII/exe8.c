#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int pn,sn,tn;

    printf("Digite o primeiro caractere:    ");
    scanf("%i",&pn);
    printf("Digite o segundo  caractere:    ");
    scanf("%i",&sn);
    printf("Digite o terceiro caractere:    ");
    scanf("%i",&tn);

    printf("Código ASCII de %i:     %c\n",pn,pn);
    printf("Código ASCII de %i:     %c\n",sn,sn);
    printf("Código ASCII de %i:     %c\n",tn,tn);
}
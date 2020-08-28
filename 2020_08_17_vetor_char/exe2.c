#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio_ext.h>
int main(){
    int vetor[10],posicao=0,cont=0;
    system("clear");
    printf("════════════════════════════════════════════════════════\n");

    for(posicao=0;posicao<10;posicao++){
        printf("Digite o valor da posicao %i: ",posicao);
        scanf("%i",&vetor[posicao]);
    }
    printf("════════════════════════════════════════════════════════\n");
    printf("\n════════════════════════════════════════════════════════\n");

    printf("Posição:\tValor:\t\tHistograma:     \n");
    
    for(posicao=0;posicao<10;posicao++){
        printf("%i\t\t%i\t\t",posicao,vetor[posicao]);
        for(cont=0;cont<vetor[posicao];cont++){
        printf("*");
        }
        printf("\n");
    }
    printf("════════════════════════════════════════════════════════\n");

    //Ana Carolina Veiga da Silva - TADS20
    return 0;
}
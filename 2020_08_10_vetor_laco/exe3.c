#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COR_ROXO		printf("\33[35m");
#define COR_BRANCO 		printf("\33[37m");

int main(){
    int vetor[4],posicao,soma,media;

    srand(time(NULL));
    system("clear");
    printf("═════════════════════════════\n");
    COR_ROXO;
    printf("Vetor aleatório: ");
    COR_BRANCO;
    for(posicao = 0;posicao<4;posicao++){
        vetor[posicao] = rand()%89+10;
        printf("%i ",vetor[posicao]);
    }
    for(soma=0,posicao=0;posicao<4;posicao++){
        soma = vetor[posicao] + soma;
    }
    printf("\nSoma: %i\n",soma);
    media = soma/posicao;
    printf("Média: %i\n",media);
    printf("═════════════════════════════\n");
    //Ana Carolina Veiga da Silva - TADS20
    return 0;
}
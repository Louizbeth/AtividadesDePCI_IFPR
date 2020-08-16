#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COR_ROXO		printf("\33[35m");
#define COR_BRANCO 		printf("\33[37m");

int main(){
    int vetor[12],posicao,contador;

    srand(time(NULL));
    system("clear");
    printf("═════════════════════════════════════════════════════\n");
    COR_ROXO;
    printf("Vetor aleatório: ");
    COR_BRANCO;
    for(posicao = 0;posicao<12;posicao++){
        vetor[posicao] = rand()%40+10;
        printf("%i ",vetor[posicao]);
    }

    COR_ROXO;
    printf("\nQuantidade de números entre 20 e 40: ");
    COR_BRANCO;
    for(posicao = 0,contador = 0;posicao<12;posicao++){
        if(vetor[posicao] >=20 && vetor[posicao]<=40){
            contador++;
        }
    }
    printf("%i",contador);

    COR_ROXO;
    printf("\nNúmeros pares: ");
    COR_BRANCO;
    for(posicao = 0;posicao<12;posicao++){
        if(vetor[posicao]%2==0){
            printf("%i ",vetor[posicao]);
        }
    }

    COR_ROXO;
    printf("\nQuantidade de números maiores que 35: ");
    COR_BRANCO;
    for(posicao = 0,contador = 0;posicao<12;contador++,posicao++){
        if(vetor[posicao]>35){
            contador++;
        }
    }
    printf("%i",contador);
    printf("\n═════════════════════════════════════════════════════\n\n");

    //Ana Carolina Veiga da Silva - TADS20
    return 0;
}
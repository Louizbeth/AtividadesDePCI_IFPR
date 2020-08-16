#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COR_ROXO		printf("\33[35m");
#define COR_BRANCO 		printf("\33[37m");

int main(){
    int vetor[12],posicao,maior,menor,posmenor,posmaior,legenda;

    srand(time(NULL));
    system("clear");
    printf("═════════════════════════════════════════════════════\n");
    COR_ROXO;
    printf("Vetor aleatório: ");
    COR_BRANCO;
    for(posicao = 0;posicao<12;posicao++){
        vetor[posicao] = rand()%89+10;
        printf("%i ",vetor[posicao]);
    }

     for(posicao=0,maior=10,menor=99;posicao<12;posicao++){
        if(vetor[posicao]>maior){
            maior = vetor[posicao];
            posmaior = posicao;
        }
        if(vetor[posicao]<menor){
            menor = vetor[posicao];
            posmenor = posicao;
        }
    }
    COR_ROXO;
    printf("\nMaior valor:");
    COR_BRANCO; 
    printf(" %i\n",maior);
    COR_ROXO;
    printf("Posição:");
    COR_BRANCO;
    legenda = posmaior+1;
    printf(" %i (%iº número)\n\n",posmaior,legenda);
    COR_ROXO;
    printf("Menor valor:");
    COR_BRANCO;
    printf(" %i\n",menor);
    COR_ROXO;
    printf("Posição:");
    COR_BRANCO;
    legenda = posmenor+1;
    printf(" %i (%iº número)\n",posmenor,legenda);
    printf("═════════════════════════════════════════════════════\n");
    
    //Ana Carolina Veiga da Silva - TADS20
    return 0;
}
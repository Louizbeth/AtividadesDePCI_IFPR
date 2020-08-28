#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio_ext.h>
int main(){
    int vetor[12],num,numpos,posicao,contador,randinter,intervalomin,intervalomax;
    srand(time(NULL));
    system("clear");
    printf("════════════════════════════════════════════════════════\n");
    printf("Digite o intervalo: ");
    scanf("%i %i",&intervalomin,&intervalomax);
    printf("Digite um número a ser procurado: ");
    scanf("%i",&num);

    randinter = intervalomax-intervalomin;
    numpos = ' ';

    printf("\nVetores: ");
    for(posicao = 0;posicao<10;posicao++){
        vetor[posicao] = rand()%randinter+intervalomin;
        printf("%i ",vetor[posicao]);
        if(vetor[posicao]==num){
            numpos = posicao;
            
        }
    }

    if(numpos!=' '){
    printf("\nValor encontrado na posição: %i\n\n",numpos);
    }
    else{
        printf("\nValor não encontrado!\n");
    }
    printf("════════════════════════════════════════════════════════\n");

    //Ana Carolina Veiga da Silva - TADS20
    return 0;
}
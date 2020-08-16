#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#define COR_ROXO		printf("\33[35m");
#define COR_BRANCO 		printf("\33[37m");

int main(){
    char vetorproduto[4];
    int vetorpreco[4],posicao,contador;
    system("clear");
    printf("══════════════════════════════════════════════════════\n");
    for(posicao=0;posicao<4;posicao++){
        COR_ROXO;
        printf ("Produto/Preco: ");
        COR_BRANCO;
        __fpurge(stdin);
        scanf("%c %i",&vetorproduto[posicao],&vetorpreco[posicao]);
    }
    COR_ROXO;
    printf("Quantidade de produtos com preço inferior à R$60,00: ");
    for(contador=0,posicao=0;posicao<4;posicao++){
        if(vetorpreco[posicao]<60){
            contador++;
        }
    }
    COR_BRANCO;
    printf("%i",contador);
    
    COR_ROXO;
    printf("\nProdutos com preço entre R$40,00 à R$100,00: ");
    for(posicao=0;posicao<4;posicao++){
        if(vetorpreco[posicao]>=40 && vetorpreco[posicao]<=100){
            COR_BRANCO;
            printf("%c ",vetorproduto[posicao]);
        }
    }
    printf("\n══════════════════════════════════════════════════════\n\n");

//Ana Carolina Veiga da Silva - TADS20
    return 0;
}
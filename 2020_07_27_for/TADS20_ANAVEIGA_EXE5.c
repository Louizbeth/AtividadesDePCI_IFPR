#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int linha,coluna,quauser,resposta;
    
    //printf
        printf("\e[0;31m");
        printf("\n══════════════════════════════════════════════════════════\n");
        printf("\e[0m");
    printf("Digite um valor inteiro para o tamanho do quadrado: ");
    scanf("%i",&quauser);
    printf("\n");

    for(coluna=0;coluna<quauser;coluna++){
        for(linha = 0;linha<quauser;linha++){
        
            printf("* ");
        }
        printf("\n");
    }
    //printf
        printf("\e[0;31m");
        printf("\n══════════════════════════════════════════════════════════\n");
        printf("\e[0m");
        
    //Deseja Realizar outra operação?
        printf("\e[0;31m");
        printf("\n══════════════════════════════════════════════════════════\n");
        printf("\e[0m");
        printf("  Deseja realizar outra operação?\n");
        printf("  1-SIM\n");
        printf("  2-NÃO\n");
        printf("\e[0;31m");
        printf("══════════════════════════════════════════════════════════\n\n");
        printf("\e[0m");
        scanf("%i",&resposta);
    
    
        if(resposta == 1){
            return main();
        }
        else{
            return 0;
        }
    //Ana Carolina Veiga da Silva - TADS20
}
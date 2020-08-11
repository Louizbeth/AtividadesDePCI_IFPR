#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int quantfinal,quantmovel,valum,valdois,valanterior,resposta;
    
    //printf
        printf("\e[0;31m");
        printf("\n══════════════════════════════════════════════════════════\n");
        printf("\e[0m");
    printf(" Digite um valor inteiro: ");
        scanf("%i",&quantfinal);
        printf("\n Série de Fibonacci (%i): ",quantfinal);

    valum = 1;
    valanterior = 0;

    for(quantmovel = 0;quantmovel<quantfinal;quantmovel++){
        valdois = valum + valanterior;
        valum = valanterior;
        valanterior = valdois;
        printf("%i ",valdois);
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
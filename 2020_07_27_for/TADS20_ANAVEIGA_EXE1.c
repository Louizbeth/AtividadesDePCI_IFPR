#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int valum,valdois,numeros,resposta;
    valum = 0;
    valdois = 1;
    //printf
        printf("\e[0;31m");
        printf("══════════════════════════════════\n");
        printf("\e[0m");
    printf("Digite um valor inteiro: ");
        scanf("%i",&valum);
        printf("\n");

    for(numeros = valum;valum>=2;valum--,numeros--){
        printf("%i ",numeros);
        valdois = valdois * valum;
        if(valum>=3){
            printf("x ");
        }
    }
    //printf
        printf("= %i \n",valdois);
        printf("\e[0;31m");
        printf("══════════════════════════════════\n");
        printf("\e[0m");
    
    //Deseja Realizar outra operação?
        printf("\e[0;31m");
        printf("\n══════════════════════════════════\n");
        printf("\e[0m");
        printf("  Deseja realizar outra operação?\n");
        printf("  1-SIM\n");
        printf("  2-NÃO\n");
        printf("\e[0;31m");
        printf("══════════════════════════════════\n\n");
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
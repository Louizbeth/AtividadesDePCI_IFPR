#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int valum,valdois,valinicial,soma,somando,resposta;

    //printf
        printf("\e[0;31m");
        printf("\n══════════════════════════════════════════════════════════\n");
        printf("\e[0m");
    printf(" Digite dois números inteiros: ");
    scanf("%i %i",&valum,&valdois);

    if(valum>valdois || valdois<valum || valum == valdois){
        printf("VALORES INCORRETOS");
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
    }
    printf("\n");
    
    for(valinicial = valum,soma = 0;valum<valdois;valum++){
        if(valum>valinicial && valum<valdois){
            if(valum%2 == 0){
                printf(" %i",valum);
                soma = soma + valum;
                
            }
            
        }
        
    }
    printf(" = %i",soma);
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
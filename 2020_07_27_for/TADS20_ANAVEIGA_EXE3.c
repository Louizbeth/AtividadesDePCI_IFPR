#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int numuser,soma,divisores,resposta;

    //printf
        printf("\e[0;31m");
        printf("══════════════════════════════════════════════════════════\n");
        printf("\e[0m");
    printf(" Digite um número: ");
    scanf("%i",&numuser);

    divisores = 1;
    soma = 0;

    for(;divisores<numuser;divisores++){
        if(numuser%divisores == 0){
            if(divisores == 1){
                printf(" [ %i ",divisores);
            }
            else{
                printf("+ %i ",divisores);
            }  
            soma = soma + divisores;
            
        }
    
    }
     
    if(soma==numuser){
        printf("] = %i / NÚMERO PERFEITO",soma); 
    }
    else{
        printf("] != %i / NÚMERO IMPERFEITO",soma);     
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
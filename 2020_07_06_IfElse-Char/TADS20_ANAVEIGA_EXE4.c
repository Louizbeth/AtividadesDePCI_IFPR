#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main() {
    system("clear");
    int resposta;
    char conceito;
    printf("Digite o conceito do aluno: ");
    __fpurge(stdin);
    scanf("%c", &conceito);

    if(conceito == 'A' || conceito == 'a'){
        printf("\n- APROVADO");
    }
    else if(conceito == 'B'|| conceito == 'b'){
        printf("\n- APROVADO\n");
    }
    else if(conceito == 'C'|| conceito == 'c'){
        printf("\n- APROVEITO\n");
    }
    else if(conceito == 'D'|| conceito == 'd'){
        printf("\n- REPROVADO\n");
    }
    else{
        printf("\n- CONCEITO INVÁLIDO\n");
    }

    printf("\n\nDeseja consultar outro conceito?\n1-SIM\n2-NÃO\n\n");
    scanf("%i",&resposta);
    if(resposta == 1){
        return main();
    }
    else{
        return 0;
    }
//Ana Carolina Veiga da Silva - TADS20
}
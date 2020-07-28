#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int opcao;
    while(opcao!=5){
        printf("\e[0;31m");
        printf(" С██ COINFFEE BANK ██Ɔ\n");
        printf(" ═════════════════════\n");
        printf("\e[0m");
        printf("   1- Saque\n");
        printf("   2- Depósito:\n");
        printf("   3- Transferência\n");
        printf("   4- Extrato\n");
        printf("   5- Sair\n");
        printf("\e[0;31m");
        printf("══════════════════════\n\n");
        printf("\e[0m");

        printf("- Opção selecionada: ");
        scanf("%i",&opcao);

        if(opcao==1){
            printf("- Você selecionou \"Saque\".\n\n");
        }
        else if(opcao==2){
            printf("- Você selecionou \"Depósito\".\n\n");
        }
        else if(opcao==3){
            printf("- Você selecionou \"Tranferência\".\n\n");
        }
        else if(opcao==4){
            printf("- Você selecionou \"Extrato\".\n\n");
        }
        else if(opcao==5){
            printf("- Você selecionou \"Sair\".\n\n");
        }
    }
    
    
    //Ana Carolina Veiga da Silva - TADS20
    return 0;
}
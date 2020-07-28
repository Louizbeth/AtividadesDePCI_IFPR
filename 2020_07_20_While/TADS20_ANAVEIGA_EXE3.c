
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main() {
    system("clear");    
    int resposta;
    char a,b;

    printf("Digite o primeiro caractere:    ");
    __fpurge(stdin);
    scanf("%c",&a);
    printf("Digite o segundo  caractere:    ");
    __fpurge(stdin);
    scanf("%c",&b);
    
    if(a>=97){
        a = a-32;
    }
    if(b>=97){
        b = b-32;
    }

    printf("\n-");
    while(a<=b){
        printf(" %c",a);
        a++;
    }
    
    printf("\e[0;31m");
    printf("\n\n══════════════════════════════════\n");
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
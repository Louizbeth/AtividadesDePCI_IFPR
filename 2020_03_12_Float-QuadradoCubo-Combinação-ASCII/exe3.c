#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main() {
    system("clear");
    char pc,sc,tc;

    printf("Digite o primeiro caractere:    ");
    __fpurge(stdin);
    scanf("%c",&pc);
    printf("Digite o segundo  caractere:    ");
    __fpurge(stdin);
    scanf("%c",&sc);
    printf("Digite o terceiro caractere:    ");
    __fpurge(stdin);
    scanf("%c",&tc);

    printf("\nPrimeira combinação:            %c%c%c\n",pc,sc,tc);
    printf("Segunda  combinação:            %c%c%c\n",pc,tc,sc);
    printf("Terceira combinação:            %c%c%c\n",tc,pc,sc);
    printf("Quarta   combinação:            %c%c%c\n",tc,sc,pc);
    printf("Quinta   combinação:            %c%c%c\n",sc,pc,tc);
    printf("Sexta    combinação:            %c%c%c\n",sc,tc,pc);
    
}
#include <stdio.h>
#include <stdlib.h>

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

    printf("Código ASCII de %c:     %i\n",pc,pc);
    printf("Código ASCII de %c:     %i\n",sc,sc);
    printf("Código ASCII de %c:     %i\n",tc,tc);
}
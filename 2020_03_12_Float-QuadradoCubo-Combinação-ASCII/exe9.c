#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    char pc,sc,tc,pmaiu,smaiu,tmaiu;
    
    printf("Digite o primeiro caractere:    ");
    __fpurge(stdin);
    scanf("%c",&pc);
    printf("Digite o segundo  caractere:    ");
    __fpurge(stdin);
    scanf("%c",&sc);
    printf("Digite o terceiro caractere:    ");
    __fpurge(stdin);
    scanf("%c",&tc);

    pmaiu = (int) pc;
    pmaiu = pmaiu-32;
    smaiu = (int) sc;
    smaiu = smaiu-32;
    tmaiu = (int) tc;
    tmaiu = tmaiu-32;
    printf("Maísculo de %c:     %c\n",pc,pmaiu);
    printf("Maísculo de %c:     %c\n",sc,smaiu);
    printf("Maísculo de %c:     %c\n",tc,tmaiu);

}
    
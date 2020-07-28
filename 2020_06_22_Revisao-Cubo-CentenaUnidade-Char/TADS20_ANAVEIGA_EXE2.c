#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main() {
    system("clear");
    char pc,sc,tc;
    printf("Digite três letras:");
    __fpurge(stdin);
    scanf("%c %c %c", &pc, &sc, &tc);
    
    printf("\n- Combinação 1 = %c%c%c\n",pc,sc,tc);
    printf("- Combinação 2 = %c%c%c\n",pc,tc,sc);
    printf("- Combinação 3 = %c%c%c\n",sc,pc,tc);
    printf("- Combinação 4 = %c%c%c\n",sc,tc,pc);
    printf("- Combinação 5 = %c%c%c\n",tc,pc,sc);
    printf("- Combinação 6 = %c%c%c\n",tc,sc,pc);
    
//Ana Carolina Veiga da Silva TADS20
}
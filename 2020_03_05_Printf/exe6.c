#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int v1,v2,v3,v4,v5;

    v3 = 6;
    v5 = 12;

    v1 = v3 + v5;
    v2 = v1 / v3;
    v3 = v5 + v2 + v2 + v2 + v2 + v2;
    v5 = v5 / v5;
    v4 = v3 + v2 + v5;

    printf(">Novo valor de v1 = %i \n", v1);
    printf(">Novo valor de v2 = %i \n", v2);
    printf(">Novo valor de v3 = %i \n", v3);
    printf(">Novo valor de v4 = %i \n", v4);
    printf(">Novo valor de v5 = %i \n", v5);

}
#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int v1,v2,v3=10,v4;
    //-*
    v1 = ((v3 * v3 * v3 * v3) - v3 * v3);
    v2 = (v3 * v3 * v3) - (v3 * v3) - (v3 * v3) - (v3 * v3) - (v3 * v3) - (v3 * v3) - (v3 * v3);
    v4 = (v3 * v3 * v3) - (v3 * v3) - (v3 * v3) - (v3 * v3) - (v3 * v3) - (v3 * v3) - (v3 * v3) - (v3 * v3) - (v3 * v3);
    v3 = v3 * v3;

    printf(">Novo valor de v1 = %i \n", v1);
    printf(">Novo valor de v2 = %i \n", v2);
    printf(">Novo valor de v3 = %i \n", v3);
    printf(">Novo valor de v4 = %i \n", v4);
}


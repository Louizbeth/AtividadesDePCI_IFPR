#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int v1,v2,v3,v4,v5,v6;
    v6 = -200;
    v5 = 10;
    v1 = v5+v6;
    v2 = v5-v6;
    v3 = v5*v6;
    v4 = v6/v5;
    printf(">Primeiro valor:(%i) \n",v5);
    printf(">Segundo valor: (%i) \n",v6);
    printf(">Soma           (%i + %i):\t\"%i\"\n",v5,v6,v1);
    printf(">Subtracao      (%i - %i):\t\"%i\"\n",v5,v6,v2);
    printf(">Multiplicacao  (%i * %i):\t\"%i\" \n",v5,v6,v3);
    printf(">Divisao        (%i / %i):\t\"%i\" \n",v5,v6,v4);

}

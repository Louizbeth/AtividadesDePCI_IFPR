#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int a,b,c,d;

    a = 5;
    d = 10;
    b = (a + a + d);
    c = (d*d/b);

    printf("> Primeiro valor:     %i \n",a);
    printf("> Segundo valor:      %i \n",d);
    printf("> Valor calculado 01: %i \n",b);
    printf("> Valor calculado 02: %i \n",c);

}

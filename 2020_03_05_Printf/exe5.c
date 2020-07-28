#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int a,b,c,d;

    a = 5;
    d = 10;
    b = (a + a + d);
    c = (d*d/b);
    a = a * c;
    d = d / d * b;

    printf("> Novo primeiro valor:     %i \n",a);
    printf("> Novo Segundo valor:      %i \n",d);

}    
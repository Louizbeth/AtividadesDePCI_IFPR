#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");

    int x, y;
    printf("Digite as coordenadas da bola: ");
    scanf("%i %i",&x, &y);

    if (x<0 || x>90) {
        printf("[FORA]");
    } 
    else if (y<0 || y>120) {
        printf("[FORA]");
    }
    else {
        printf("[DENTRO]");
    }

}
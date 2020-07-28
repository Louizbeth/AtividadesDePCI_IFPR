#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    float consumo, volume, distancia;
    
    printf("Média de consumo (km/l): ");
    scanf("%f", &consumo);
    printf("Gasolina no tanque (l): ");
    scanf("%f", &volume);
    distancia = consumo*volume;
    printf("- Distância percorrida = %.1f km\n", distancia);

//Ana Carolina Veiga da Silva TADS20
}
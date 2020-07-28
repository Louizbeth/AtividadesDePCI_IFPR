#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    float celsius, fahrenheit;
    printf("Digite a temperatura em Celsius (ºC): ");
    scanf("%f", &celsius);
    fahrenheit = ((9* celsius + 160)/5);
    printf("- Temperatura em Fahrenheit = %.1f \n", fahrenheit);

//Ana Carolina Veiga da Silva TADS20
}
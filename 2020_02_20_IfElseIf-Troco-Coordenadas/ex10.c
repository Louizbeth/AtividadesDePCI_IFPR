#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");

    int dia;
    printf("Digite o nº de um dia da semana: ");
    scanf("%i", &dia);

    if (dia==2) {
        printf("[Segunda-feira] \n");
    }

    else if (dia==3) {
        printf("[Terça-feira] \n");
    }
    else if (dia==4) {
        printf("[Quarta-feira] \n");
    }
    else if (dia==5) {
        printf("[Quinta-feira] \n");
    }
    else if (dia==6) {
        printf("[Sexta-feira] \n");
    }
    else {
        printf("[Dia inválido] \n");
    }
}
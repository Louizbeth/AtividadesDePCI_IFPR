#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int paris;
    // Paris;
    int flam;
    // Flamengo
    int cori;
    // Corinthians

    printf("Digite a pontuação dos times: Paris, Flamengo e Corinthians: "); 
    scanf("%i %i %i", &paris, &flam, &cori);

    if (paris>flam && paris>cori) {
        printf("[PARIS CAMPEÃO] \n");
    }
    else if (flam>paris && flam>cori) {
        printf("[FLAMENGO CAMPEÃO]");
    }
    else if (cori>flam && cori>paris) {
        printf("[CORINTHIANS CAMPEÃO]");
    }
    else {
        printf("[EMPATE]");
    }
    printf("%i - %i - %i \n", paris, flam, cori);
}
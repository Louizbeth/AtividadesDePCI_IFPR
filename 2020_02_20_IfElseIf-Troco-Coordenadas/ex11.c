#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    
    int pa;
    int pb;
    int pc;
    // pa = Pontos Alemanha
    // pb = Pontos Brasil
    // pc = Pontos Croacia

    printf("Digite a pontuação dos times: Alemanha, Brasil e Croacia: "); 
    scanf("%i %i %i", &pa, &pb, &pc);

    if (pa>pb && pa>pc) {
        printf("[ALEMÃ CAMPEÃ] \n");
    }
    else if (pb>pa && pb>pc) {
        printf("[BRASIL CAMPEÃO] \n");
    }
    else if (pc>pa && pc>pb) {
        printf("[CROACIA CAMPEÃ] \n");
    }
    else {
        printf("[EMPATE] \n");
    }
    printf("%i - %i - %i \n", pa, pb, pc);
}


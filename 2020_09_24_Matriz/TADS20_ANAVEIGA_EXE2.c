#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

#define LETRA 50
#define LINHA 5

int main() {
    char copia[LETRA];
    char nome[LINHA][LETRA];
    int letra,linha,linha2,a,b;

    system("clear");

    printf("═══════════════════════════════════════════\n");
    printf("Digite %i nome(s):\n", LINHA);
    for(linha=0; linha<LINHA; linha++) {
        printf("- ");
        __fpurge(stdin);
        gets(nome[linha]);
    }

    //Comparando e trocando posicoes
    for(a=0;a<LINHA;a++){
        for(b=0;b<LINHA;b++){
            if(strcmp(nome[a], nome[b]) < 0) {
                        strcpy(copia, nome[a]);
                        strcpy(nome[a], nome[b]);
                        strcpy(nome[b], copia);
                    
        	}
        }
    }

    printf("═══════════════════════════════════════════\n");
    printf("Nomes Ordenados:\n");
    for(linha=0; linha<LINHA; linha++) {
        printf("- %s\n", nome[linha]);
    }
    printf("═══════════════════════════════════════════\n");


    printf("\n\n");
    //Ana Carolina Veiga da Silva - TADS20
    return 0;
}
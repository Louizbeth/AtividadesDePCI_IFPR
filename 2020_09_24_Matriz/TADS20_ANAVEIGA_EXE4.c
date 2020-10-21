#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINHA 5
#define COLUNA 5

int main(){
	system("clear");

	int linha, coluna, soma = 0, maior;
	int matriz[LINHA][COLUNA];
	srand(time(NULL));

    printf("═════════════════════════\n");
	printf("Matriz aleatória gerada: \n");
	
	for(linha = 0; linha < LINHA; linha++){
		for(coluna = 0; coluna < COLUNA; coluna++){
			matriz[linha][coluna] = (rand()%40)+10;
		}
	}

	maior = matriz[0][0];

	for(linha = 0; linha < LINHA; linha++){
		for(coluna = 0; coluna < COLUNA; coluna++){
			if(matriz[linha] == matriz[coluna]){
				if(matriz[linha][coluna] > maior){
              	  maior = matriz[linha][coluna];
				}
			}
		}
	}
	for(linha = 0; linha < LINHA; linha++){
		for(coluna = 0; coluna < COLUNA; coluna++){
			if(matriz[linha] == matriz[coluna]){
				if(matriz[linha][coluna]==maior){
					printf("\33[32m");
					printf("%i ", matriz[linha][coluna]);
					printf("\e[0m");
				}
				else{
					printf("\33[33m");
					printf("%i ", matriz[linha][coluna]);
					printf("\e[0m");
				}
			}
			else{
				printf("%i ", matriz[linha][coluna]);
			}
		}
		printf("\n");
	}
	

	printf("\nMaior valor: %i\n", maior);
    printf("═════════════════════════\n");


	//Ana Carolina Veiga da Silva - TADS20
    return 0;
}
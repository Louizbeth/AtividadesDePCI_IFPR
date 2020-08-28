#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio_ext.h>
#define TAM 51

int main(){
    system("clear");
    char frase[TAM],letra;
    int a,cont;
    printf("═══════════════════════════════════════════════════════════════════════\n");
    printf("Digite uma frase: ");
    fflush(stdin);
    gets(frase);

    printf("Digite uma letra para ser procurada: ");
    scanf("%c",&letra);
    if(letra>=97 && letra<=122){
            letra = letra - 32;
        }
    
    for(a = 0,cont = 0; frase[a] != '\0'; a++){
        if(frase[a]>=97 && frase[a]<=122){
            frase[a] = frase[a] - 32;
        }
        if(frase[a] == letra){
            cont++;
        }
        
    }
    if(cont >1){
        printf("\nA letra <%c> foi encontrada <%i> vezes.",letra,cont);
    }
    else if(cont == 1){
        printf("\nA letra <%c> foi encontrada <%i> vez.",letra,cont);
    }
    else {
        printf("\nA letra <%c> não foi encontrada.",letra);
    }
    printf("\n═══════════════════════════════════════════════════════════════════════\n");

    //Ana Carolina Veiga da Silva - TADS20
    return 0;
}
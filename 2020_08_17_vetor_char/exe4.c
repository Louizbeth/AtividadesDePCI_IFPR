#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio_ext.h>
#define TAM 80

int main(){
    system("clear");
    int a,b,c,d;
    char nome[TAM];
    printf("════════════════════════════════════════════════════════════════════\n");

    printf("Digite um nome (ex: Albert Einstein): ");
    __fpurge(stdin);
    gets(nome);

    for(b=0; nome[b] != '\0'; b++){
        if(nome[b] == ' '){
            a = b;
        }
    }

    for(a = a+1; nome[a] != '\0'; a++){
        if(nome[a] >= 97 && nome[a] <= 122){
            printf("%c", nome[a]-32);
        }
        else {
            printf("%c", nome[a]);
        }
    }
    printf(", ");
    
    for(b = 0;nome[b] != ' ';b++){
        printf("%c", nome[b]);
        d = b;
    }

    printf(" ");

    for(b=0; nome[b] != '\0'; b++){
        if(nome[b] == ' '){
            a = b;
        }
    }

    for(b = d+2; b < a ; b++){
        if(nome[b] >= 65 && nome[b] <= 90){
           printf("%c. ", nome[b]);
        }
    }
    printf("\n════════════════════════════════════════════════════════════════════\n");

    //Ana Carolina Veiga da Silva - TADS20
    return 0;
}

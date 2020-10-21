#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "acvs.h"
#define TAM 6
#define LETRAS 18
#define TIME 20

int main()
{
    srand(time(NULL));
    system("clear");

    int MATRIZ[TAM][TAM], ARROBAS[TAM][TAM];
    char vetorChar[18];
    int guardar[4];
    int randLinha[2], randColuna[2];
    int jogada[2];
    int linha, coluna, linha2, coluna2;
    int contador, randChar;
    int pl, pc, fim, acertos = 0, quantjogada, segundos;
    char tecla;

    //matriz zerada
    for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
            MATRIZ[linha][coluna] = 0;
        }
    }
    //matriz arrobas
    for (linha = 0; linha < TAM; linha++)
    {
        for (coluna = 0; coluna < TAM; coluna++)
        {
            ARROBAS[linha][coluna] = '@';
        }
    }

    //vetor de char's zerado
    for (coluna = 0; coluna < LETRAS; coluna++)
    {
        vetorChar[coluna] = 0;
    }

    //vetor de char's aleatórios
    for (coluna = 0; coluna < LETRAS; coluna++)
    {
        do
        {
            contador = 0;
            randChar = 65 + rand() % 26;
            for (coluna2 = 0; coluna2 < LETRAS; coluna2++)
            {
                if (vetorChar[coluna2] == randChar)
                {
                    contador = 1;
                }
            }
        } while (contador == 1);
        vetorChar[coluna] = randChar;
    }

    //posicoes aleatorias
    contador = 0;
    do
    {
        do
        {
            randLinha[0] = rand() % 6;
            randColuna[0] = rand() % 6;
            randLinha[1] = rand() % 6;
            randColuna[1] = rand() % 6;
        } while ((MATRIZ[randLinha[0]][randColuna[0]] != 0 || MATRIZ[randLinha[1]][randColuna[1]] != 0) || (randLinha[0] == randLinha[1] && randColuna[0] == randColuna[1]));
        MATRIZ[randLinha[0]][randColuna[0]] = vetorChar[contador];
        MATRIZ[randLinha[1]][randColuna[1]] = vetorChar[contador];
        contador++;
    } while (contador < 18);

    //tabuleiro
    COR_LARANJA
    for (contador = TIME; contador >= 0; contador--)
    {
        system("clear");
        COR_VERMELHO
        printf(" _____________________________________\n");
        printf("│  _________________________________  │\n");
        printf("│ │                                 │ │\n");
        printf("│ │  ");
        COR_LARANJA
        printf("       ▄▀▀▀▄▄▄▄▄▄▄▀▀▀▄       ");
        COR_VERMELHO
        printf("  │ │\n│ │  ");
        COR_LARANJA
        printf("       █▒▒░░░░░░░░░▒▒█       ");
        COR_VERMELHO
        printf("  │ │\n│ │          ");
        COR_LARANJA
        printf("█░░█░░░░░█░░█");
        COR_VERMELHO
        printf("          │ │\n│ │       ");
        COR_LARANJA
        printf("▄▄  █░░░▀█▀░░░█  ▄▄");
        COR_VERMELHO
        printf("       │ │\n│ │      ");
        COR_LARANJA
        printf("█░░█ ▀▄░░░░░░░▄▀ █░░█");
        COR_VERMELHO
        printf("      │ │\n");
        printf("│ │      █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█      │ │\n");
        printf("│ │      █░░");
        COR_LARANJA
        printf("🄹 🄾 🄶 🄾");
        COR_VERMELHO
        printf(" ░░");
        COR_LARANJA
        printf("🄳 🄰");
        COR_VERMELHO
        printf(" ░░░█      │ │\n");
        printf("│ │      █░░");
        COR_LARANJA
        printf("🄼 🄴 🄼 🄾 🅁 🄸 🄰 ");
        COR_VERMELHO
        printf("░░░█      │ │\n");
        printf("│ │      █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█      │ │\n");
        printf("│ │                                 │ │\n");
        printf("│ │                                 │ │\n│ │     ");
        for (linha = 0; linha < TAM; linha++)
        {
            if (linha >= 1)
            {
                printf("    │ │\n│ │                                 │ │\n│ │     ");
            }
            for (coluna = 0; coluna < TAM; coluna++)
            {
                COR_LARANJA
                printf("[%c] ", MATRIZ[linha][coluna]);
                COR_VERMELHO
            }
        }
        printf("    │ │\n│ │_________________________________│ │\n");
        printf("│ │                                 │ │\n");
        printf("│ │           ");
        if (contador < 10)
        {
            COR_LARANJA
            printf("%i segundo(s)          ", contador);
        }
        if (contador >= 10)
        {
            COR_LARANJA
            printf("%i segundo(s)         ", contador);
        }

        COR_VERMELHO
        printf("│ │\n");
        printf("│ │_________________________________│ │\n");
        printf("|_____________________________________|\n");
        fflush(stdout);
        sleep(1);
    }
    COR_BRANCO
    printf("\n");

    //jogo e navegacao
    fim = pl = pc = 0;
    acertos = 0;
    quantjogada = 0;
    while (fim == 0)
    {
        contador = 0;
        jogada[0] = ' ';
        jogada[1] = ' ';
        do
        {
            system("clear");
            COR_VERMELHO
            printf(" _____________________________________\n");
            printf("│  _________________________________  │\n");
            printf("│ │                                 │ │\n");
            printf("│ │  ");
            COR_LARANJA
            printf("       ▄▀▀▀▄▄▄▄▄▄▄▀▀▀▄       ");
            COR_VERMELHO
            printf("  │ │\n│ │  ");
            COR_LARANJA
            printf("       █▒▒░░░░░░░░░▒▒█       ");
            COR_VERMELHO
            printf("  │ │\n│ │          ");
            COR_LARANJA
            printf("█░░█░░░░░█░░█");
            COR_VERMELHO
            printf("          │ │\n│ │       ");
            COR_LARANJA
            printf("▄▄  █░░░▀█▀░░░█  ▄▄");
            COR_VERMELHO
            printf("       │ │\n│ │      ");
            COR_LARANJA
            printf("█░░█ ▀▄░░░░░░░▄▀ █░░█");
            COR_VERMELHO
            printf("      │ │\n");
            printf("│ │      █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█      │ │\n");
            printf("│ │      █░░");
            COR_LARANJA
            printf("🄹 🄾 🄶 🄾");
            COR_VERMELHO
            printf(" ░░");
            COR_LARANJA
            printf("🄳 🄰");
            COR_VERMELHO
            printf(" ░░░█      │ │\n");
            printf("│ │      █░░");
            COR_LARANJA
            printf("🄼 🄴 🄼 🄾 🅁 🄸 🄰 ");
            COR_VERMELHO
            printf("░░░█      │ │\n");
            printf("│ │      █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█      │ │\n");
            printf("│ │                                 │ │\n");
            printf("│ │                                 │ │\n│ │     ");
            for (linha = 0; linha < TAM; linha++)
            {
                if (linha >= 1)
                {
                    printf("    │ │\n│ │                                 │ │\n│ │     ");
                }
                for (coluna = 0; coluna < TAM; coluna++)
                {
                    if (linha == pl && coluna == pc)
                    {
                        COR_LARANJA
                        printf("[_] ");
                        COR_VERMELHO
                    }
                    else
                    {
                        COR_LARANJA
                        //printf dos arrobas
                        printf("[%c] ", ARROBAS[linha][coluna]);
                        COR_VERMELHO
                    }
                }
            }
            COR_VERMELHO
            printf("    │ │\n│ │_________________________________│ │\n");
            printf("│ │                                 │ │\n");
            printf("│ │          ");

            if (acertos < 10 && quantjogada < 10)
            {
                COR_LARANJA
                printf("Acertos: %i ", acertos);
                COR_VERMELHO
                printf("|");
                COR_LARANJA
                printf(" %i         ", quantjogada);
            }
            else if (acertos < 10 && quantjogada >= 10 && quantjogada < 100)
            {
                COR_LARANJA
                printf("Acertos: %i ", acertos);
                COR_VERMELHO
                printf("|");
                COR_LARANJA
                printf(" %i        ", quantjogada);
            }
            else if (acertos >= 10 && quantjogada >= 10 && quantjogada < 100)
            {
                COR_LARANJA
                printf("Acertos: %i ", acertos);
                COR_VERMELHO
                printf("|");
                COR_LARANJA
                printf(" %i       ", quantjogada);
            }
            else if (acertos < 10 && quantjogada >= 100)
            {
                COR_LARANJA
                printf("Acertos: %i ", acertos);
                COR_VERMELHO
                printf("|");
                COR_LARANJA
                printf(" %i       ", quantjogada);
            }
            else if (acertos >= 10 && quantjogada >= 100)
            {
                COR_LARANJA
                printf("Acertos: %i ", acertos);
                COR_VERMELHO
                printf("|");
                COR_LARANJA
                printf(" %i      ", quantjogada);
            }

            COR_VERMELHO
            printf("│ │\n");

            COR_VERMELHO
            printf("│ │_________________________________│ │\n");
            printf("|_____________________________________|\n");
            fflush(stdout);

            //captura da tecla
            tecla = getch();
            //tecla de navegacao
            if (tecla == 27)
            {
                tecla = getch();
                if (tecla == 91)
                {
                    tecla = getch();
                    // CIMA
                    if (tecla == 65)
                    {
                        if (pl > 0)
                            pl--;
                    }
                    // BAIXO
                    else if (tecla == 66)
                    {
                        if (pl < TAM - 1)
                            pl++;
                    }
                    // DIREITA
                    else if (tecla == 67)
                    {
                        if (pc < TAM - 1)
                            pc++;
                    }
                    // ESQUERDA
                    else if (tecla == 68)
                    {
                        if (pc > 0)
                            pc--;
                    }
                }
            }
            //jogada escolhida
            else if (tecla == ENTER)
            {
                //verificacao da jogada
                if (ARROBAS[pl][pc] == '@')
                {
                    if (contador == 0)
                    {
                        jogada[0] = MATRIZ[pl][pc];
                        ARROBAS[pl][pc] = MATRIZ[pl][pc];
                        guardar[0] = pl;
                        guardar[1] = pc;
                    }
                    else if (contador == 1)
                    {
                        jogada[1] = MATRIZ[pl][pc];
                        ARROBAS[pl][pc] = MATRIZ[pl][pc];
                        guardar[2] = pl;
                        guardar[3] = pc;
                    }
                    contador++;
                }
            }

        } while (contador < 2);

        printf("\n\n");
        system("clear");
        COR_LARANJA
        COR_VERMELHO
        printf(" _____________________________________\n");
        printf("│  _________________________________  │\n");
        printf("│ │                                 │ │\n");
        printf("│ │  ");
        COR_LARANJA
        printf("       ▄▀▀▀▄▄▄▄▄▄▄▀▀▀▄       ");
        COR_VERMELHO
        printf("  │ │\n│ │  ");
        COR_LARANJA
        printf("       █▒▒░░░░░░░░░▒▒█       ");
        COR_VERMELHO
        printf("  │ │\n│ │          ");
        COR_LARANJA
        printf("█░░█░░░░░█░░█");
        COR_VERMELHO
        printf("          │ │\n│ │       ");
        COR_LARANJA
        printf("▄▄  █░░░▀█▀░░░█  ▄▄");
        COR_VERMELHO
        printf("       │ │\n│ │      ");
        COR_LARANJA
        printf("█░░█ ▀▄░░░░░░░▄▀ █░░█");
        COR_VERMELHO
        printf("      │ │\n");
        printf("│ │      █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█      │ │\n");
        printf("│ │      █░░");
        COR_LARANJA
        printf("🄹 🄾 🄶 🄾");
        COR_VERMELHO
        printf(" ░░");
        COR_LARANJA
        printf("🄳 🄰");
        COR_VERMELHO
        printf(" ░░░█      │ │\n");
        printf("│ │      █░░");
        COR_LARANJA
        printf("🄼 🄴 🄼 🄾 🅁 🄸 🄰 ");
        COR_VERMELHO
        printf("░░░█      │ │\n");
        printf("│ │      █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█      │ │\n");
        printf("│ │                                 │ │\n");
        printf("│ │                                 │ │\n│ │     ");
        for (linha = 0; linha < TAM; linha++)
        {
            if (linha >= 1)
            {
                COR_VERMELHO
                printf("    │ │\n│ │                                 │ │\n│ │     ");
            }
            for (coluna = 0; coluna < TAM; coluna++)
            {

                COR_LARANJA
                //printf dos arrobas
                printf("[%c] ", ARROBAS[linha][coluna]);
            }
        }
        COR_VERMELHO
        printf("    │ │\n│ │_________________________________│ │\n");
        printf("│ │                                 │ │\n");
        printf("│ │          ");

        if (acertos < 10 && quantjogada < 10)
        {
            COR_LARANJA
            printf("Acertos: %i ", acertos);
            COR_VERMELHO
            printf("|");
            COR_LARANJA
            printf(" %i         ", quantjogada);
        }
        else if (acertos < 10 && quantjogada >= 10 && quantjogada < 100)
        {
            COR_LARANJA
            printf("Acertos: %i ", acertos);
            COR_VERMELHO
            printf("|");
            COR_LARANJA
            printf(" %i        ", quantjogada);
        }
        else if (acertos >= 10 && quantjogada >= 10 && quantjogada < 100)
        {
            COR_LARANJA
            printf("Acertos: %i ", acertos);
            COR_VERMELHO
            printf("|");
            COR_LARANJA
            printf(" %i       ", quantjogada);
        }
        else if (acertos < 10 && quantjogada >= 100)
        {
            COR_LARANJA
            printf("Acertos: %i ", acertos);
            COR_VERMELHO
            printf("|");
            COR_LARANJA
            printf(" %i       ", quantjogada);
        }
        else if (acertos >= 10 && quantjogada >= 100)
        {
            COR_LARANJA
            printf("Acertos: %i ", acertos);
            COR_VERMELHO
            printf("|");
            COR_LARANJA
            printf(" %i      ", quantjogada);
        }

        COR_VERMELHO
        printf("│ │\n");

        COR_VERMELHO
        printf("│ │_________________________________│ │\n");
        printf("|_____________________________________|\n");
        fflush(stdout);

        if (jogada[0] != ' ' && jogada[1] != ' ')
        {
            if (jogada[0] == jogada[1])
            {
                printf("\n           [A C E R T O U !]\n");
                sleep(2);
                acertos++;
                quantjogada++;
            }
            if (jogada[0] != jogada[1])
            {
                printf("\n              [E R R O U!]\n");
                sleep(2);
                pl = guardar[0];
                pc = guardar[1];
                ARROBAS[pl][pc] = '@';
                pl = guardar[2];
                pc = guardar[3];
                ARROBAS[pl][pc] = '@';
                quantjogada++;
            }
        }
        if (acertos == 18)
        {
            fim = 1;
        }
    }
    system("clear");
    segundos = 6;
    while (segundos != 0)
    {
        segundos--;
        system("clear");
        printf("\e[0;3%im", segundos);
        printf(" _____________________________________\n");
        printf("│  _________________________________  │\n");
        printf("│ │                                 │ │\n");
        printf("│ │         ▄▀▀▀▄▄▄▄▄▄▄▀▀▀▄         │ │\n");
        printf("│ │         █▒▒░░░░░░░░░▒▒█         │ │\n");
        printf("│ │          █░░█░░░░░█░░█          │ │\n");
        printf("│ │       ▄▄  █░░░▀█▀░░░█  ▄▄       │ │\n");
        printf("│ │      █░░█ ▀▄░░░░░░░▄▀ █░░█      │ │\n");
        printf("│ │      █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█      │ │\n");
        printf("│ │      █░░🄹 🄾 🄶 🄾 ░░🄳 🄰 ░░░█      │ │\n");
        printf("│ │      █░░🄼 🄴 🄼 🄾 🅁 🄸 🄰 ░░░█      │ │\n");
        printf("│ │      █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█      │ │\n");
        printf("│ │                                 │ │\n");
        printf("│ │                                 │ │\n");
        printf("│ │                                 │ │\n");
        printf("│ │                                 │ │\n");
        printf("│ │             FIM DE              │ │\n");
        printf("│ │              JOGO               │ │\n");
        printf("│ │                                 │ │\n");
        printf("│ │        Score: %i jogadas        │ │\n", quantjogada);
        printf("│ │                                 │ │\n");
        printf("│ │                                 │ │\n");
        printf("│ │                                 │ │\n");
        printf("│ │                                 │ │\n");
        printf("│ │                                 │ │\n");
        printf("│ │_________________________________│ │\n");
        printf("│ │                                 │ │\n");
        printf("│ │            Saindo em %i          │ │\n", segundos);
        printf("│ │_________________________________│ │\n");
        printf("|_____________________________________|\n");
        fflush(stdout);
        COR_BRANCO
        sleep(1);
        if (segundos == 1)
        {
            COR_VERMELHO
        }
        if (segundos == 2)
        {
            COR_VERDE
        }
        if (segundos == 3)
        {
            COR_LARANJA
        }
        if (segundos == 4)
        {
            COR_AZUL
        }
        if (segundos == 5)
        {
            COR_ROXO
        }
        if (segundos == 6)
        {
            COR_AGUA
        }
    }
    system("clear");
    return 0;
}
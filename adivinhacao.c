#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    // Imprimir uma mensagem de bem vindo ao jogo para o usuário

    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n          Bem vindo ao    \n");
    printf("     |_|_|nnnn nnnn|_|_|      Jogo de Adivinhação!\n");
    printf("    |" "  |  |_|  |"  " |                         \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    // Pegamos o tempo passado em segundos desde 01 de janeiro de 1970 e 
    // passamos ela como parametro para rand
    int temp = time(0);
    srand(temp);

    // Gera um número aleatorio usando como paramentro temp, mas esse numero
    // muito grande, então dividimos ele por 100 e guardandomos o resto
    int nun_grade = rand();
    int nun = nun_grade%100;
    
    // Criamos algumar variaveis contadoras
    int tentavivas = 1;
    int chute;
    double pontos = 1000;

    
    int rels = 0;
    int dificuldade;
    int nivel;

    // Pedimos uma escolha do nivel de dificuldade ao usuario
    printf("Escolha um nivel de dificuldade ente 1 a 3 sendo:\n");
    printf("1 - Facil\n");
    printf("2 - Media\n");
    printf("3 - Dificil\n");
    printf("Opção = ");
    scanf("%d", &dificuldade);

    // Definimos o numero maximo de tentativas com base na dificuldade
    switch (dificuldade){
        case 1:
            nivel = 20;
            break;
        case 2:
            nivel = 15;
            break;
        default:
            nivel = 6;
            break;
    }

    // Loop de tentativas do usuario
    for(int i = 1; i <= nivel; i++){
        // Imprime a quantidade de chutes atual do usuario e recebe um 
        // chute do usuario. Depois informa ao mesmo esse chute
        printf("\nTentativa %d\n", tentavivas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        // Caso chute for negativo não conta a tentativa
        if(chute<0){
            printf("Você não pode chutar números negativos!\n");
            i --;
            continue;
        }

        // Define algumas variaveis verificadoras, que pode ser 1 (verdadeiro) 
        // ou 0 (falso).
        rels = nun == chute;
        int dica = nun > chute;

        // Se usuario acertar o loop acaba, caso não ele da uma dica do numero
        if(rels){
            break;
        }
        else if(dica){
            printf("Não é esse, tente um número maior\n");
        }
        else{
            printf("Não é esse, tente um número menor\n");
        }

        // A cada tentativa errada tira uma quantidade de pontos do usuario 
        double perdidos = abs((chute - nun)) / (double)2;
        pontos -= perdidos;

        // Almente em 1 o contador de tentativas
        tentavivas++;        
    }

    if(rels){
        // Caso o usuario acerte exibe:
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\n\n");

        printf("\nParabéns você acertou!\n");
        printf("Foram %d tentativas\n", tentavivas);
        printf("Total de pontos: %.2f\n", pontos);   
    }
    else{
        // Caso acabe as tentativas e ele não acerte exibe:
        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");
        printf("Você perdeu, tente novamente!\n");
    }

    printf("\n=====Fim de jogo!=====\n");
}
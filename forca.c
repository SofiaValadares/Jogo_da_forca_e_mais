#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "headerFile_forca.h"

char palavra[TAMANHO_PALAVRA];
char forca[26];
int ind = 0;


int main(){
    abertura();
    escolher_palavra();

    do{
        imprimir_forca();
        chuta();
    
    }while(!ganho() && !perda());

    if(ganho()) {
        printf("\nParabéns, você ganhou!\n\n");

        printf("       ___________      \n");
        printf("      '._==_==_=_.'     \n");
        printf("      .-\\:      /-.    \n");
        printf("     | (|:.     |) |    \n");
        printf("      '-|:.     |-'     \n");
        printf("        \\::.    /      \n");
        printf("         '::. .'        \n");
        printf("           ) (          \n");
        printf("         _.' '._        \n");
        printf("        '-------'       \n\n");

    } else {
        printf("\nPuxa, você foi enforcado!\n");
        printf("A palavra era **%s**\n\n", palavra);

        printf("    _______________         \n");
        printf("   /               \\       \n"); 
        printf("  /                 \\      \n");
        printf("//                   \\/\\  \n");
        printf("\\|   XXXX     XXXX   | /   \n");
        printf(" |   XXXX     XXXX   |/     \n");
        printf(" |   XXX       XXX   |      \n");
        printf(" |                   |      \n");
        printf(" \\__      XXX      __/     \n");
        printf("   |\\     XXX     /|       \n");
        printf("   | |           | |        \n");
        printf("   | I I I I I I I |        \n");
        printf("   |  I I I I I I  |        \n");
        printf("   \\_             _/       \n");
        printf("     \\_         _/         \n");
        printf("       \\_______/           \n");
    }

    adicionar_palavra();
    
}

void abertura(){
    printf("/****************/\n");
    printf("/ Jogo de Forca */\n");
    printf("/****************/\n\n");
}

void chuta(){
    char ch;

    printf("\nChute uma letra: ");
    scanf(" %c", &ch);

    if(!letra_existe(ch)) {
        printf("Você acertou: a palavra tem a letra %c\n\n", ch);
    } else {
        printf("\nVocê errou: a palavra NÃO tem a letra %c\n\n", ch);
    }

    forca[ind] = ch;
    ind++;
}

void escolher_palavra(){
    FILE* f;
    int count_palavras;

    f = fopen("palavras.txt", "r");

    if(f == 0){
        printf("Erro ao abrir o banco de dados de palavras!!!\n");
        exit(1);
    }

    fscanf(f, "%d", &count_palavras);

    srand(time(0));
    int linha = rand() % count_palavras;

    for(int i = 0; i <= linha; i++){
        fscanf(f, "%s", palavra);
    }

    fclose(f);
}

int teste_chute(char ch){
    int achou = 0;

    for(int j = 0; j < ind; j++){
        if(forca[j] == ch){
            achou = 1;
            break;
        }
    }

    return achou;
}

void imprimir_forca(){
    int erros = chute_errados();

    printf("  _______       \n");
    printf(" |/      |      \n");
    printf(" |      %c%c%c  \n", (erros>=1?'(':' '), 
        (erros>=1?'_':' '), (erros>=1?')':' '));
    printf(" |      %c%c%c  \n", (erros>=3?'\\':' '), 
        (erros>=2?'|':' '), (erros>=3?'/': ' '));
    printf(" |       %c     \n", (erros>=2?'|':' '));
    printf(" |      %c %c   \n", (erros>=4?'/':' '), 
        (erros>=4?'\\':' '));
    printf(" |              \n");
    printf("_|___           \n");
    printf("\n\n");

    for(int i = 0; i < (int)strlen(palavra); i++){
        if(teste_chute(palavra[i])){
            printf("%c ", palavra[i]);
        }
        else{
            printf("_ "); 
        }
    }
    printf("\n");
}

int perda(){
    return chute_errados() >=5;
}

int ganho(){
    for(int i = 0; i < (int)strlen(palavra); i++){
        if(!teste_chute(palavra[i])){
            return 0;
        }
    }
    return 1;
}

void adicionar_palavra(){
    char opcao;

    printf("Você deseja adicionar uma nova palavra no jogo (S/N)? ");
    scanf(" %c", &opcao);

    if(opcao == 'S'){
        char palavra_nova[TAMANHO_PALAVRA];

        printf("Digite a nova palavra: ");
        scanf("%s", palavra_nova);

        FILE* f;

        f = fopen("palavras.txt", "r+");

        if(f == 0){
            printf("Erro ao abrir o banco de dados de palavras!!!\n");
            exit(1);
        }    

        int count;
        fscanf(f, "%d", &count);
        count++;
        fseek(f, 0, SEEK_SET);
        fprintf(f, "%d", count);

        fseek(f, 0, SEEK_END);
        fprintf(f, "\n%s", palavra_nova);
        fclose(f);
    }
    
}

int chute_errados(){
    int erros = 0;

    for(int i = 0; i<ind; i++){
        if(letra_existe(forca[i])){
            erros++;
        }
    }

    return erros;
}

int letra_existe(char letra){
        for(int j = 0; j < (int)strlen(palavra); j++){
            if(letra == palavra[j]){
                return 0;
            }
        }

    return 1;
}
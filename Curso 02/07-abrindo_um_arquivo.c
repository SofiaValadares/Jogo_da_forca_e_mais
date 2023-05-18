#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* f;

    f = fopen("teste.txt", "r");

    if(f == 0){
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }
    else{
        printf("Arquivo aberto com sucesso\n");
    }
}
#include <stdio.h>

int main(){
    int nun;

    printf("Digite um numero inteiro para ver a tabuada: ");
    scanf("%d", &nun);

    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", nun, i, nun*i);
    }
}
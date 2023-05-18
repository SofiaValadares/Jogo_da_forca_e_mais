#include <stdio.h>

int main(){
    int soma = 0;

    for(int i=1; i<=100; i++){
        soma += i;
    }

    printf("soma dos numeros de 1 ate a 100 = %d\n");
}
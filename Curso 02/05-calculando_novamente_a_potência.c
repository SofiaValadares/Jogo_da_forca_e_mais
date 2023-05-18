#include <stdio.h>

void calc(int *potencia, int a, int b);

int main(){
    int potencia = 1;

    calc(&potencia, 10, 5);

    printf("%d\n", potencia);
}

void calc(int *potencia, int a, int b){
    for(int i = 0; i < b; i++){
        *potencia = *potencia * a;
    }

    printf("%d^%d = ", a, b);
}
#include <stdio.h>

void soma(int a, int b, int *nun);

int main(){
    int a, b;
    int nun;

    printf("Digite 2 numeros:\n");

    printf("A = ");
    scanf("%d", &a);

    printf("B = ");
    scanf("%d", &b);

    soma(a, b, &nun);

    printf("Soma de %d + %d = %d\n", a, b, nun);
}

void soma(int a, int b, int *nun){
    *nun = a+b;
}
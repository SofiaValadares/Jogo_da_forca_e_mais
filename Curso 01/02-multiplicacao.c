#include <stdio.h>

int main(){
    int x, y;

    printf("Incira dois numeros inteiros (X e Y) para realizar uma multiplicação:\n");

    printf("X = ");
    scanf("%d", &x);

    printf("Y = ");
    scanf("%d", &y);

    printf("\nResultado:\n");
    printf("%d x %d = %d\n", x, y, x*y);
}
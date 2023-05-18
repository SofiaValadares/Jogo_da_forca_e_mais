#include <stdio.h>

void calc(int a, int b);

int main(){
    int a, b;

    printf("Digite um número: ");
    scanf("%d", &a);

    printf("Digite uma potencia: ");
    scanf("%d", &b);

    printf("\n- Resultado -\n");
    calc(a, b);

}

void calc(int a, int b){
    int potencia = 1;

    for(int i = 0; i<b; i++){
        potencia = potencia * a;
    }

    printf("%d^%d = %d\n", a, b, potencia);
}
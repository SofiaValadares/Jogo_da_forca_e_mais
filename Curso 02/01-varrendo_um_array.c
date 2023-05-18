#include <stdio.h>

int main(){
    int notas[5];
    notas[0] = 1;
    notas[1] = 4;
    notas[2] = 7;
    notas[3] = 5;
    notas[4] = 10;

    for(int i=0; i<5; i++){
        printf("Valor da posição %d = %d\n", i+1, notas[i]);
    }

}
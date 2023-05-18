#include <stdio.h>

void soma(int nuns[]);

int main(){
    int nuns[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    soma(nuns);
}

void soma(int nuns[]){
    int count = 0;

    for(int i = 0; i < 10; i++){
        count += nuns[i];
    }

    printf("Soma dos elementos do array = %d\n", count);
}
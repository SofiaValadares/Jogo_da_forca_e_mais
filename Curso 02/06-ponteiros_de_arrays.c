#include <stdio.h>

int soma(int *nuns, int ind);

int main(){
    int nums[3];
    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;

    int total = soma(nums, 3);

    printf("Soma 10 + 20 + 30 = %d\n", total);
}

int soma(int *nuns, int ind){
    int count = 0;

    for(int i = 0; i<ind; i++){
        count += nuns[i];
    }

    return count;
}
#include <stdio.h>

int main(){

int array[4] = {'1','2','3','4'};
int *ptr = array;

for (int i = 0; i <4;i++){

    printf("%d\n", *(ptr + i));

    }

}

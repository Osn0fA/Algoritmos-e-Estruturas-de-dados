#include <stdio.h>

int main(){

    int array1d[] = {'1','2','3','4'};

    array1d[0] = 5;
    printf("%d", array1d[0]);

    for (int i = 0; i < 4;i++){

        array1d[i] = 0;

    }

}
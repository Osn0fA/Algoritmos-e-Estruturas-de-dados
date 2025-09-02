#include <stdio.h>

int main(){

int array[8] = {'1','2','3','4','5','6','7','8'};

for (int i = 0; i < 8;i++){

    printf("%p\n",&array[i]);

}

}
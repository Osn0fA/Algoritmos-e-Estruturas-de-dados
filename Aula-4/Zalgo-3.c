#include <stdio.h>

int main(){

int array[4] = {'1','2','3','4'};
*array = 7;
*(array +1) = 14;


for (int i = 0; i < 4;i++){

    printf("%d\n",*(array + i));

}

}
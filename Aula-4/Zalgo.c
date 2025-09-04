#include <stdio.h>

int main(){

int array[8] = {'1','2','3','4','5','6','7','8'};

printf("%p\n",array);
printf("%p\n",&array[0]);
printf("%d\n",*array);

}
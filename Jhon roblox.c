#include <stdio.h>
#include <string.h>

int main(void){

    int idade = 41;
    int* ptr = &idade;

    printf("%p\n",ptr);
    printf("%d\n", *ptr);

}
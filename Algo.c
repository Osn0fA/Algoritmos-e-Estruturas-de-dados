#include <stdio.h>
#include <string.h>

int main(void){

    int idade = 43;
    int* ptr = &idade;

    printf("%d\n\n", idade);

    printf("%p\n\n", &idade);

    printf("%p\n\n", ptr);


}
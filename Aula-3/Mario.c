#include <stdio.h>

int main(){

int x = 5, y = 7, z = 0;

z = x * y;
    
int* p = NULL;

p = &z;

printf("\n %i", z);
printf("\n%p", &z);
printf("\n %p", p);

}
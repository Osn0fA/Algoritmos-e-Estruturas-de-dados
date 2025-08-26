#include <stdio.h>

int main(){

    // Pode-se fazer array de todos os modos mas só pode ter um unico tipo de variavel.

    int array[] = {15,17,18,19,20};

    array[0] = 33;

    printf("%i\n\n",array[2]);

    char palavra[] = {'r','o','n','a','l','d','o','\n','o','i','\0'};

    printf("%s", palavra);

} // \0 indica ronaldo
#include <stdio.h>

int main(){

    int x = 0;
    int y = 0;

    printf("Escolha dois numeros...\nNumero 1:");

    scanf("%d",&x);

    printf("\nNumero 2: ");

    scanf("%d", &y);

    if ( x < y ){

        printf("\n%d e menor que %d",x,y);

    }

    if ( x > y){

        printf("\n%d e maior que %d",x,y);
    }

}
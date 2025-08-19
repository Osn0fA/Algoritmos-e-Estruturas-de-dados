#include <stdio.h>

int main(void){

    /*
    SCAN - Get Data! (RAM)-------------------------------->

    int idade = 0;
    scanf("%d",&idade);
    
    ONE LETTER-------------------------------------->

        char letra = getchar();

    A WHOLE SENTECE-------------------------------------->

        char = var1[50];
        fgets(var1, size of (var1), stdin)
    */

    char nome[30];
    char resposta = 'a';

    fgets(nome, 30, stdin);

    printf("Hello %s", nome);

    printf("Você tem medo do escuro? Y/N \n Resposta = ");

    scanf("%c", &resposta);
}
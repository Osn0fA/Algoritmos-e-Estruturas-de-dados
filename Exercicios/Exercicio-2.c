// Vamos criar algo...

#include <stdio.h>
#include <string.h>

int main(){

    char cidade[30], nome[50];

    for (int i = 0; i < sizeof(nome); i++){

        if (i<30)
        {
            cidade[i] = '\0';
        }
         nome[i] = '\0';

    }

    //// Verificação de limpeza

    printf("\n\n### Verifique a limpeza[...]");
    printf("Cleansing: %s ,\n%s",nome,cidade);

    ///------------->

    printf("Escreva o seu nome:\n");
    fgets(nome,sizeof(nome), stdin);

    printf("Escreva o nome da sua cidade:\n");
    fgets(cidade,sizeof(cidade),stdin);

    ////----------------------->
    /// Remove o \n do Fgets.

    nome[strspn(nome,"\n")] = '\0';
    cidade[strspn(cidade,"\n")] = '\0';

    // Mostrar conteudo

    printf("Seu nome é %s, e sua cidade é %s",nome,cidade);

}
#include <stdlib.h>
#include <stdio.h>

struct endereço {
    char rua[201];
    int numero;
    char bairro[101];
    char cep[9];
};


int main(){

    struct endereço minhaCasa = {"Rua sua mae", 12 ,"Sol Nascente","1234-123"};

    printf("%s, %i, %s, %s", minhaCasa.rua,minhaCasa.numero,minhaCasa.bairro,minhaCasa.cep);
    

}
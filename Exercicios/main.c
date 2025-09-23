// Exercicio - 3
// Passo 1 obter Qtd_mensalidade usar Do
// Passo 2 obter o valor das mensalidades
// Passo 3 calcular media
// Passo 4 mostrar resultados

#include <stdio.h>
#include <stdlib.h>


int obterQtdMen(){
    
    int qtd = 0;
    
    do{
        printf("\nQuantidade de mensalidades...\n\n");
        scanf("%d", &qtd);
        if (qtd<1){
            printf("\n!!!Invalid!!!\n");
        }
    }while(qtd < 1);{
       
       return qtd;
       
    }
    
}

int main(){
    
    int qtd_msd;
    float *v_men, media, resultados;
    
    qtd_msd = obterQtdMen();
    /// Armanezou direitinho =)
    
}
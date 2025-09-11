#include <stdio.h>
#include <math.h>

void menu(void){
    printf(" #################\n");
    printf("### Calculadora ###\n");
    printf(" #################\n\n");

    printf("Choose your operation[...]\n\n");
    printf(" 1. ---> SquareRoot   |\n 2. ---> 2^x          |\n 3. ---> Log of base 2|\n 4. ---> Cos of x     |\n\n--->");
}

float raiz(){
    float numero;
    float resultado;
    printf("De qual numero queres descobrir tal resultado?\n\n");
    scanf("%f",&numero);
    resultado = sqrt(numero);
    return resultado;
}

float expEm2(){
    int numero;
    float resultado;
    printf("De qual numero queres descobrir tal resultado?\n\n");
    scanf("%d",&numero);
    resultado = exp2(numero);
    return resultado;
}

float Logbase2(){
    float numero;
    float resultado;
    printf("De qual numero queres descobrir tal resultado?\n\n");
    scanf("%f",&numero);
    resultado = log2(numero);
    return resultado;
}

float CossenoDeX(){
    float numero;
    float resultado;
    printf("De qual numero queres descobrir tal resultado?\n\n");
    scanf("%f",&numero);
    resultado = cos(numero);
    return resultado;
}




int main(){

    int asnwer = 0;
    float resultado = 0;

    menu();

    scanf("%d", &asnwer);

    if (asnwer == 1){
        resultado = raiz();
        printf("Resultado = %.3f",resultado);
    }
    if(asnwer == 2){
        resultado = expEm2();
        printf("Resultado = %.2f",resultado);
    }

    if (asnwer == 3){
        resultado = Logbase2();
        printf("Resultado = %.2f",resultado);
    }

    if (asnwer == 4){
        resultado = CossenoDeX();
        printf("Resultado = %.2f graus",resultado);
    }

}
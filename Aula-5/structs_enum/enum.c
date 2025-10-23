#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef enum {
    BAIXO = 40,
    MEDIO = 60,
    ALTO = 85
} nivel;

void verificarNivel(nivel valorNivel);
float receberValidarEntrada();

int main(void) 
{
    nivel a;
    float valor = receberValidarEntrada();

    verificarNivel((nivel)valor);

    return 0;
}

/**
 * Função para verificar o nível de ruído e informar ao usuário
 * 
 * @param valorNivel - deve receber uma estrutura do tipo 'nivel':
 *                       typedef enum {
 *                           BAIXO = 40,
 *                           MEDIO = 60,
 *                           ALTO = 85
 *                       } nivel;
 * @return - função sem retorno, apenas imprime mensagens na tela.
 */
void verificarNivel(nivel valorNivel)
{
    if (valorNivel < BAIXO) 
    {
        printf("O nível informado é BAIXO.\n");
    } 
    else if (valorNivel >= BAIXO && valorNivel < MEDIO) 
    {
        printf("O nível informado é MÉDIO.\n");
    }
    else if (valorNivel >= MEDIO && valorNivel < ALTO) 
    {
        printf("O nível informado é ALTO.\n");
    }
    else
    {
        printf("O nível informado é MUITO ALTO.\n");
    }
}

/**
 * Esta função valida a entrada de dados do tipo float
 *
 * @param entradaAux - deve conter um string numérica com no máximo 5 posições
 * @return - a função retorna o valor float válido.
 */
float receberValidarEntrada()
{
    int temCaractere = 0, conversao = 0;
    char entradaAux[5] = {0, 0, 0, 0, 0};
    float valor = 0.0;

    while (1) 
    {
        printf("Digite o valor de ruído do sensor: ");
        fgets(entradaAux, sizeof(entradaAux), stdin);

        for (int i = 0; entradaAux[i] != '\0'; i++) {
            if (!isspace(entradaAux[i])) {
                temCaractere = 1;
                break;
            }
        }

        conversao = sscanf(entradaAux, "%f", &valor);
        if (temCaractere && (strlen(entradaAux) <= 5) && (conversao == 1) && valor > 0) {
            //printf("Você digitou o número: %.2f\n", valor);
            return valor;
        } else {
            printf("\n # Entrada inválida. Digite um número válido. #\n\n");
        }
    }
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct 
{
    char modelo[51];
    char marca[51];
    int ano;
    bool transferimento;
} carro;

int main(void) {
    carro car[3];
    int tamVetor = sizeof(car) / sizeof(car[0]);
    char pipi;

    for (int i = 0; i < tamVetor; i++) 
    {   
        for (int j = 0; j < sizeof(car[i].marca); j++) 
        {
            car[i].marca[j] = '\0';
            car[i].modelo[j] = '\0';
        }
        car[i].ano = 0;
        car[i].transferimento = false;
    }

    int i = 0;
    while (i < tamVetor) 
    {
        printf("\nInforme o modelo: ");
        fgets(car[i].modelo, sizeof(car[i].modelo), stdin);
        
        printf("Informe a marca: ");
        fgets(car[i].marca, sizeof(car[i].marca), stdin);
        
        printf("Informe o ano: ");
        scanf("%i", &car[i].ano);
        
        printf("Este carro foi transferido? (S/N): ");
        
        pipi = getchar();

        if (pipi == 'S'||'s'){

            car[i].transferimento == true;

        }
        if (pipi == 'N'||'n'){

            car[i].transferimento == false;

        }
        
        getchar();
        getchar();
        i++;
    }

    printf("\n ---- Carros cadastrados ----\n");
    for (i = 0; i < tamVetor; i++)
    {   
        printf("\n### Carro %d ###\n", i + 1);
        printf(" Modelo: %s\r Marca: %s\r Ano: %i\r Transferido: %d\r", 
                car[i].modelo, 
                car[i].marca, 
                car[i].ano),
                car[i].transferimento;
        printf("\n###############\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void imprime_histograma(int* vendas[], int num_categorias) {
    int vazio = 1; 

    // Verifica se há vendas
    for (int i = 0; i < num_categorias; i++) {
        if (*vendas[i] > 0) {
            vazio = 0; 
            break;  
        }
    }


    if (vazio) {
        printf("vazio\n");
        return;
    }

    // Caso contrário, imprime o histograma
    for (int i = 0; i < num_categorias; i++) {
        printf("%d ", *vendas[i]); 
        for (int j = 0; j < *vendas[i]; j++) {
            printf("*"); 
        }
        printf("\n");
    }
}

int main() {
    int num_categorias;

    scanf("%d", &num_categorias);

    int** vendas = (int**)malloc(num_categorias * sizeof(int*));

    if (vendas == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    for (int i = 0; i < num_categorias; i++) {
        vendas[i] = (int*)malloc(sizeof(int));  
        if (vendas[i] == NULL) {
            printf("Erro na alocação de memória para a categoria %d.\n", i + 1);
            return 1;
        }

        scanf("%d", vendas[i]);
    }

    imprime_histograma(vendas, num_categorias);

    for (int i = 0; i < num_categorias; i++) {
        free(vendas[i]);  
    }
    free(vendas);  

    return 0;
}

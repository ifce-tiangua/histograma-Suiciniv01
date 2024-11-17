#include <stdio.h>
#include <stdlib.h>

void imprime_histograma(int* vendas[], int num_categorias) {
    for (int i = 0; i < num_categorias; i++) {
        printf("%d ", vendas[i]); 

        if (vendas[i] > 0) { 
            for (int j = 0; j < vendas[i]; j++) {
                printf("*");
            }
        }
        printf("\n");
    }
}

int main() {
    int num_categorias;

    scanf("%d", &num_categorias);

    int* vendas = (int*)malloc(num_categorias * sizeof(int));

    for (int i = 0; i < num_categorias; i++) {
        scanf("%d", &vendas[i]); 
    }

    imprime_histograma(vendas, num_categorias);

    free(vendas);

    return 0;
}
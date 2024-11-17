#include <stdio.h>
#include <stdlib.h>

void imprime_histograma(int *vendas, int num_categorias) {
    int i, j;

    for (i = 0; i < num_categorias; i++) {
        printf("%i ", vendas[i]); 

        for (j = 0; j < vendas[i]; j++) {
            printf("*");
        }
        
        printf("\n");

    }
}

int main() {
    int num_categorias, i, *vendas;

    scanf(" %i", &num_categorias);

    vendas = (int*) malloc(num_categorias * sizeof(int));

    for (i = 0; i < num_categorias; i++) {
        scanf(" %i", &vendas[i]);
    }

    imprime_histograma(vendas, num_categorias);

    free(vendas);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void imprime_histograma(int *vendas, int num_categorias) {
    int i, j;

    for (i = 0; i < num_categorias; i++) {
        printf("%d ", vendas[i]); 

        for (j = 0; j < vendas[i]; j++) {
            printf("*");
        }
        
        printf("\n");

    }
}

int main() {
    int num_categorias, i;

    scanf("%d", &num_categorias);

    int *vendas = (int*) malloc(num_categorias * sizeof(int));

    for (i = 0; i < num_categorias; i++) {
        scanf("%d", &vendas[i]);
    }

    imprime_histograma(vendas, num_categorias);

    free(vendas);
    
    return 0;
}
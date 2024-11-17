#include <stdio.h>
#include <stdlib.h>

void imprime_histograma(int* vendas[], int num_categorias) {
    for (int i = 0; i < num_categorias; i++) {
        printf("%d ", *(*(vendas + i)));

        if (*(*(vendas + i)) > 0) { 
            for (int j = 0; j < *(*(vendas + i)); j++) {
                printf("*");
            }
        }
        printf("\n"); 

    }
}

int main() {
    int num_categorias;

    scanf("%d", &num_categorias);

    if (num_categorias <= 0) {
        return 1;
    }

    int** vendas = (int**)malloc(num_categorias * sizeof(int*));
    if (vendas == NULL) {
        return 1;
    }

    for (int i = 0; i < num_categorias; i++) {
        *(vendas + i) = (int*)malloc(sizeof(int));
        if (*(vendas + i) == NULL) {
            return 1;
        }

        scanf("%d", *(vendas + i)); 

    }

    imprime_histograma(vendas, num_categorias);

    for (int i = 0; i < num_categorias; i++) {
        free(*(vendas + i));
    }
    free(vendas);

    return 0;
}
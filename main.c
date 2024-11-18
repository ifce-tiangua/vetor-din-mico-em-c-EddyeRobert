#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;

    scanf("%d", &tamanho);

    if (tamanho == 0) {
        printf("[vazio]\n");
        return 0;
    }

    int *vetor = (int *)malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("[");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    free(vetor);

    return 0;
}

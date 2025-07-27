#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main() {
    int i, j, vet[TAM] = {1, 2, 3, -4, -5, 3, 2, 59, 10, -1};
    int vet_res[TAM]; // vetor para armazenar os positivos

    printf("\n\tREMOVER NEGATIVOS DO VETOR\n\n");

    // Exibe o vetor original
    printf("Vetor original:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vet[i]);
    }

    // Remove os negativos
    j = 0;
    for (i = 0; i < TAM; i++) {
        if (vet[i] >= 0) {
            vet_res[j] = vet[i];
            j++;
        }
    }

    // Exibe o vetor resultante (sem negativos)
    printf("\n\nVetor sem elementos negativos:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", vet_res[i]);
    }

    printf("\n\n");
    return 0;
}

#include <stdio.h>

int main() {
    int inicio, fim;

    // Solicitar ao usuário o intervalo
    printf("Digite o valor inicial do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o valor final do intervalo: ");
    scanf("%d", &fim);

    // Exibir números pares
    printf("Números pares no intervalo de %d a %d:\n", inicio, fim);
    for (int i = inicio; i <= fim; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    // Exibir números ímpares
    printf("\nNúmeros ímpares no intervalo de %d a %d:\n", inicio, fim);
    for (int i = inicio; i <= fim; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

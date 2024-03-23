#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroAleatorio, palpite, tentativas = 0;
    
    // Seed para gerar números aleatórios
    srand(time(NULL));
    
    // Gerando um número aleatório entre 1 e 100
    numeroAleatorio = rand() % 100 + 1;
    
    printf("Bem-vindo ao jogo de adivinhação!\n");
    
    do {
        printf("Tente adivinhar o número (entre 1 e 100): ");
        scanf("%d", &palpite);
        
        tentativas++;
        
        if (palpite > numeroAleatorio) {
            printf("Muito alto! Tente novamente.\n");
        } else if (palpite < numeroAleatorio) {
            printf("Muito baixo! Tente novamente.\n");
        } else {
            printf("Parabéns! Você acertou o número em %d tentativa(s).\n", tentativas);
        }
    } while (palpite != numeroAleatorio);
    
    return 0;
}

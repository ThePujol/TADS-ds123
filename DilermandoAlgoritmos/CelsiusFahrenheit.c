#include <stdio.h>

// Função para converter Celsius para Fahrenheit
float celsius_para_fahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Função para converter Fahrenheit para Celsius
float fahrenheit_para_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float temperatura;
    int escolha;

    printf("Selecione a conversão desejada:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            printf("%.2f Celsius equivale a %.2f Fahrenheit\n", temperatura, celsius_para_fahrenheit(temperatura));
            break;
        case 2:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            printf("%.2f Fahrenheit equivale a %.2f Celsius\n", temperatura, fahrenheit_para_celsius(temperatura));
            break;
        default:
            printf("Escolha inválida.\n");
    }

    return 0;
}

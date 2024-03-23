#include <stdio.h>


int main() {
    float num1, num2;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Escolha a operação a ser realizada (+, -, *, /): ");
    scanf(" %c", &operador);

    switch (operador) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else {
                printf("Erro: Divisão por zero!\n");
            }
            break;
        default:
            printf("Operador inválido!\n");
    }

    return 0;
}

#include <stdio.h>

#define MAX_PESSOAS 10

struct Pessoa {
    char nome[50];
    int idade;
    char sexo;
};

int main() {

     setlocale(LC_ALL, "Portuguese_Brasil");

    int num_pessoas;
    struct Pessoa pessoas[MAX_PESSOAS];

    printf("Digite a quantidade de pessoas a incluir no cadastro: ");
    scanf("%d", &num_pessoas);

    // Solicitar informações de cada pessoa
    for (int i = 0; i < num_pessoas; i++) {
        printf("\nInformações da pessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", pessoas[i].nome);
        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);

        printf("Sexo (M/F): ");
        scanf(" %c", &pessoas[i].sexo);
    }

    // Mostrar nome e idade dos homens
    printf("\nPessoas do sexo masculino cadastradas:\n");
    for (int i = 0; i < num_pessoas; i++) {
        if (pessoas[i].sexo == 'M' || pessoas[i].sexo == 'm') {
            printf("Nome: %s, Idade: %d\n", pessoas[i].nome, pessoas[i].idade);
        }
    }

    // Mostrar nome e idade das mulheres
    printf("\nPessoas do sexo feminino cadastradas:\n");
    for (int i = 0; i < num_pessoas; i++) {
        if (pessoas[i].sexo == 'F' || pessoas[i].sexo == 'f') {
            printf("Nome: %s, Idade: %d\n", pessoas[i].nome, pessoas[i].idade);
        }
    }

    return 0;
}

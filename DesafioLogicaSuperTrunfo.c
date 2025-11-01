#include <stdio.h>
#include <string.h>

struct Carta {
    char nome[30];
    float populacao;          // em milhões
    float area;               // em km²
    float pib;                // em trilhões
    float densidade;          // hab/km²
};

// Função auxiliar para exibir menu de atributos
void exibirMenuAtributos() {
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demográfica\n");
}

// Função para obter o valor do atributo escolhido
float obterAtributo(struct Carta c, int opcao) {
    switch(opcao) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.densidade;
        default: return -1; // erro
    }
}

// Nome do atributo
const char* nomeAtributo(int opcao) {
    switch(opcao) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Densidade Demográfica";
        default: return "Inválido";
    }
}

int main() {
    struct Carta carta1 = {"Brasil", 214.3, 8516.0, 2.08, 25.1};
    struct Carta carta2 = {"Canadá", 38.2, 9985.0, 2.20, 4.0};

    int atributo1, atributo2;

    printf("=== SUPER TRUNFO: COMPARAÇÃO AVANÇADA ===\n");
    printf("\nCarta 1: %s\nCarta 2: %s\n", carta1.nome, carta2.nome);

    // Escolha do primeiro atributo
    exibirMenuAtributos();
    printf("Escolha o 1º atributo: ");
    scanf("%d", &atributo1);

    // Validação do primeiro atributo
    if (atributo1 < 1 || atributo1 > 4) {
        printf("Opção inválida! Encerrando.\n");
        return 0;
    }

    // Menu dinâmico (remove o atributo já escolhido)
    printf("\nAgora escolha o 2º atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 4; i++) {
        if (i != atributo1)
            printf("%d - %s\n", i, nomeAtributo(i));
    }

    printf("Escolha o 2º atributo: ");
    scanf("%d", &atributo2);

    // Validação do segundo atributo
    if (atributo2 < 1 || atributo2 > 4 || atributo2 == atributo1) {
        printf("Opção inválida! Encerrando.\n");
        return 0;
    }

    // Obtenção dos valores
    float valor1A = obterAtributo(carta1, atributo1);
    float valor2A = obterAtributo(carta2, atributo1);
    float valor1B = obterAtributo(carta1, atributo2);
    float valor2B = obterAtributo(carta2, atributo2);

    // Comparação individual
    int pontosC1 = 0, pontosC2 = 0;

    // Regras de comparação (densidade é inversa)
    pontosC1 += (atributo1 == 4) ? (valor1A < valor2A) : (valor1A > valor2A);
    pontosC2 += (atributo1 == 4) ? (valor2A < valor1A) : (valor2A > valor1A);

    pontosC1 += (atributo2 == 4) ? (valor1B < valor2B) : (valor1B > valor2B);
    pontosC2 += (atributo2 == 4) ? (valor2B < valor1B) : (valor2B > valor1B);

    // Soma total dos valores
    float somaC1 = valor1A + valor1B;
    float somaC2 = valor2A + valor2B;

    // Exibição de resultados
    printf("\n===== RESULTADOS =====\n");
    printf("Comparando: %s x %s\n", carta1.nome, carta2.nome);
    printf("\nAtributo 1: %s\n", nomeAtributo(atributo1));
    printf("%s: %.2f | %s: %.2f\n", carta1.nome, valor1A, carta2.nome, valor2A);

    printf("\nAtributo 2: %s\n", nomeAtributo(atributo2));
    printf("%s: %.2f | %s: %.2f\n", carta1.nome, valor1B, carta2.nome, valor2B);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n%s: %.2f\n", carta1.nome, somaC1, carta2.nome, somaC2);

    // Resultado final (empate incluído)
    if (somaC1 == somaC2) {
        printf("\nResultado: Empate!\n");
    } else {
        printf("\nVencedor: %s\n", (somaC1 > somaC2) ? carta1.nome : carta2.nome);
    }

    return 0;
}

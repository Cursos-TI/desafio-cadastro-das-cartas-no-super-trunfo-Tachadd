#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo [70];
    char nome [10];
    int populacao;
    float area;
    float pib;
    int pontos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o codigo da cidade: \n");
    scanf("%s", &codigo);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);
    
    printf("Digite o numero de habitantes: \n");
    scanf("%d", &populacao);
    
    printf("Digite a area da cidade em m2: \n");
    scanf("%f", &area);
    
    printf("Digite o faturamento da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turísticos da cidade: \n");
    scanf("%d", &pontos);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("codigo da cidade: %s \n", codigo);
    printf("nome da cidade: %s \n", nome);
    printf("Numero de habitantes: %d \n", populacao);
    printf("Area da cidade em m2: %.2f \n", area);
    printf("PIB da cidade: %.2f \n", pib);
    printf("Numero de pontos turísticos da cidade: %d \n", pontos);

    return 0;
}

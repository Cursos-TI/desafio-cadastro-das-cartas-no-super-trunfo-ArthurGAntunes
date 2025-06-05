#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado1, estado2;
    char codigo1[4], codigo2[4], nome1[40], nome2[40];
    int populacao1, populacao2, pontostur1,pontostur2;
    float area1, area2, pib1, pib2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("***Informações da Carta 01***");

    printf("\nDigite a letra do estado:");
    scanf(" %c", &estado1);

    printf("Digite o código da carta:");
    scanf("%s", &codigo1);

    printf("Digite o nomde da cidade:");
    scanf("%s", &nome1);

    printf("Digite a população:");
    scanf("%d", &populacao1);

    printf("Digite a área em km²:");
    scanf("%f", &area1);

    printf("Digite o PIB:");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontostur1);

    //Informações da carta 2

    printf("\n***Informações da Carta 02***");

    printf("\nDigite a letra do estado:");
    scanf(" %c", &estado2);

    printf("Digite o código da carta:");
    scanf("%s", &codigo2);

    printf("Digite o nomde da cidade:");
    scanf("%s", &nome2);

    printf("Digite a população:");
    scanf("%d", &populacao2);

    printf("Digite a área em km²:");
    scanf("%f", &area2);

    printf("Digite o PIB:");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontostur2);

    printf("\nInformações Carta 01");
    printf("\nEstado:%c", estado1);
    printf("\nCódigo da carta:%s", codigo1);
    printf("\nNome da cidade:%s", nome1);
    printf("\nPopulação:%d", populacao1);
    printf("\nÁrea:%.2fkm²", area1);
    printf("\nPIB:%.2f bilhões de reais", pib1);
    printf("\nPontos Turísticos:%d", pontostur1);

    printf("\nInformações Carta 02");
    printf("\nEstado:%c", estado2);
    printf("\nCódigo da carta:%s", codigo2);
    printf("\nNome da cidade:%s", nome2);
    printf("\nPopulação:%d", populacao2);
    printf("\nÁrea:%.2fkm²", area2);
    printf("\nPIB:%.2f bilhões de reais", pib2);
    printf("\nPontos Turísticos:%d", pontostur2);



    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

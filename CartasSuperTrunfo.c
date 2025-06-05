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
    unsigned long int populacao1, populacao2;
    int pontostur1,pontostur2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibper1, pibper2;
    float superpoder1, superpoder2;
    float invdensidade1, invdensidade2;
    int rpop, rpontos, rarea, rdensidade, rpib, rpibper, rsuperpoder;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("***Informações da Carta 01***");

    printf("\nDigite a letra do estado:");
    scanf(" %c", &estado1);

    printf("Digite o código da carta:");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade:");
    scanf("%s", &nome1);

    printf("Digite a população:");
    scanf("%u", &populacao1);

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

    printf("Digite o nome da cidade:");
    scanf("%s", &nome2);

    printf("Digite a população:");
    scanf("%u", &populacao2);

    printf("Digite a área em km²:");
    scanf("%f", &area2);

    printf("Digite o PIB:");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontostur2);

    //Realização dos cálculos

    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    pibper1 = pib1 / (float) populacao1;
    pibper2 = pib2 / (float) populacao2;

    //Calculando o super poder

    invdensidade1 = 1 / densidade1;
    invdensidade2 = 1 / densidade2;

    superpoder1 = (float) populacao1 + area1 + pib1 + (float) pontostur1 + pibper1 + invdensidade1;
    superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontostur2 + pibper2 + invdensidade2;

    //Comparando Resultados

    rpop = populacao1 > populacao2;
    rarea = area1 > area2;
    rpib = pib1 > pib2;
    rpontos = pontostur1 > pontostur2;
    rdensidade = densidade1 < densidade2;
    rpibper = pibper1 > pibper2;
    rsuperpoder = superpoder1 > superpoder2;



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nInformações Carta 01");
    printf("\nEstado:%c", estado1);
    printf("\nCódigo da carta:%s", codigo1);
    printf("\nNome da cidade:%s", nome1);
    printf("\nPopulação:%d", populacao1);
    printf("\nÁrea:%.2fkm²", area1);
    printf("\nPIB:%.2f bilhões de reais", pib1);
    printf("\nPontos Turísticos:%d", pontostur1);
    printf("\nDensidade Populacional:%.2f hab/km²", densidade1);
    printf("\nPIB per Capita:%.2f reais", pibper1);

    printf("\n\nInformações Carta 02");
    printf("\nEstado:%c", estado2);
    printf("\nCódigo da carta:%s", codigo2);
    printf("\nNome da cidade:%s", nome2);
    printf("\nPopulação:%d", populacao2);
    printf("\nÁrea:%.2fkm²", area2);
    printf("\nPIB:%.2f bilhões de reais", pib2);
    printf("\nPontos Turísticos:%d", pontostur2);
    printf("\nDensidade Populacional:%.2f hab/km²", densidade2);
    printf("\nPIB per Capita:%.2f reais", pibper2);

    //Exibindo a comparação das Cartas

    printf("\n\n***Comparação das Cartas***");
    printf("\nPopulaão: Carta 1 vence (%d)", rpop);
    printf("\nÁrea: Carta 1 vence (%d)", rarea);
    printf("\nPIB: Carta 1 vence (%d)", rpib);
    printf("\nPontos Turísticos: Carta 1 vence (%d)", rpontos);
    printf("\nDensidade: Carta 1 vence (%d)", rdensidade);
    printf("\nPIB per Capita: Carta 1 vence (%d)", rpibper);
    printf("\nSuper Poder: Carta 1 vence (%d)", rsuperpoder);



    return 0;
}

#include<stdio.h>
// Criando Cartas do Super Trunfo

int main(){

    // Declaração de Variáveis
    char letra_estado1, letra_estado2;
    char codigo_estado1[5], codigo_estado2[5];
    int populacao1, populacao2;
    char nome_cidade1[20], nome_cidade2[20];
    float area1, area2, pib_1, pib_2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float PIB_per_capita1, PIB_per_capita2;


    // Inserção de dados pelo usuário da Carta 1 e 2:

    printf("\n");
    printf("=== INSIRA OS DADOS DA CARTA 1 ===\n");
    printf("1. Insira a letra que representa o Estado da Carta 1 (A - H)\n");
    scanf(" %c", &letra_estado1);
    printf("2. Insira o Código da Carta 1 correspodendo a letra do Estado seguida do número 01 a 04: \n");
    scanf("%s", &codigo_estado1);
    printf("3. Insira o nome da cidade do Estado da Carta 1: \n");
    scanf("%s", &nome_cidade1);
    printf("4. Insira a população da cidade da Carta 1: \n");
    scanf("%d", &populacao1);
    printf("5. Insira a área (em km²) da cidade da Carta 1: \n");
    scanf("%f", &area1);
    printf("6. Insira o PIB da cidade da Carta 1: \n");
    scanf("%f", &pib_1);
    printf("7. Insira o número de pontos turísticos da cidade da Carta 1: \n");
    scanf("%d", &pontos_turisticos1);

    // Calculo da Densidade Populacional e do PIB per capita da Carta 1:

    densidade_populacional1 = populacao1 / area1;
    PIB_per_capita1 = (pib_1 * 1000000000) / populacao1;

    printf("\n");
    printf("=== INSIRA OS DADOS DA CARTA 2===\n");
    printf("1. Insira a letra que representa o Estado da Carta 2 (A - H)\n");
    scanf(" %c", &letra_estado2);
    printf("2. Insira o Código da Carta 2 correspodendo a letra do Estado seguida do número 01 a 04: \n");
    scanf("%s", &codigo_estado2);
    printf("3. Insira o nome da cidade do Estado da Carta 2: \n");
    scanf("%s", &nome_cidade2);
    printf("4. Insira a população da cidade da Carta 2: \n");
    scanf("%d", &populacao2);
    printf("5. Insira a área (em km²) da cidade da Carta 2: \n");
    scanf("%f", &area2);
    printf("6. Insira o PIB da cidade da Carta 2: \n");
    scanf("%f", &pib_2);
    printf("7. Insira o número de pontos turísticos da cidade da Carta 2: \n");
    scanf("%d", &pontos_turisticos2);

    // Calculo da Densidade Populacional e do PIB per capita da Carta 2:

    densidade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = (pib_2 * 1000000000) / populacao2;

    printf("\n");

    // Exibição do Resultado

    printf("\n");
    printf("=== JOGO TRUNFO - CARTA 1 ===: \n");
    printf("1. Estado: '%c'\n", letra_estado1);
    printf("2. Código: %s\n", codigo_estado1);
    printf("3. Nome da Cidade: %s\n", nome_cidade1);
    printf("4. População: %d habitantes/km²\n", populacao1);
    printf("5. Área: %.2f km²\n", area1);
    printf("6. PIB: %.2f bilhões de reais\n", pib_1);
    printf("7. Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("8. Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("9. PIB per capita: %.2f reais\n", PIB_per_capita1);

    printf("\n");

    printf("=== JOGO TRUNFO - CARTA 2 ===: \n");
    printf("1. Estado: '%c'\n", letra_estado2);
    printf("2. Código: %s\n", codigo_estado2);
    printf("3. Nome da Cidade: %s\n", nome_cidade2);
    printf("4. População: %d habitantes/km²\n", populacao2);
    printf("5. Área: %.2f km²\n", area2);
    printf("6. PIB: %.2f bilhões de reais\n", pib_2);
    printf("7. Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("8. Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("9. PIB per capita: %.2f reais\n", PIB_per_capita2);
    

    return 0;
}
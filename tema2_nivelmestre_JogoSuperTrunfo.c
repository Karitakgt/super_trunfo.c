#include<stdio.h>
//JOGO SUPER TRUNFO - NIVEL MESTRE - TEMA 2

int main(){

    // DECLARAÇÃO DAS VARIÁVEIS DO JOGO SUPER TRUNFO

    char letra_estado1, letra_estado2;
    char codigo_estado1[5], codigo_estado2[5], nome_cidade1[20], nome_cidade2[20];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2, opcao, atributo1 = 0, atributo2 = 0;
    float area1, area2, pib_1, pib_2, densidade_populacional1, densidade_populacional2, PIB_per_capita1, PIB_per_capita2;
    float Super_Poder1, Super_Poder2, valor_carta1_attr1 = 0, valor_carta1_attr2 = 0;
    float valor_carta2_attr1 = 0, valor_carta2_attr2 = 0;
    float soma_carta1 = 0, soma_carta2 = 0;

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

    // Cálculo do Super Poder da Carta 1:
    // Super_Poder1 = populacao1 + area1 + pib_1 + pontos_turisticos1 + PIB_per_capita1 + (1 / densidade_populacional1);
    Super_Poder1 = (float) populacao1 + area1 + pib_1 + (float) pontos_turisticos1 + PIB_per_capita1 + (1.0 / densidade_populacional1);

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

    // Cálculo do Super Poder da Carta 2:
    Super_Poder2 = (float) populacao2 + area2 + pib_2 + (float) pontos_turisticos2 + PIB_per_capita2 + (1.0 / densidade_populacional2);

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
    printf("10. Super Poder: %.2f\n", Super_Poder1);

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
    printf("10. Super Poder: %.2f\n", Super_Poder2);

    printf("\n");
    
    // Menu interativo para comparação de atributos:

do {
    printf("\n=== MENU DE COMPARAÇÃO DE DOIS ATRIBUTOS ===\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");
    printf("8. Sair\n");
    printf("Digite sua escolha: ");
    scanf("%d", &atributo1);

    if (atributo1 == 8) break;

    // Menu dinâmico (remove o atributo1 das opções)
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 7; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1. População\n"); break;
                case 2: printf("2. Área\n"); break;
                case 3: printf("3. PIB\n"); break;
                case 4: printf("4. Número de pontos turísticos\n"); break;
                case 5: printf("5. Densidade Populacional\n"); break;
                case 6: printf("6. PIB per capita\n"); break;
                case 7: printf("7. Super Poder\n"); break;
            }
        }
    }

    do {
        printf("Digite sua escolha: ");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 7)
            printf("Atributo inválido ou repetido. Tente novamente.\n");
    } while (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 7);

    // Inicializa valores
    soma_carta1 = 0;
    soma_carta2 = 0;

    printf("\n===== COMPARAÇÃO ENTRE %s E %s =====\n", nome_cidade1, nome_cidade2);

    for (int i = 0; i < 2; i++) {
        int atributo = (i == 0) ? atributo1 : atributo2;
        float v1 = 0, v2 = 0;
        char nome_atributo[50];

        switch (atributo) {
            case 1:
                v1 = populacao1;
                v2 = populacao2;
                sprintf(nome_atributo, "População");
                break;
            case 2:
                v1 = area1;
                v2 = area2;
                sprintf(nome_atributo, "Área");
                break;
            case 3:
                v1 = pib_1;
                v2 = pib_2;
                sprintf(nome_atributo, "PIB");
                break;
            case 4:
                v1 = pontos_turisticos1;
                v2 = pontos_turisticos2;
                sprintf(nome_atributo, "Pontos Turísticos");
                break;
            case 5:
                v1 = densidade_populacional1;
                v2 = densidade_populacional2;
                sprintf(nome_atributo, "Densidade Populacional");
                break;
            case 6:
                v1 = PIB_per_capita1;
                v2 = PIB_per_capita2;
                sprintf(nome_atributo, "PIB per capita");
                break;
            case 7:
                v1 = Super_Poder1;
                v2 = Super_Poder2;
                sprintf(nome_atributo, "Super Poder");
                break;
        }

        printf("\n--- Atributo %d: %s ---\n", i + 1, nome_atributo);
        printf("%s: %.2f\n", nome_cidade1, v1);
        printf("%s: %.2f\n", nome_cidade2, v2);

        if (atributo == 5) {
            // Regra especial: menor densidade vence
            if (v1 < v2)
                printf("=> %s venceu neste atributo (menor densidade).\n", nome_cidade1);
            else if (v1 > v2)
                printf("=> %s venceu neste atributo (menor densidade).\n", nome_cidade2);
            else
                printf("=> Empate neste atributo.\n");
        } else {
            if (v1 > v2)
                printf("=> %s venceu neste atributo.\n", nome_cidade1);
            else if (v1 < v2)
                printf("=> %s venceu neste atributo.\n", nome_cidade2);
            else
                printf("=> Empate neste atributo.\n");
        }

        soma_carta1 += v1;
        soma_carta2 += v2;
    }

    // Exibe resultado final
    printf("\n===== RESULTADO FINAL =====\n");
    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", nome_cidade1, soma_carta1);
    printf("%s: %.2f\n", nome_cidade2, soma_carta2);

    if (soma_carta1 > soma_carta2)
        printf("\n>>> %s venceu a rodada!\n", nome_cidade1);
    else if (soma_carta1 < soma_carta2)
        printf("\n>>> %s venceu a rodada!\n", nome_cidade2);
    else
        printf("\n>>> Empate!\n");

    printf("\nDeseja jogar novamente? (1 - Sim / 0 - Não): ");
    scanf("%d", &opcao);

} while (opcao == 1);


    return 0;
}
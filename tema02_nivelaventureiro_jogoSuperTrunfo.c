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
    float Super_Poder1, Super_poder2;
    int opcao;
    

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
    Super_poder2 = (float) populacao2 + area2 + pib_2 + (float) pontos_turisticos2 + PIB_per_capita2 + (1.0 / densidade_populacional2);

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
    printf("10. Super Poder: %.2f\n", Super_poder2);

    printf("\n");
    
    // Menu interativo para comparação de atributos:

    do
    {
        printf("=== MENU PRINCIPAL - COMPARAÇÃO DE ATRIBUTOS\n");
        printf("Escolha um atributo para ser comparado:\n");
        printf("1. População;\n");
        printf("2. Área;\n");
        printf("3. PIB;\n");
        printf("4. Número de pontos turísticos;\n");
        printf("5. Densidade Populacional;\n");
        printf("6. PIB per capita;\n");
        printf("7. Super Poder\n");
        printf("8. Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcao);

        switch (opcao)
    {
    case 1:
        printf("\n");
        printf("*** ATRIBUTO ESCOLHIDO: POPULAÇÃO\n");

        printf("Carta 1 - %s (%c): %d\n", nome_cidade1, letra_estado1, populacao1);
        printf("Carta 2 - %s (%c): %d\n", nome_cidade2, letra_estado2, populacao2);

        if (populacao1 > populacao2)
        {
            printf("Carta 1 (%s) venceu!\n", nome_cidade1);
        } else if (populacao1 < populacao2)
        {
            printf("Carta 2 (%s) venceu!\n", nome_cidade2);
        } else{
            printf("As cartas possuem a mesma população\n");
        }      
        
        printf("\n");
        break;
    case 2:
        printf("\n");
        printf("*** ATRIBUTO ESCOLHIDO: ÁREA\n");

        printf("Carta 1 - %s (%c): %.2f\n", nome_cidade1, letra_estado1, area1);
        printf("Carta 2 - %s (%c): %.2f\n", nome_cidade2, letra_estado2, area2);

        if (area1 > area2)
        {
            printf("Carta 1 (%s) venceu!\n", nome_cidade1);
        } else if (area1 < area2)
        {
            printf("Carta 2 (%s) venceu!\n", nome_cidade2);
        } else{
            printf("As cartas possuem a mesma área\n");
        }      
        printf("\n");
        break;
    
    case 3:
        printf("\n");
        printf("*** ATRIBUTO ESCOLHIDO: PIB\n");

        printf("Carta 1 - %s (%c): %.2f\n", nome_cidade1, letra_estado1, pib_1);
        printf("Carta 2 - %s (%c): %.2f\n", nome_cidade2, letra_estado2, pib_2);

        if (pib_1 > pib_2)
        {
            printf("Carta 1 (%s) venceu!\n", nome_cidade1);
        } else if (pib_1 < pib_2)
        {
            printf("Carta 2 (%s) venceu!\n", nome_cidade2);
        } else{
            printf("As cartas possuem o mesmo PIB\n");
        }      
        printf("\n");
        break;

        
    case 4:
        printf("\n");
        printf("*** ATRIBUTO ESCOLHIDO: NÚMERO DE PONTOS TURISTICOS\n");

        printf("Carta 1 - %s (%c): %d\n", nome_cidade1, letra_estado1, pontos_turisticos1);
        printf("Carta 2 - %s (%c): %d\n", nome_cidade2, letra_estado2, pontos_turisticos2);

        if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("Carta 1 (%s) venceu!\n", nome_cidade1);
        } else if (pontos_turisticos1 < pontos_turisticos2)
        {
            printf("Carta 2 (%s) venceu!\n", nome_cidade2);
        } else{
            printf("As cartas possuem o mesmo número de pontos turísticos\n");
        }      
        printf("\n");
        break;

    case 5:
        printf("\n");
        printf("*** ATRIBUTO ESCOLHIDO: DENSIDADE POPULACIONAL\n");

        printf("Carta 1 - %s (%c): %.2f\n", nome_cidade1, letra_estado1, densidade_populacional1);
        printf("Carta 2 - %s (%c): %.2f\n", nome_cidade2, letra_estado2, densidade_populacional2);

        if (densidade_populacional2 > densidade_populacional1)
        {
            printf("Carta 1 (%s) venceu!\n", nome_cidade1);
        } else if (densidade_populacional2 < densidade_populacional1)
        {
            printf("Carta 2 (%s) venceu!\n", nome_cidade2);
        } else{
            printf("As cartas possuem a mesma densidade populacional\n");
        }      
        printf("\n");
        break;

    case 6:
        printf("\n");
        printf("*** ATRIBUTO ESCOLHIDO: PIB PER CAPITA\n");
        printf("Carta 1 - %s (%c): %.2f\n", nome_cidade1, letra_estado1, PIB_per_capita1);
        printf("Carta 2 - %s (%c): %.2f\n", nome_cidade2, letra_estado2, PIB_per_capita2);

        if (PIB_per_capita1 > PIB_per_capita2)
        {
            printf("Carta 1 (%s) venceu!\n", nome_cidade1);
        } else if (PIB_per_capita1 < PIB_per_capita2)
        {
            printf("Carta 2 (%s) venceu!\n", nome_cidade2);
        } else{
            printf("As cartas possuem o mesmo PIB_per_capita\n");
        }      
        printf("\n");
        break;

    case 7:
        printf("\n");
        printf("*** ATRIBUTO ESCOLHIDO: SUPER PODER\n");
        printf("Carta 1 - %s (%c): %.2f\n", nome_cidade1, letra_estado1, Super_Poder1);
        printf("Carta 2 - %s (%c): %.2f\n", nome_cidade2, letra_estado2, Super_poder2);

        if (Super_Poder1 > Super_poder2)
        {
            printf("Carta 1 (%s) venceu!\n", nome_cidade1);
        } else if (Super_Poder1 < Super_poder2)
        {
            printf("Carta 2 (%s) venceu!\n", nome_cidade2);
        } else{
            printf("As cartas possuem o mesmo Super Poder\n");
        }      
        printf("\n");
        break;

    case 8:
        printf("\n");
        printf("*** SAINDO DO PROGRAMA\n");
        printf("\n");
        break;
    
    default:

        printf("Opção inválida!\n");
        break;
    }

    } while (opcao != 8);
    
    printf("\n");
    
    
   
    

    return 0;
}
#include <stdio.h>

int main(){

    char pais1[50], pais2[50], codigocarta1[50], codigocarta2[50], nomedacidade1[50], nomedacidade2[50]; 
    unsigned long int populacaocarta1, populacaocarta2;
    int numerodepontosturisticoscarta1, numerodepontosturisticoscarta2; 
    float areacarta1, pibcarta1, areacarta2, pibcarta2, densidadedemografica1, densidadedemografica2;
    float pibpercapita1, pibpercapita2, superpodercarta1, superpodercarta2;

    populacaocarta1 = 500000;
    populacaocarta2 = 50000;

    printf("Desafio Nível Aventureiro - Tema 2 - Super Trunfo\n\n");
    
    printf("Olá! Seja Bem-Vindo ao Game Super Trunfo Países\nPor gentileza, insira os dados da Carta 01:\n\n");

    printf("País: ");
    scanf(" %[^\n]", pais1);    
    printf("Código da Carta: ");
    scanf(" %[^\n]", codigocarta1);    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomedacidade1);    
    printf("Área (em Km²): ");
    scanf("%f", &areacarta1);    
    printf("PIB: ");
    scanf("%f", &pibcarta1);    
    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &numerodepontosturisticoscarta1);

    densidadedemografica1 = (float)populacaocarta1 / areacarta1;
    pibpercapita1 = pibcarta1 / (float)populacaocarta1;
    superpodercarta1 = (float)(populacaocarta1 + areacarta1 + pibcarta1 + numerodepontosturisticoscarta1 
        + pibpercapita1 + densidadedemografica1);

    printf("\nAgora, por gentileza, insira os dados da carta 02\n\n");

    printf("País: ");
    scanf(" %[^\n]", pais2);    
    printf("Código da Carta: ");
    scanf(" %[^\n]", codigocarta2);    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomedacidade2);    
    printf("Área (em Km²): ");
    scanf("%f", &areacarta2);    
    printf("PIB: ");
    scanf("%f", &pibcarta2);    
    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &numerodepontosturisticoscarta2);

    densidadedemografica2 = (float)populacaocarta2 / areacarta2;
    pibpercapita2 = pibcarta2 / (float)populacaocarta2;
    superpodercarta2 = (float)(populacaocarta2 + areacarta2 + pibcarta2 + numerodepontosturisticoscarta2 
        + pibpercapita2 + densidadedemografica2);

    printf("\n\n****************************************************************\n\n");

    printf("CARTA 01: \n\n");
    printf("País: %s\n", pais1);
    printf("Código da Carta: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %lu\n", populacaocarta1);
    printf("Área:  %.2f Km²\n", areacarta1);
    printf("PIB: %.2f Bilhões de Reais\n", pibcarta1);
    printf("Nº Pontos Turísticos: %d\n", numerodepontosturisticoscarta1);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidadedemografica1);
    printf("PIB per capita: %.2f reais por pessoa\n", pibpercapita1);

    printf("\n\n****************************************************************\n\n");

    printf("CARTA 02: \n\n");
    printf("País: %s\n", pais2);
    printf("Código da Carta: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %lu\n", populacaocarta2);
    printf("Área:  %.2f Km²\n", areacarta2);
    printf("PIB: %.2f Bilhões de Reais\n", pibcarta2);
    printf("Nº Pontos Turísticos: %d\n", numerodepontosturisticoscarta2);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidadedemografica2);
    printf("PIB per capita: %.2f reais por pessoa\n\n", pibpercapita2);

    // Criação do Menu interativo para comparar os atributos
    int opcao;
    printf("\n******************** MENU DE COMPARAÇÃO ********************\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Nº de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (vence o menor)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nAguarde. Realizando comparação %s (%s) vs %s (%s):\n", nomedacidade1, pais1, nomedacidade2, pais2);

    switch(opcao){
        case 1:
            printf("\nAtributo: População\n");
            printf("%s: %lu habitantes\n", nomedacidade1, populacaocarta1);
            printf("%s: %lu habitantes\n", nomedacidade2, populacaocarta2);
            if (populacaocarta1 > populacaocarta2) {
                printf("Resultado: %s venceu!\n", nomedacidade1);
            } else if (populacaocarta2 > populacaocarta1) {
                printf("Resultado: %s venceu!\n", nomedacidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("\nAtributo: Área\n");
            printf("%s: %.2f km²\n", nomedacidade1, areacarta1);
            printf("%s: %.2f km²\n", nomedacidade2, areacarta2);
            if (areacarta1 > areacarta2) {
                printf("Resultado: %s venceu!\n", nomedacidade1);
            } else if (areacarta2 > areacarta1) {
                printf("Resultado: %s venceu!\n", nomedacidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("\nAtributo: PIB\n");
            printf("%s: %.2f bilhões\n", nomedacidade1, pibcarta1);
            printf("%s: %.2f bilhões\n", nomedacidade2, pibcarta2);
            if (pibcarta1 > pibcarta2) {
                printf("Resultado: %s venceu!\n", nomedacidade1);
            } else if (pibcarta2 > pibcarta1) {
                printf("Resultado: %s venceu!\n", nomedacidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("\nAtributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nomedacidade1, numerodepontosturisticoscarta1);
            printf("%s: %d pontos\n", nomedacidade2, numerodepontosturisticoscarta2);
            if (numerodepontosturisticoscarta1 > numerodepontosturisticoscarta2) {
                printf("Resultado: %s venceu!\n", nomedacidade1);
            } else if (numerodepontosturisticoscarta2 > numerodepontosturisticoscarta1) {
                printf("Resultado: %s venceu!\n", nomedacidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("\nAtributo: Densidade Demográfica (MENOR vence)\n");
            printf("%s: %.2f hab/km²\n", nomedacidade1, densidadedemografica1);
            printf("%s: %.2f hab/km²\n", nomedacidade2, densidadedemografica2);
            if (densidadedemografica1 < densidadedemografica2) {
                printf("Resultado: %s venceu!\n", nomedacidade1);
            } else if (densidadedemografica2 < densidadedemografica1) {
                printf("Resultado: %s venceu!\n", nomedacidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Reinicie o programa.\n");
    }

    return 0;
}
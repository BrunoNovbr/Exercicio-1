#include <stdio.h>
 
int main() {
    char estado[3], codigo[4], cidade[30];
    int populacao, numPontosTuristicos;
    float area, pib, densidadepop, pibpercapta;

    printf("Insira os dados da carta 1. \n\n"); /*Usuário insere dados da Carta 1*/

    printf("Estado: \n");
    scanf("%s", estado);

    printf("Código: \n");
    scanf("%s", codigo);

    printf("Cidade (Escreva junto): \n");
    scanf("%s", cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Area: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &numPontosTuristicos);

    /*Calculo da Densidade Populacional e PIB per capta.*/

    densidadepop = populacao / area;

    pibpercapta = populacao / pib;

    printf("Obrigado, a primeira cara é: \n"); /*Programa mostra os dados da Carta 1*/

    printf("\n Carta 1: \n");

    printf("Estado: %s \n", estado);
    printf("Código: %s%s \n", estado, codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Numero de Pontos Turisticos: %d \n", numPontosTuristicos);
    printf("Desindade Populacional: %.2f hab/km² \n", densidadepop);
    printf("PIB per capta: %.2f reais \n", pibpercapta);

    printf("\nInsira os dados da carta 2. \n\n"); /*Usuário insere dados da Carta 2*/

    printf("Estado: \n");
    scanf("%s", estado);

    printf("Código: \n");
    scanf("%s", codigo);

    printf("Cidade (Escrava junto): \n");
    scanf("%s", cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Area: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &numPontosTuristicos);

    /*Calculo da Densidade Populacional e PIB per capta.*/

    densidadepop = populacao / area;

    pibpercapta = populacao / pib;

    printf("Obrigado, a segunda cara é: \n"); /*Programa mostra os dados da Carta 2*/

    printf("\n Carta 2: \n");

    printf("Estado: %s \n", estado);
    printf("Código: %s%s \n", estado, codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f km² \n", area);
    printf("PIB: %f \n", pib);
    printf("Numero de Pontos Turisticos: %d \n", numPontosTuristicos);
    printf("Desindade Populacional: %.2f hab/km² \n", densidadepop);
    printf("PIB per capta: %.2f reais \n", pibpercapta);
    return 0;

}

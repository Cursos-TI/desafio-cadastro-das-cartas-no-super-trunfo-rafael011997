#include <stdio.h>

int main(){
    char estado[10],estado2[10];
    char codigodecarta[50], codigodecarta2[50];
    char nomedacidade[50], nomedacidade2[50];
    int populacao, populacao2;
    float areaemkm, areaemkm2;
    float pib, pib2;
    int numerodeposntosturistico, numerodeposntosturistico2;

    printf("***JOGO SUPER TRUNFO***\n");
    printf("entre com a Carta 01\n");
    printf("Entre com Estado (A-H):\n");
    scanf("%s", &estado);
    printf("Codigo da Carta(ex: A01, B03):\n");
    scanf("%s", &codigodecarta);
    printf("Nome da Cidade:\n");
    scanf("%s", &nomedacidade);
    printf("População:\n");
    scanf("%d", &populacao);
    printf("Área (em km²):\n");
    scanf("%f", &areaemkm);
    printf("PIB:\n");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &numerodeposntosturistico);
    
    printf("entre com a Carta 02\n");
    printf("Entre com Estado (A-H):\n");
    scanf("%s", &estado2);
    printf("Código da Carta(ex: A01, B03):\n");
    scanf("%s", &codigodecarta2);
    printf("Nome da Cidade:\n");
    scanf("%s", &nomedacidade2);
    printf("População:\n");
    scanf("%d", &populacao2);
    printf("Área (em km²):\n");
    scanf("%f", &areaemkm2);
    printf("PIB:\n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &numerodeposntosturistico2);

    printf("\n");

    printf("Carta 1:\n");
    printf("Estado: %s \nCódigo da Carta: %s\n", estado, codigodecarta);
    printf("Nome da Cidade: %s \nPopulação: %d\n", nomedacidade, populacao);
    printf("Área em km²: %f\nPIB: %f\n",areaemkm, pib); 
    printf("Número de Pontos Turísticos: %d\n", numerodeposntosturistico);
    
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %s \nCódigo da Carta: %s\n", estado2, codigodecarta2);
    printf("Nome da Cidade: %s \nPopulação: %d\n", nomedacidade2, populacao2);
    printf("Área em km²: %f\nPIB: %f\n",areaemkm2, pib2); 
    printf("Número de Pontos Turísticos: %d\n", numerodeposntosturistico2);
    
    return 0;
}
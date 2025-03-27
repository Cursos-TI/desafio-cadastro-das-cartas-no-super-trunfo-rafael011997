#include <stdio.h>

int main(){
    char Estado [10], estado2[50];
    char Codigocarta[25], codigocarta2[40]; 
    char Nomecidade[100], nomecidade2[90];
    int Populacao, populacao2;
    float Area, area2;
    float PIB, pib2;
    int Numeroturisticos, numeroturistico2;


    printf("digita o Estado carta 1\n");
    scanf ("%s", &Estado);
    printf ("digite o Estado Carta 2\n");
    scanf ("%s", &estado2);

    printf ("digite codigo carta 1\n");
    scanf ("%s", &Codigocarta);
    printf ("digite codigo Carta 2\n");
    scanf ("%s", &codigocarta2);

    printf ("digita Nome da Cidade carta 1\n");
    scanf ("%s", &Nomecidade);
    printf ("digite Nome da Cidade Carta 2\n");
    scanf ("%s", &nomecidade2);

    printf ("digita a Populacao carta 1\n");
    scanf ("%d", &Populacao);
    printf ("digite a Populacao Carta 2\n");
    scanf ("%d", &populacao2);

    printf ("digita a area carta 1\n");
    scanf ("%f", &Area);
    printf ("digite a area Carta 2\n");
    scanf ("%f", &area2);

    printf ("digita PIB carta 1\n");
    scanf ("%f", &PIB);
    printf ("digite PIB Carta 2\n");
    scanf ("%f", &pib2);

    printf ("digita Numero Turistico carta 1\n");
    scanf ("%i", &Numeroturisticos);
    printf ("digite Numero Turistico Carta 2\n");
    scanf ("%i", &numeroturistico2);

    if ( Estado > estado2){
        printf ("a carta 1 e maior que a carta 2\n");
    }else{
        printf ("a carta 2 e maior que a carta 1\n");
    }
    if ( Codigocarta > codigocarta2){
        printf ("a carta 1 e maior que a carta 2\n");
    }else{
        printf ("a carta 2 e maior que a carta 1\n");
    }
    if ( Nomecidade > nomecidade2){
        printf ("a carta 1 e maior que a carta 2\n");
    }else{
        printf ("a carta 2 e maior que a carta 1\n");
    }
    if ( Populacao > populacao2){
        printf ("a carta 1 e maior que a carta 2\n");
    }else{
        printf ("a carta 2 e maior que a carta 1\n");
    }
    if ( Area > area2){
        printf ("a carta 1 e maior que a carta 2\n");
    }else{
        printf ("a carta 2 e maior que a carta 1\n");
    }
    if ( PIB > pib2){
        printf ("a carta 1 e maior que a carta 2\n");
    }else{
        printf ("a carta 2 e maior que a carta 1\n");
    }
    if ( Numeroturisticos > numeroturistico2){
        printf ("a carta 1 e maior que a carta 2\n");
    }else{
        printf ("a carta 2 e maior que a carta 1\n");
    }

    return 0;
}
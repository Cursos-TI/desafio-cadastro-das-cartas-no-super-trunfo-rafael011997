#include <stdio.h>

int main(){

    char ncarta = 1;                                               
    char estado = 'A';                                   
    char carta[50] = "A01";                               
    char cidade[20] = "Niterói";                         
    int populacao = 749;                                  
    float area = 133.757;                                
    float pib = 128.333;                                 
    int turismo = 8;                                     
    
    printf("Carta: %i\n", ncarta);
    printf("Estado: %c\nCódigo: %s\n", estado, carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacão: 481.%i\nÁrea: %.3fKm²\n", populacao, area);
    printf("PIB: R$%.3f bilhões de reais\nNúmero de Pontos Turístico: %i", pib, turismo);

    printf("\n");

    char Ncarta = 2;
    char Estado = 'B';
    char Carta[40] = "B02";
    char Cidade[50] = "Macaé";
    int Populacao = 138;
    float Area = 1.216;
    float Pib = 66.684;
    int Turismo = 10;

    printf("\n");
    printf("Carta: %i\n", Ncarta);
    printf("Estado: %c\nCódigo: %s\n", Estado, Carta);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("Populacão: 264.%i\nÁrea: %.3fKm²\n", Populacao, Area);
    printf("PIB: R$%.3f bilhões de reais\nNúmero de Pontos Turístico: %i", Pib, Turismo);
   
   return 0;
}
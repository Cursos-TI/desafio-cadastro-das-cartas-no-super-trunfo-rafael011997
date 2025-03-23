#include <stdio.h>

int main(){
    
    printf("***SUPER TRUNFO***\n");

    char ncarta = 1;                                               
    char estado = 'A';                                   
    char carta[50] = "A01";                               
    char cidade[20] = "Niterói";                         
    unsigned long int populacao = 481749;                                  
    float area = 133.757;  //Area da cidade                               
    float pib = 128.333;                                 
    int turismo = 8; 
    float media = populacao / area;  ///densidadde populacional (float)
    float media1 = populacao / pib ;  ///PIB per capital (float)                               
    float superpoder = populacao + area + pib + turismo +  media + media1;

    printf("\n");
    printf("Carta: %i\n", ncarta);
    printf("Estado: %c\nCódigo: %s\n", estado, carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacão: %i\nÁrea: %.3fKm²\n", populacao, area);
    printf("PIB: R$%.3f bilhões de reais\nNúmero de Pontos Turístico: %i\n", pib, turismo);
    printf("Densidade Populacional: %.2f hab/km²\n", media);
    printf("PIB per Capita: %.2f Reais\n", media1);
    printf("super Poder %.2f\n", superpoder);
    
    printf("\n");
    
    char Ncarta = 2;
    char Estado = 'B';
    char Carta[40] = "B02";
    char Cidade[50] = "Macaé";
    unsigned long int Populacao = 246391;
    float Area = 1.216;   //Area da cidade
    float Pib = 66.684; 
    int Turismo = 10;
    float Media = Populacao / Area;  ///densidadde populacional (float)
    float Media1 = Populacao / Pib ;  ///PIB per capital (float)
    float Superpoder = Populacao + Area + Pib + Turismo +  Media + Media1;

    printf("\n");
    printf("Carta: %i\n", Ncarta);
    printf("Estado: %c\nCódigo: %s\n", Estado, Carta);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("Populacão: %i\nÁrea: %.3fKm²\n", Populacao, Area);
    printf("PIB: R$%.3f bilhões de reais\nNúmero de Pontos Turístico: %i\n", Pib, Turismo);
    printf("Densidade Populacional: %.2f hab/km²\n", Media);
    printf("PIB per Capita: %.2f Reais\n", Media1);
    printf("super Poder %.2f\n", Superpoder);

    printf("\n");
    printf("***Comparação de Cartas***");
    printf("\n");

   // char resultado1 = populacao > Populacao;
   // char resultado2 = area > Area;
   // char resultado3 = pib > Pib;
  //  char resultado4 = turismo > Turismo;
  //  char resultado5 = media > Media;
 //   char resultado6 = media1 > Media1;
  //  char resultado7 = superpoder > Superpoder;


   // printf("Populacao: Carta 1 Venceu (%u)\n", resultado1);
   // printf("Area: carta 1 Venceu (%u)\n", resultado2);
   // printf("PIB: Carta 1 Venceu (%u)\n", resultado3);
   // printf("Ponto Turistico: Carta 2 Venceu(%u)\n", resultado4);
   // printf("Densidade Populacional: Carta 2 Venceu  (%u)\n", resultado5);
   // printf("PIB per capital: carta 1 Venceu(%u)\n", resultado6);
   // printf("Super Poder: carta 1 Venceu(%u)\n", resultado7);

   printf ("Populacao: carta %i venceu (%u)\n", (ncarta) , (populacao > Populacao));
   printf ("Área: carta %i venceu (%u)\n", (ncarta) , (area > Area));
   printf ("PIB: carta %i venceu (%u)\n", (ncarta) , (pib > Pib));
   printf ("Ponto Turistico: carta %i venceu (%u)\n", (Ncarta) , (turismo > Turismo));
   printf ("Densidade Populacional: carta %i venceu (%u)\n", (ncarta) , (media < Media));
   printf ("PIB per capital: carta %i venceu (%u)\n", (ncarta) , (media1 > Media1));
   printf ("Super Poder: carta %i venceu (%u)\n", (ncarta) , (superpoder > Superpoder));

   return 0;
}
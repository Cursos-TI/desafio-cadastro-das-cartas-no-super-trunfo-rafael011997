#include <stdio.h>

int main(){
    
    printf("***SUPER TRUNFO***\n");

    char ncarta = 1;                                               
    char estado = 'A';                                   
    char carta[50] = "A01";                               
    char cidade[20] = "Niterói";                         
    int populacao = 481749;                                  
    float area = 133.757;  //Area da cidade                               
    float pib = 128.333;                                 
    int turismo = 8; 
    float media = populacao / area;  ///densidadde populacional (float)
    float media1 = populacao / pib ;  ///PIB per capital (float)                               
   

    printf("\n");
    printf("Carta: %i\n", ncarta);
    printf("Estado: %c\nCódigo: %s\n", estado, carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacão: %i\nÁrea: %.3fKm²\n", populacao, area);
    printf("PIB: R$%.3f bilhões de reais\nNúmero de Pontos Turístico: %i\n", pib, turismo);
    printf("Densidade Populacional: %.2f hab/km²\n", media);
    printf("PIB per Capita: %.2f Reais\n", media1);
    
    printf("\n");
    
    char Ncarta = 2;
    char Estado = 'B';
    char Carta[40] = "B02";
    char Cidade[50] = "Macaé";
    int Populacao = 246391;
    float Area = 1.216;   //Area da cidade
    float Pib = 66.684; 
    int Turismo = 10;
    float Media = Populacao / Area;  ///densidadde populacional (float)
    float Media1 = Populacao / Pib ;  ///PIB per capital (float)
    
    
    printf("\n");
    printf("Carta: %i\n", Ncarta);
    printf("Estado: %c\nCódigo: %s\n", Estado, Carta);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("Populacão: %i\nÁrea: %.3fKm²\n", Populacao, Area);
    printf("PIB: R$%.3f bilhões de reais\nNúmero de Pontos Turístico: %i\n", Pib, Turismo);
    printf("Densidade Populacional: %.2f hab/km²\n", Media);
    printf("PIB per Capita: %.2f Reais\n", Media1);

    
    


   



    //populacao/are da cidade           densidade populacional (float)
    //pib/ pela pupulacao                 pib per capital (float)
   return 0;
}
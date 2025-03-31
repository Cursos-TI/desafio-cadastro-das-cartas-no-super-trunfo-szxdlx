#include <stdio.h>

int main(){
    char codigo[50], codigo2[50], nome[50], nome2[50];
    char estado, estado2;
    int populacao, populacao2, turismo, turismo2;
    float area, area2, pib, pib2;

    printf("\nCarta 1\n");
    
    printf("Qual será o código da carta: \n");
        scanf("%s", codigo);
           
    printf("Estado: \n");
        scanf(" %c", &estado);
    
    printf("Nome da cidade: \n");
        scanf("%s", nome);
        
    printf("População: \n");
        scanf("%d", &populacao);
           
    printf("Pontos de turismo: \n");
        scanf("%d", &turismo);
           
    printf("Area: \n");
        scanf("%f", &area);
          
    printf("Pib: \n");
        scanf("%f", &pib); 

    printf("---------------\n");
    printf("Carta 2\n");
    
    printf("Qual será o código da carta: \n");
        scanf("%s", codigo2);
               
    printf("Estado: \n");
        scanf(" %c", &estado2);
        
    printf("Nome da cidade: \n");
        scanf("%s", nome2);
            
    printf("População: \n");
        scanf("%d", &populacao2);
               
    printf("Pontos de turismo: \n");
        scanf("%d", &turismo2);
               
    printf("Area: \n");
        scanf("%f", &area2);
              
    printf("Pib: \n");
        scanf("%f", &pib2); 
    
    printf("---------------\n");

    printf("\nCarta 1\n");
    printf("Codigo: %s\n", codigo);
    printf("Estado: %c\n", estado);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Pontos de turismo: %d\n", turismo);
    printf("Área: %.0f km²\n", area);
    printf("Pib: %.0f bilhões de reais\n", pib);

    printf("---------------\n");

    printf("\nCarta 2\n");
    printf("Codigo: %s\n", codigo2);
    printf("Estado: %c\n", estado2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Pontos de turismo: %d\n", turismo2);
    printf("Área: %.0f km²\n", area2);
    printf("Pib: %.0f bilhões de reais\n", pib2);

    return 0;

    }

#include <stdio.h>

int main(){
    char codigo[50], codigo2[50], nome[50], nome2[50];
    char estado, estado2;
    int populacao, populacao2, turismo, turismo2;
    float area, area2, pib, pib2;
    float densidade, densidade2, pibcapta, pibcapta2;

    printf("\nCarta 1\n");
    
    printf("Qual será o código da carta: \n");
        scanf("%s", codigo);
           
    printf("Estado: \n");
        scanf(" %c", &estado);
    
    printf("Cidade: \n");
        scanf("%s", nome);
        
    printf("População: \n");
        scanf("%d", &populacao);
           
    printf("Pontos de turismo: \n");
        scanf("%d", &turismo);
           
    printf("Area em km²: \n");
        scanf("%f", &area);
          
    printf("Pib: \n");
        scanf("%f", &pib); 

    printf("---------------\n");
    printf("Carta 2\n");
    
    printf("Qual será o código da carta: \n");
        scanf("%s", codigo2);
               
    printf("Estado: \n");
        scanf(" %c", &estado2);
        
    printf("Cidade: \n");
        scanf("%s", nome2);
            
    printf("População: \n");
        scanf("%d", &populacao2);
               
    printf("Pontos de turismo: \n");
        scanf("%d", &turismo2);
               
    printf("Area em km²: \n");
        scanf("%f", &area2);
              
    printf("Pib: \n");
        scanf("%f", &pib2); 

        pibcapta = pib / populacao;
        pibcapta2 = pib2 / populacao2;
    
        densidade = populacao / area;
        densidade2 = populacao2 / area2;
    
    printf("---------------\n");

    printf("\nCarta 1\n");
    printf("Codigo: %s\n", codigo);
    printf("Estado: %c\n", estado);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Pontos de turismo: %d\n", turismo);
    printf("Área: %.0f km²\n", area);
    printf("Pib: %.0f bilhões de reais\n", pib);
    printf("A densidade populacional é de: %.0f hab/km²\n", densidade);
    printf("O pib per capta é: R$%.2f\n", pibcapta);

    printf("---------------\n");

    printf("\nCarta 2\n");
    printf("Codigo: %s\n", codigo2);
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Pontos de turismo: %d\n", turismo2);
    printf("Área: %.0f km²\n", area2);
    printf("Pib: %.0f bilhões de reais\n", pib2);
    printf("A densidade populacional é de: %0.f hab/km²\n", densidade2);
    printf("O pib per capta é: R$%.2f\n", pibcapta2); 

    return 0;

    }

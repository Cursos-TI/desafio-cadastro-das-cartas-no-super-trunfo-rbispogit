#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Declaração das variáveis
    char state1, state2; char code1[5], code2[5]; 
    char city1[50], city2[50];
    int population1, population2; int touristSpot1, touristSpot2;
    float area1, area2; float pib1, pib2;
    float popDensity1, popDensity2;
    float capita1, capita2;

    // Cadastro da primeira carta
    printf("#Enter first card atributes#\n");
    printf("State: ");
    scanf("%c", &state1);
    printf("Card code: ");
    scanf("%s", code1);
    printf("City: ");
    scanf("%s", city1);
    printf("Population: ");
    scanf("%d", &population1);
    printf("Area(km): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Number of tourist spots: ");
    scanf("%d", &touristSpot1);

    popDensity1 = (float) population1 / area1;
    capita1 =  (float) pib1 / population1;

    // Cadastro da segunda carta
    printf("\n#Enter second card atributes#\n");
    printf("State: ");
    scanf(" %c", &state2);
    printf("Card code: ");
    scanf("%s", code2);
    printf("City: ");
    scanf("%s", city2);
    printf("Population: ");
    scanf("%d", &population2);
    printf("Area(km): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Number of tourist spots: ");
    scanf("%d", &touristSpot2);

    popDensity2 = (float) population2 / area2;
    capita2 = (float) pib2 / population2;

    // Exibição das cartas
    printf("\n## CARD 01 ##\n");
    printf("State: %c\n", state1);
    printf("Card code: %s\n", code1);
    printf("City: %s\n", city1);
    printf("Population: %d\n", population1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f billions of reais\n", pib1);
    printf("Tourist Spots: %d\n", touristSpot1);
    printf("Populational density: %.2f inhabitant/km²\n", popDensity1);
    printf("PIB per Capita: %.2lf reais\n\n", capita1);

    printf("## CARD 02 ##\n");
    printf("State: %c\n", state2);
    printf("Card code: %s\n", code2);
    printf("City: %s\n", city2);
    printf("Population: %d\n", population2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f billions of reais\n", pib2);
    printf("Tourist Spots: %d\n", touristSpot2);
    printf("Populational density: %.2f inhabitant/km²\n", popDensity2);
    printf("PIB per Capita: %.2lf reais\n\n", capita2);



    return 0;
}

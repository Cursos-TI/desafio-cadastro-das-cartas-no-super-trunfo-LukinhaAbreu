#include <stdio.h>

int main(){
    char estado [20]; 
    char codigo [5]; //Ex. A01, A02...
    char cidade [20]; //Nome da cidade.
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("Bem vindo ao jogo Super Trunfo! \n");

    printf("Digite seu estado: \n");
    scanf("%s", &estado);

    printf("Codigo: \n");
    scanf("%s", &codigo);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("Quantos habitantes: \n");
    scanf("%d", &populacao);

    printf("Area: \n");
    scanf("%f", &area);

    printf("pib: \n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Carta 1! \n");
    printf("Estado: %s \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("cidade: %s \n", cidade);
    printf("Habitantes: %d \n", populacao);
    printf("Area: %f \n", area);
    printf("Pib: %f \n", pib);
    printf("Pontos turisticos: %d \n", pontosturisticos);

    printf("Cadastro Carta 2! \n");

    printf("Digite seu estado: \n");
    scanf("%s", &estado);

    printf("Codigo: \n");
    scanf("%s", &codigo);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("Quantos habitantes: \n");
    scanf("%d", &populacao);

    printf("Area: \n");
    scanf("%f", &area);

    printf("pib: \n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Carta 2! \n");
    printf("Estado: %s \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("cidade: %s \n", cidade);
    printf("Habitantes: %d \n", populacao);
    printf("Area: %f \n", area);
    printf("Pib: %f \n", pib);
    printf("Pontos turisticos: %d \n", pontosturisticos);

return 0;


}

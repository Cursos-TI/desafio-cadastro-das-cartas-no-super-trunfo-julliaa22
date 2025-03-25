#include <stdio.h>
#include <stdlib.h>

// Função para gerar um número aleatório entre 1 e 4
int getRandomNumber()
{
    return (rand() % 4) + 1;
}

int main()
{
    char estado, codigoCarta[5], nomeCidade[50];
    char estado2, codigoCarta2[5], nomeCidade2[50];
    int populacao, pontosTuristicos, randomNumber;
    int populacao2, pontosTuristicos2, randomNumber2;
    float area, pib;
    float area2, pib2;

    randomNumber = getRandomNumber();
    randomNumber2 = getRandomNumber();

    // Leitura da primeira cidade
    printf("Insira uma sigla de Estado (A até H) para a primeira cidade: \n");
    scanf(" %c", &estado);  // Usar espaço antes de %c para garantir que leia a sigla corretamente
    printf("Insira o nome da primeira cidade: \n");
    getchar();  // Limpar o buffer de entrada do caractere '\n'
    scanf("%[^\n]s",nomeCidade);
    printf("Insira a população da primeira cidade: \n");
    scanf("%d", &populacao);
    printf("Insira a área da primeira cidade km²: \n");
    scanf("%f", &area);
    printf("Insira o PIB da primeira cidade: \n");
    scanf("%f", &pib);
    printf("Insira quantos pontos turísticos a primeira cidade tem: \n");
    scanf("%d", &pontosTuristicos);

    // Leitura da segunda cidade
    printf("\nInsira uma sigla de Estado (A até H) para a segunda cidade: \n");
    scanf(" %c", &estado2);  // Usar espaço antes de %c para garantir que leia a sigla corretamente
    getchar();  // Limpar o buffer de entrada do caractere '\n'
    printf("Insira o nome da segunda cidade: \n");
    scanf("%[^\n]s",nomeCidade2);
    printf("Insira a população da segunda cidade: \n");
    scanf("%d", &populacao2);
    printf("Insira a área da segunda cidade km²: \n");
    scanf("%f", &area2);
    printf("Insira o PIB da segunda cidade: \n");
    scanf("%f", &pib2);
    printf("Insira quantos pontos turísticos a segunda cidade tem: \n");
    scanf("%d", &pontosTuristicos2);

    // Exibindo os dados da primeira cidade
    printf("\nEstado da primeira cidade: %c\n", estado);
    printf("Código da Carta da primeira cidade: %c%02d\n", estado, randomNumber);
    printf("Nome da primeira cidade: %s\n", nomeCidade);
    printf("População da primeira cidade: %d\n", populacao);
    printf("Área da primeira cidade km²: %.2f\n", area);
    printf("PIB da primeira cidade: %.2f\n", pib);
    printf("Quantos pontos turísticos a primeira cidade tem: %d\n\n\n", pontosTuristicos);

    // Exibindo os dados da segunda cidade
    printf("Estado da segunda cidade: %c\n", estado2);
    printf("Código da Carta da segunda cidade: %c%02d\n", estado2, randomNumber2);
    printf("Nome da segunda cidade: %s\n", nomeCidade2);
    printf("População da segunda cidade: %d\n", populacao2);
    printf("Área da segunda cidade km²: %.2f\n", area2);
    printf("PIB da segunda cidade: %.2f\n", pib2);
    printf("Quantos pontos turísticos a segunda cidade tem: %d\n", pontosTuristicos2);

    return 0;
}

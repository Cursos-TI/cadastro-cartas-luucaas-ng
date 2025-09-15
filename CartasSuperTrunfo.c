#include <stdio.h>

int main () {
  char estado[2];
  char codigoCarta[4];
  char cidade[50];
  int populacao;
  float area;
  float pib;
  int pontosTuristicos;

  printf("Escolha uma letra de A a H para representar um dos Estados: \n");
  scanf(" %2s", estado);

  printf("Escolha um número de 01 a 04 para ser o código desse Estado: \n");
  scanf(" %3s", codigoCarta);

  printf("Qual o nome da cidade? \n");
  scanf("%s", cidade);

  printf("Quantos habitantes tem nessa cidade? \n");
  scanf("%d", &populacao);

  printf("Qual é a área da sua cidade? \n");
  scanf("%f", &area);

  printf ("Quanto esta avaliado o PIB da sua cidade? \n");
  scanf("%f", &pib);

  printf("Quantos pontos turisticos tem na sua cidade? \n");
  scanf("%d", &pontosTuristicos);

  printf("\nCarta 1:\n\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigoCarta);
  printf("Nome da Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

  return 0;




}
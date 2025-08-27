#include <stdio.h>

int main() {
printf("Desafio de Cartas Super Trunfo!\n");

printf("Carta 1\n");
char estado [30];
char codigo [5];
char cidade [30];
int populacao;
float area_em_km2;
float pib;
int pontos_Turisticos;
float densidade1 = populacao / area_em_km2;
float pibPerCapita1 = pib / populacao;
printf("Estado: \n");
scanf(" %[^\n]", estado);

printf("Código: \n");
scanf("%s", codigo);

printf("Nome da cidade: \n");
scanf(" %[^\n]", cidade);

printf("População: \n");
scanf("%d", &populacao);
while(getchar() != '\n'); // limpa o Enter

printf("Àrea em km²: \n");
scanf("%f",&area_em_km2);
while(getchar() != '\n'); // limpa o Enter

printf("PIB: \n");
scanf("%f", &pib);
while(getchar() != '\n'); // limpa o Enter


printf("Pontos Turísticos: \n");
scanf("%d", &pontos_Turisticos);
while(getchar() != '\n'); // limpa o Enter
//cáculo//
printf("Desindade populacional: %.2f \n", densidade1);

printf("PIb per capita: %.2f \n", pibPerCapita1);

printf("carta 2\n");
char estado2 [30];
char codigo2 [5];
char cidade2 [30];
int populacao2;
float area_em_km2_2;
float pib2;
int pontos_Turisticos2;
float densidade2 = populacao2 / area_em_km2_2;
float pibPerCapita2 = pib2 / populacao2;

printf("Estado: \n");
scanf(" %[^\n]", estado2);

printf("Código: \n");
scanf("%s", codigo2);

printf("Nome da cidade: \n");
scanf(" %[^\n]", cidade2);

printf("População: \n");
scanf("%d", &populacao2);
while(getchar() != '\n'); // limpa o Enter

printf("Àrea em km²: \n");
scanf("%f",&area_em_km2_2);
while(getchar() != '\n'); // limpa o Enter

printf("PIB: \n");
scanf("%f", &pib2);
while(getchar() != '\n'); // limpa o Enter


printf("Pontos Turísticos: \n");
scanf("%d", &pontos_Turisticos2);
while(getchar() != '\n'); // limpa o Enter

printf("Densidade populacional: %.2f \n", densidade2);
printf("Pib per capita: %.2f \n", pibPerCapita2);

return 0;
}

#include <stdio.h>

int main() {
printf("Desafio de Cartas Super Trunfo!\n");

printf("Carta 1\n");
char estado = 'C';
char codigo [4] = "R01";
char cidade [10] = "Goianinha";
int populacao = 10000;
float area_em_km2 = 192.279;
float pib = 546.576;
int pontos_Turisticos = 10;

printf("Estado: \n");
scanf(" %c", &estado);

printf("Código: \n");
scanf("%s", &codigo);

printf("Nome da cidade: \n");
scanf("%s", &cidade);

printf("População: \n");
scanf("%d", &populacao);

printf("Àrea em km²: \n");
scanf("%f",&area_em_km2);

printf("PIB: \n");
scanf("%f", &pib);

printf("Pontos Túriticos: \n");
scanf("%f", pontos_Turisticos);

printf("carta 2\n");
char estado2 = 'P';
char codigo2 [4] = "P02";
char cidade2 [10] = "recife";
int populacao2 = 159000;
float area_em_km2_2 = 230.358;
float Pib2 = 650.567;
int pontos_Turisticos2 = 35;




return 0;
}

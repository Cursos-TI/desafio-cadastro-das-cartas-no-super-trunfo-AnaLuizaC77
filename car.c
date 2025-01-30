#include <stdio.h>

int main(){

char estado[50];
int codigo;
char cidade[50];
float população;
float area;
float densidade;
float pib;
float pib2;
int turistico;

printf("Digite o código da carta: \n");
scanf("%d", codigo);

printf("Digite o estado da carta: \n");
scanf("%s", estado);

printf("Digite a cidade: \n");
scanf("%s", cidade);

printf("Digite a população: \n");
scanf("%f", população);

printf("Digite a área: \n");
scanf("%f", area);

printf("Digite a densidade \n");
scanf("%f", densidade);

printf("Digite o PIB: \n");
scanf("%f", pib);

printf("Digite o PIB per capita: \n");
scanf("%f", pib2);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", turistico);

//Resultados

printf("Código da carta: %d \n", codigo);
printf("Estado: %s \n", estado);
printf("Cidade: %s \n", cidade);
printf("Número de população: %f \n", população);
printf("Área: %f \n", area);
printf("Densidade: %f \n", densidade);
printf("PIB: %f \n", pib);
printf("PIB per capita %f \n", pib2);
printf("Número de pontos turísticos: %d \n", turistico);

return 0;

}
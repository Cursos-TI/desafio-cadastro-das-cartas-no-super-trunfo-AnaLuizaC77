#include <stdio.h>

int main(){

int codigo;
char pais[50];
char cidade[50];
float populacao;
float area;
double pib;
int pontosT;

printf("Codigo da carta: \n");
scanf("%d", &codigo);

printf("Digite o país: \n");
scanf("%s", &pais);

printf("Digite a cidade: \n");
scanf("%s", &cidade);

printf("População: \n");
scanf("%e", &populacao);

printf("Área: \n");
scanf("%f", &area);

printf("PIB: \n");
scanf("%e", &pib);

printf("Digite o número de pontos turisticos: \n");
scanf("%d", &pontosT);


//Resultado
printf("CODIGO DA CARTA: %d - PAÍS: %s - CIDADE: %s \n", codigo, pais, cidade);
printf("POPULAÇÃO: %e \n", populacao);
printf("ÁREA: %f \n", area);
printf("PIB: %e \n", pib);
printf("NÚMERO DE PONTOS TURISTICOS: %d", pontosT);

return 0;

}
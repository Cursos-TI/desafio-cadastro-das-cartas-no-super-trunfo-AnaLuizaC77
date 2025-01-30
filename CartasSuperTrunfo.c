#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main(){

//Variaveis

int codigo;
char estado;
char cidade;
float populacao;
float area;
float densidadeP;
float pib;
float pib2;
int pontosT;

//----------------------------------------------------------------------------------------------------


printf("Digite o cogigo da carta: \n");
scanf("%d", codigo);
//--------------------------------------
printf("Digite o estado: \n");
scanf("%s", estado);
//--------------------------------------
printf("Digite a cidade: \n");
scanf("%s", cidade);
//--------------------------------------
printf("Digite o número da população: \n");
scanf("%f", populacao);
//--------------------------------------
printf("Digite a área: \n");
scanf("%f", area);
//--------------------------------------
printf("Digite a densidade populacional: \n");
scanf("%f", densidadeP);
//--------------------------------------
printf("Digite o PIB: \n");
scanf("%f", pib);
//--------------------------------------
printf("Digite o PIB per capita: \n");
scanf("%f", pib2);
//--------------------------------------
printf("Digite o número de pontos turísticos: \n");
scanf("%d", pontosT);


//Resultados

printf("Codigo da carta: %d \n", codigo);
printf("Estado: %s \n", estado);
printf("Cidade: %s \n", cidade);
printf("População: %f \n", populacao);
printf("Área: %f \n", area);
printf("Densidade populacional: %f \n", densidadeP);
printf("PIB: %f \n", pib);
printf("PIB per capita: \n", pib2);
printf("Número de pontos turísticos: %d \n", pontosT);

//------------------------------------------------------

return 0

}
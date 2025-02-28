#include <stdio.h>

int main(){

//Variáves da carta número 01
char estado;
char idCidade[5];
char nomeCidade[50];
int populacao;
double area;
double pib;
int pontosTuristicos;

//----------------------------------------------------------------------------------------------
//Variáveis da carta número 02

char estado02;
char idCidade02[5];
char nomeCidade02[50];
int populacao02;
double area02;
double pib02;
int pontosTuristicos02;

//-------------------------------------------------------------------------------------------------

//Primeira carta.

//Entradas de dados.
printf("Seja bem vindo ao jogo super trunfo!!\n\n");
printf("\nVamos dar inicio ao jogo\n");


printf("Qual o estado da carta?");
scanf(" %c", &estado);


printf("Qual sera o codigo dela? ");
scanf(" %s", &idCidade);

getchar();

printf("Qual o nome da cidade que voce deseja cadastrar? ");
fgets(nomeCidade, 50, stdin);


printf("Qual a população da sua cidade?");
scanf(" %d", &populacao);


printf("Qual e a area da sua cidade?");
scanf(" %lf", &area);


printf("Qual e o pib da sua cidade?");
scanf(" %lf", &pib);


printf("Quantos pontos turisticos sua cidade tem?");
scanf(" %d", &pontosTuristicos);

double densidadePopulacional = populacao / area;
double pibPerCapita = pib / populacao;


//--------------------------------------------------------------------------------------------------------------
//Segunda carta.

//Entratadas de dados.
printf("Qual o estado da carta?");
scanf(" %c", &estado02);

printf("Qual sera o codigo dela? ");
scanf(" %s", &idCidade02);

getchar();

printf("Qual o nome da cidade que voce deseja cadastrar? ");
fgets(nomeCidade02, 50, stdin);


printf("Qual a população da sua cidade?");
scanf(" %d", &populacao02);


printf("Qual e a area da sua cidade?");
scanf(" %lf", &area02);


printf("Qual e o pib da sua cidade?");
scanf(" %lf", &pib02);


printf("Quantos pontos turisticos sua cidade tem?");
scanf(" %d", &pontosTuristicos02);

double densidadePopulacional02 = populacao02 / area02;
double pibPerCapita02 = pib02 / populacao02;

//--------------------------------------------------------------------------------------------------

//Saida de dados da primeira carta.
printf("Estado: %c\n", estado);
printf("O id da sua cidade e: %s\n", idCidade);
printf("O nome da sua cidade e: %s\n", nomeCidade);
printf("A populacao da sua cidade e: %d\n", populacao);
printf("A area da sua cidade e: %.2f\n", area);
printf("o pib da sua cidade e: %.2f\n" , pib);
printf("O numero de pontos turisticos: %d\n", pontosTuristicos);
printf("A densidade populacional da cidade: %s e de: %.2f\n", nomeCidade, densidadePopulacional);
printf("O pib per capita da cidade: %s e de: %.2f\n\n\n", nomeCidade, pibPerCapita);

//---------------------------------------------------------------------------------------------------

//Saida de dados da segunda carta.
printf("Estado: %c\n", estado02);
printf("O id da sua cidade e: %s\n", idCidade02);
printf("O nome da sua cidade e: %s\n", nomeCidade02);
printf("A populacao da sua cidade e: %d\n", populacao02);
printf("A area da sua cidade e: %.2f\n", area02);
printf("o pib da sua cidade e: %.2f\n" , pib02);
printf("O numero de pontos turisticos: %d\n", pontosTuristicos02);
printf("A densidade populacional da cidade: %s e de: %.2f\n", nomeCidade02, densidadePopulacional02);
printf("O pib per capita da cidade: %s e de: %.2f\n\n", nomeCidade02, pibPerCapita02);

//----------------------------------------------------------------------------------------------------------------------------

//Comparação da densidade populacional.
printf("*Vamos para as comparacoes*\n");

printf("Densidade populacional da primeira cidade: %.2f\n", densidadePopulacional);
printf("Densidade populacional da segunda cidade: %.2f\n", densidadePopulacional02);

if (densidadePopulacional < densidadePopulacional02) {
    printf("A primeira carta venceu!\n");
} else if (densidadePopulacional > densidadePopulacional02) {
    printf("A segunda carta venceu!\n");
} else {
    printf("Empate!\n");
}

return 0;

}
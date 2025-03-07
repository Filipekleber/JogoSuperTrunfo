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
scanf(" %d\n\n", &pontosTuristicos);

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
scanf(" %d\n\n", &pontosTuristicos02);

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
// printf("*Vamos para as comparacoes*\n");

// printf("Densidade populacional da primeira cidade: %.2f\n", densidadePopulacional);
// printf("Densidade populacional da segunda cidade: %.2f\n", densidadePopulacional02);

//-------------------------------------------------------------------------------------------------------------------------------

//comparação para saber qual carta foi a vencedora, com o atributo (população)
// if (populacao > populacao02){
//     printf("A carta número 01 venceu!! Com a maior população!!\n");
// }else if(populacao < populacao02){
//     printf("A carta número 02 venceu!! Com a maior população!!\n");
// }else{
//     printf("Houve um empate\n");
// }

// comparação com o atributo densidade populacional.
// if (densidadePopulacional > densidadePopulacional02){
//     printf("A carta número 01 venceu!!\n");
// }else if(densidadePopulacional < densidadePopulacional02){
//     printf("A carta número 02 venceu!!\n");
// }else{
//     printf("Houve um empate\n");
// }

//Aqui vai ser aonde o jogador vai escolher o atributo a ser escolhido
int opcaoJogador;

printf("Escolha o atributo para poder compararmos\n");
printf("1. Nome da cidade\n");
printf("2. populacao\n");
printf("3. Área\n");
printf("4. PIB\n");
printf("5. Número de pontos turísticos \n");
printf("6. Densidade demográfica \n");
scanf(" %d", &opcaoJogador);

switch (opcaoJogador)
{
case 1:
    printf(" %s %s",nomeCidade, nomeCidade02);
    break;

case 2:

if (populacao > populacao02){
    printf("A carta número 01 ganhou!\n");
}else if (populacao < populacao02){
    printf("A carta numero 02 ganhou!\n");
}else{
    printf("Houve um empate\n");
}
break;

case 3:
if (area > area02){
    printf("A carta numero 01 ganhou!\n");
}else if (area < area02){
    printf("A carta numero 02 ganhou!\n");
}else{
    printf("Houve um empate\n");
}
break;

case 4:

if(pib > pib02){
    printf("A carta numero 01 ganhou!\n");
}else if (pib < pib02){
    printf("A carta numero 02 ganhou!\n");
}else{
    printf("Houve um empate\n");
}
break;

case 5:

if (pontosTuristicos > pontosTuristicos02){
    printf("A carta numero 01 ganhou!\n");
}else if(pontosTuristicos < pontosTuristicos02){
    printf("A carta numero 02 ganhou!\n");
}else{
    printf("Houve um empate\n");
}
break;

case 6:

if (densidadePopulacional > densidadePopulacional02){
    printf("A carta numero 01 ganhou!\n");
}else if(densidadePopulacional < densidadePopulacional02){
    printf("A carta numero 02 ganhou!\n");
}else{
    printf("Houve um empate\n");
}
break;

default:
    printf("Opcao invalida");
    break;
}



printf("Fim de jogo!\n");



return 0;

}
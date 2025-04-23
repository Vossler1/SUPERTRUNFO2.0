#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // variaveis para armazenar os dados da cidade 1
    char estado[8];
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float PIB;
    int turismo;
    float densidade; // densidade populacional
    float PIBpercapita; // PIB per capita
    float superpoder; // superpoder da cidade 1

    int escolha; // variavel para armazenar a escolha do usuario
    int resultado; // variavel para armazenar o resultado do ataque
    int resultado2; // variavel para armazenar o resultado do ataque 2

    // variaveis para armazenar os dados da cidade 2
    char estado2[8];
    char codigo2[4]; 
    char nome2[50];
    int populacao2;
    float area2;
    float PIB2;
    int turismo2;
    float densidade2; 
    float PIBpercapita2; 
    float superpoder2; // variavel para armazenar o superpoder da cidade 2
    int escolha2; // variavel para armazenar a escolha do usuario 2
    // entrada de dados da cidade 1
    printf("Digite o estado:");
    scanf(" %s", estado);

    printf("Digite o codigo:");
    scanf(" %s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turismo);

    densidade = (float)populacao / area; // calcula a densidade populacional
    PIBpercapita = (float)PIB / populacao; // calcula o PIB per capita
    superpoder = populacao + area + PIB +(-1 * PIBpercapita) + (-1 * densidade); // calcula o superpoder da cidade 1

    printf("\n\n\n");

    // entrada de dados da cidade 2
    printf("Digite o estado: ");
    scanf(" %s", estado2);

    printf("Digite o codigo: ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome2);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite o numero de turistas: ");
    scanf("%d", &turismo2);

    densidade2 = (float)populacao2 / area2; // calcula a densidade populacional
    PIBpercapita2 = (float)PIB2 / populacao2; // calcula o PIB per capita
    superpoder2 = populacao2 + area2 + PIB2 +(-1 * PIBpercapita2) + (-1 * densidade2); // calcula o superpoder da cidade 2
    

    printf("\n\n\n");

    // exibir os dados da cidade 1
    printf("O nome do seu Estado: %s\n", estado);
    printf("Codigo da sua cidade e: %s%s\n", estado, codigo);
    printf("nome da sua cidade : %s \n", nome);
    printf("populacao da da sua cidade : %d  \n", populacao);
    printf("area da sua cidade : %f KM²\n", area);
    printf("PIB da sua cidade : %f \n", PIB);
    printf("numero de pontos turisticos da sua cidade : %d \n", turismo);
    printf("A densidade populacional da cidade e: %.2f\n", densidade);
    printf("O PIB per capita da cidade e: %.2f\n", PIBpercapita);
    printf("O superpoder da cidade e: %.2f\n", superpoder);


    printf("\n\n\n");

    // exibir os dados da cidade 2
    printf("O nome do seu Estado: %s\n", estado2);
    printf("Codigo da sua cidade e: %s%s\n", estado2, codigo2);
    printf("nome da sua cidade : %s \n", nome2);
    printf("populacao da da sua cidade : %d \n", populacao2);
    printf("area da sua cidade : %f KM²\n", area2);
    printf("PIB da sua cidade : %f \n", PIB2);
    printf("numero de pontos turisticos da sua cidade : %d \n", turismo2);
    printf("A densidade populacional da cidade e: %f\n", densidade2);
    printf("O PIB per capita da cidade e: %.2f\n", PIBpercapita2);
    printf("O superpoder da cidade e: %.2f\n", superpoder2);
    printf("\n\n\n");

    // exibir as opcoes de ataque

    printf("Digite a escolha de ataque:\n");
    printf("1 - população\n");
    printf("2 - area\n");
    printf("3 - PIB\n");
    printf("4 - pontos turisticos\n");
    printf("5 - densidade\n");
    printf("6 - PIB per capita\n");
    printf("7 - superpoder\n");
    scanf("%d", &escolha);
//primeiro atributo feito com if-else
    switch (escolha) {
    case 1:
    if (populacao > populacao2) {
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome, nome2);
        printf("A cidade %s tem mais população com %i\n", nome, populacao);
        printf("\n");
        printf("A cidade %s tem menos população com %i\n", nome2, populacao2);
        printf("a carta vencedora foi %c%c\n", estado,codigo);
        resultado = 1;
    } else if (populacao < populacao2) {   
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome2, nome);
        printf("A cidade %s tem mais população com %i\n", nome2, populacao2);
        printf("\n");
        printf("A cidade %s tem menos população com %i\n", nome, populacao);
        printf("a carta vencedora foi %c%c\n", estado2,codigo2);
        resultado = 1;
    } else {
        printf("As cidades %s e %s sao iguais em poder\n", nome, nome2);
    }
        break;
    case 2:
    if (area > area2) {
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome, nome2);
        printf("A cidade %s tem mais area com %f\n", nome, area);
        printf("\n");
        printf("A cidade %s tem menos area com %f\n", nome2, area2);
        printf("a carta vencedora foi %c%c\n", estado,codigo);
    } else if (area < area2) {   
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome2, nome);
        printf("A cidade %s tem mais area com %f\n", nome2, area2);
        printf("\n");
        printf("A cidade %s tem menos area com %f\n", nome, area);
        printf("a carta vencedora foi %c%c\n", estado2,codigo2);
        resultado = 1;
    } else {
        printf("As cidades %s e %s sao iguais em poder\n", nome, nome2);
    }
        break;
    case 3:
    if (PIB > PIB2) {
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome, nome2);
        printf("A cidade %s tem mais PIB com %f\n", nome, PIB);
        printf("\n");
        printf("A cidade %s tem menos PIB com %f\n", nome2, PIB2);
        printf("a carta vencedora foi %c%c\n", estado,codigo);
    } else if (PIB < PIB2) {   
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome2, nome);
        printf("A cidade %s tem mais PIB com %f\n", nome2, PIB2);
        printf("\n");
        printf("A cidade %s tem menos PIB com %f\n", nome, PIB);
        printf("a carta vencedora foi %c%c\n", estado2,codigo2);
        resultado = 1;
    } else {
        printf("As cidades %s e %s sao iguais em poder\n", nome, nome2);
    }
        break;
    case 4: 
    if (turismo > turismo2) {
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome, nome2);
        printf("A cidade %s tem mais pontos turisticos com %d\n", nome, turismo);
        printf("\n");
        printf("A cidade %s tem menos pontos turisticos com %d\n", nome2, turismo2);
        printf("a carta vencedora foi %c%c\n", estado,codigo);
    } else if (turismo < turismo2) {   
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome2, nome);
        printf("A cidade %s tem mais pontos turisticos com %d\n", nome2, turismo2);
        printf("\n");
        printf("A cidade %s tem menos pontos turisticos com %d\n", nome, turismo);
        printf("a carta vencedora foi %c%c\n", estado2,codigo2);
        resultado = 1;
    } else {
        printf("As cidades %s e %s sao iguais em poder\n", nome, nome2);
    }
        break;
    case 5:
    if (densidade < densidade2) {
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome, nome2);
        printf("A cidade %s tem menos densidade demografica com %f\n", nome, densidade);
        printf("\n");
        printf("A cidade %s tem mais densidade com %f\n", nome2, densidade2);
        printf("a carta vencedora foi %c%c\n", estado,codigo);
        resultado = 1;
    } else if (densidade > densidade2) {   
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome2, nome);
        printf("A cidade %s tem menos densidade com %f\n", nome2, densidade2);
        printf("\n");
        printf("A cidade %s tem mais densidade com %f\n", nome, densidade);
        printf("a carta vencedora foi %c%c\n", estado2,codigo2);
        resultado = 1;
    } else {
        printf("As cidades %s e %s sao iguais em poder\n", nome, nome2);
    }
        break;
    case 6:
    if (PIBpercapita > PIBpercapita2) {
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome, nome2);
        printf("A cidade %s tem mais PIB per capita com %f\n", nome, PIBpercapita);
        printf("\n");
        printf("A cidade %s tem menos PIB per capita com %f\n", nome2, PIBpercapita2);
        printf("a carta vencedora foi %c%c\n", estado,codigo);
    } else if (PIBpercapita < PIBpercapita2) {   
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome2, nome);
        printf("A cidade %s tem mais PIB per capita com %f\n", nome2, PIBpercapita2);
        printf("\n");
        printf("A cidade %s tem menos PIB per capita com %f\n", nome, PIBpercapita);
        printf("a carta vencedora foi %c%c\n", estado2,codigo2);
        resultado = 1;
    } else {
        printf("As cidades %s e %s sao iguais em poder\n", nome, nome2);
    }
        break;
    case 7: 
    if (superpoder > superpoder2) {
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome, nome2);
        printf("A cidade %s tem mais superpoder com %f\n", nome, superpoder);
        printf("\n");
        printf("A cidade %s tem menos superpoder com %f\n", nome2, superpoder2);
        printf("a carta vencedora foi %c%c\n", estado,codigo);
    } else if (superpoder < superpoder2) {   
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome2, nome);
        printf("A cidade %s tem mais superpoder com %f\n", nome2, superpoder2);
        printf("\n");
        printf("A cidade %s tem menos superpoder com %f\n", nome, superpoder);
        printf("a carta vencedora foi %c%c\n", estado2,codigo2);
        resultado = 1;
    } else {
        printf("As cidades %s e %s sao iguais em poder\n", nome, nome2);
    }
        break;
    default:
        printf("Escolha invalida\n");
        break;
    } 

    printf("\n\n\n");

    // segundo atributo feito com operador ternario
    printf("Digite a escolha de ataque:\n");
    printf("1 - população\n");
    printf("2 - area\n");
    printf("3 - PIB\n");
    printf("4 - pontos turisticos\n");
    printf("5 - densidade\n");
    printf("6 - PIB per capita\n");
    printf("7 - superpoder\n");
    scanf("%d", &escolha2);
    switch (escolha2) {
    case 1:
    resultado2 = (populacao > populacao2) ? 1 : 0;
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome, nome2);
        printf("A cidade %s tem mais população com %i\n", nome, populacao);
        printf("\n");
        printf("A cidade %s tem menos população com %i\n", nome2, populacao2);
        printf("a carta vencedora foi %c%c\n", estado,codigo);
        break;
    case 2:
    resultado2 = (area > area2) ? 1 : 0;
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome, nome2);
        printf("A cidade %s tem mais area com %f\n", nome, area);
        printf("\n");
        printf("A cidade %s tem menos area com %f\n", nome2, area2);
        printf("a carta vencedora foi %c%c\n", estado,codigo);
        break;
    case 3:
    resultado2 = (PIB > PIB2) ? 1 : 0;
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome, nome2);
        printf("A cidade %s tem mais PIB com %f\n", nome, PIB);
        printf("\n");
        printf("A cidade %s tem menos PIB com %f\n", nome2, PIB2);
        printf("a carta vencedora foi %c%c\n", estado,codigo);
        break;
    case 4:
    resultado2 = (turismo > turismo2) ? 1 : 0;
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome, nome2);
        printf("A cidade %s tem mais pontos turisticos com %d\n", nome, turismo);
        printf("\n");
        printf("A cidade %s tem menos pontos turisticos com %d\n", nome2, turismo2);
        printf("a carta vencedora foi %c%c\n", estado,codigo);
        break;
    case 5:
    resultado2 = (densidade < densidade2) ? 1 : 0;
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome, nome2);
        printf("A cidade %s tem menos densidade demografica com %f\n", nome, densidade);
        printf("\n");
        printf("A cidade %s tem mais densidade com %f\n", nome2, densidade2);
        printf("a carta vencedora foi %c%c\n", estado,codigo);
        break;
    case 6:
    resultado2 = (PIBpercapita > PIBpercapita2) ? 1 : 0;
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome, nome2);
        printf("A cidade %s tem mais PIB per capita com %f\n", nome, PIBpercapita);
        printf("\n");
        printf("A cidade %s tem menos PIB per capita com %f\n", nome2, PIBpercapita2);
        printf("a carta vencedora foi %c%c\n", estado,codigo);
        break;
    case 7:
    resultado2 = (superpoder > superpoder2) ? 1 : 0;
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome, nome2);
        printf("A cidade %s tem mais superpoder com %f\n", nome, superpoder);
        printf("\n");
        printf("A cidade %s tem menos superpoder com %f\n", nome2, superpoder2);
        printf("a carta vencedora foi %c%c\n", estado,codigo);
        break;
    default:
        printf("Escolha invalida\n");
        break;
    }
    printf("\n\n\n");

    if (resultado && resultado2) {
        printf("jogador 1 venceu\n");
    } else if (resultado2 != resultado) {
        printf("jogador 2 venceu\n");
    } else {
        printf("empate\n");
    }
 
}
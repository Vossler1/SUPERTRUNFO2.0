#include <stdio.h>

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
    float superpoder; // variavel para armazenar o superpoder da cidade 1
    float superpoder2; // variavel para armazenar o superpoder da cidade 2
    int resultado; // variavel para armazenar o resultado da comparacao

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

    if (superpoder > superpoder2){
        printf("A cidade %s e mais poderosa que a cidade %s\n", nome, nome2);
        resultado = 1;
    } else if (superpoder < superpoder2) {
        printf("A cidade %s e menos poderosa que a cidade %s\n", nome, nome2);
        resultado = -1;
    } else {
        printf("As cidades %s e %s sao iguais em poder\n", nome, nome2);
        resultado = 0;
    }
    printf("o resultado da comparacao e: %d\n", resultado);
    
 
}
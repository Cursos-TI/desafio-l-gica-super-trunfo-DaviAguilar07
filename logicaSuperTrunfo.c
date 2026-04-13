#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char Estado1[50], Estado2[50];
    char codigodacarta1[4], codigodacarta2[4];
    char nomedacidade1[50], nomedacidade2[50];
    int populaçao1, populaçao2;
    float area1, area2; 
    float pib1, pib2;
    int numerodepontosturisticos1, numerodepontosturisticos2;
    float pibpercapita1, pibpercapita2, densidadepopulacional1, densidadepopulacional2;
    float superpoder1= populaçao1+pib1+numerodepontosturisticos1+1/densidadepopulacional1+pibpercapita1;
    float superpoder2= populaçao2+pib2+numerodepontosturisticos2+1/densidadepopulacional2+pibpercapita2;
    
    densidadepopulacional1 = (float)populaçao1/area1;
    pibpercapita1 = (float)pib1/populaçao1;

    densidadepopulacional2 = (float)populaçao2/area2;
    pibpercapita2 = (float)pib2/populaçao2;

    superpoder1 = (float)populaçao1+pib1+numerodepontosturisticos1+1/densidadepopulacional1+pibpercapita1;
    superpoder2 = (float)populaçao2+pib2+numerodepontosturisticos2+1/densidadepopulacional2+pibpercapita2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("-----Carta 1-----\n");

    printf("Insira o Estado:\n");
    scanf("%s", &Estado1);

    printf("Insira o código da carta:\n");
    scanf("%s", &codigodacarta1);

    printf("Insira o nome da cidade:\n");
    scanf("%s", &nomedacidade1);

    printf("Insira a população:\n");
    scanf("%d", &populaçao1);

    printf("Insira a área:\n");
    scanf("%f", &area1);

    printf("Insira o PIB:\n");
    scanf("%f", &pib1);

    printf("Insira a quantidade de pontos turísticos:\n");
    scanf("%d", &numerodepontosturisticos1);

    printf("\n");

    printf("-----Carta 2-----\n");

      printf("Insira o Estado:\n");
    scanf("%s", &Estado2);

    printf("Insira o código da carta:\n");
    scanf("%s", &codigodacarta2);

    printf("Insira o nome da cidade:\n");
    scanf("%s", &nomedacidade2);

    printf("Insira a população:\n");
    scanf("%d", &populaçao2);

    printf("Insira a área:\n");
    scanf("%f", &area2);

    printf("Insira o PIB:\n");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos:\n");
    scanf("%d", &numerodepontosturisticos2);


    printf("\n");

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
   
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    
    
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("-----Comparação das cartas-----\n");

   if(populaçao1 > populaçao2){
        printf("A carta 1 tem maior população.\n");
    }else{
        printf("A carta 2 tem maior população.\n");
    }

    if(area1 > area2){
        printf("A carta 1 tem maior área.\n");
    }else{
        printf("A carta 2 tem maior área.\n");
    }

    if(pib1 > pib2){
        printf("A carta 1 tem maior PIB.\n");
    }else{
        printf("A carta 2 tem maior PIB.\n");
    }

    if(numerodepontosturisticos1 > numerodepontosturisticos2){
        printf("A carta 1 tem maior população.\n");
    }else{
        printf("A carta 2 tem maior população.\n");
    }

    if(densidadepopulacional1 < densidadepopulacional2){
        printf("A carta 1 tem maior densidade populacional.\n");
    }else{
        printf("A carta 2 tem maior densidade populacional.\n");
    }

    if(pibpercapita1 > pibpercapita2){
        printf("A carta 1 tem maior PIB per capita.\n");
    }else{
        printf("A carta 2 tem maior PIB per capita.\n");
    }

    if(superpoder1 > superpoder2){
        printf("A carta 1 tem maior super poder.\n");
    }else{
        printf("A carta 2 tem maior super poder.\n");
    }

    printf("\n");

    // Saída da Carta 1


    printf("Carta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populaçao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos1);
    printf("A densidade populacional é: %.2f hab/km²\n", densidadepopulacional1);
    printf("O PIB per capita: %.2f reais\n", pibpercapita1);
    printf("O super poder da carta 1 é: %.2f\n", superpoder1);
    
    printf("\n");

    // Saída da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populaçao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos2);
    printf("A densidade populacional é: %.2f hab/km²\n", densidadepopulacional2);
    printf("O PIB per capita: %.2f reais\n", pibpercapita2);
    printf("O super poder da carta 2 é: %.2f\n", superpoder2);
  return 0;
}

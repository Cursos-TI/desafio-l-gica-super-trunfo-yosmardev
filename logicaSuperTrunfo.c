
#include <stdio.h>
#include <stdlib.h>

int main () {

unsigned long int nPontosTuristicos, populacao;
int opcao;
char estado [10];
char nomeCidade [50];
char codigo[10];
float areaKm;
float pib;
float dspopulacional;
float pibcapita;
float superpoder;

unsigned long int nPontosTuristicos2, populacao2;
char estado2[10];
char nomeCidade2 [50];
char codigo2[10];
float areaKm2;
float pib2;
float dspopulacional2;
float pibcapita2;
float superpoder2;


printf ("Carta 1: \n");

printf ("Digite o Estado da carta (A-H): \n");
scanf ("%s", &estado);

printf ("Digite o código da carta(ex:A01):\n ");
scanf ("%s", &codigo);

printf ("Digite o nome da cidade:\n ");
scanf ("%s", &nomeCidade);

printf ("Digite qual o tamanho da população:\n");
scanf ("%ld",  &populacao);

printf ("Digite a área em km² dessa cidade:\n ");
scanf("%f", &areaKm);

printf ("Digite o PIB dessa cidade:\n ");
scanf("%f", &pib);

printf ("Digite o número de pontos turísticos da cidade:\n ");
scanf ("%ld", &nPontosTuristicos);

dspopulacional = (float) populacao / areaKm;
pibcapita = (pib * 1000000000) / populacao;

superpoder = (float)populacao + areaKm + pib + (float)nPontosTuristicos + pibcapita + (1.0f / dspopulacional);

printf("Carta 1 \n");
printf("Estado: %s\n", estado);
printf("Código: %s%s\n", estado,codigo);
printf("Nome da Cidade: %s\n",nomeCidade);
printf("População: %ld\n", populacao);
printf("Área: %.2f km²\n", areaKm);
printf("PIB: %.2f bilhões de reais\n", pib);
printf ("Número de Pontos Turísticos: %ld\n", nPontosTuristicos);
printf("Densidade populacional: %f hab/km²\n", dspopulacional);
printf("PIB per Capita: %.2f reais\n", pibcapita);
printf("Super poder: %.2f\n", superpoder);


printf ("---------------------------------------------------------------------\n");

printf ("Carta 2: \n");

printf ("Digite o Estado da carta (A-H):\n ");
scanf ("%s", &estado2);

printf ("Digite o código da carta(ex:A01):\n ");
scanf ("%s", &codigo2);

printf("Digite o nome da cidade:\n");
scanf("%s", &nomeCidade2);
    
printf ("Digite qual o tamanho da população:\n ");
scanf ("%ld", &populacao2);

printf ("Digite a área em km² dessa cidade:\n ");
scanf ("%f", &areaKm2);

printf ("Digite o PIB dessa cidade:\n ");
scanf ("%f", &pib2);

printf ("Digite o número de pontos turísticos da cidade:\n ");
scanf ("%ld", &nPontosTuristicos2);

dspopulacional2 = (float) populacao2 / areaKm2;
pibcapita2 = (pib2 * 1000000000) / populacao2;

superpoder2 = (float)populacao2 + areaKm2 + pib2 + (float)nPontosTuristicos2 + pibcapita2 + (1.0f / dspopulacional2);

printf("Carta 2 \n");
printf("Estado: %s\n", estado2);
printf("Código: %s%s\n", estado2,codigo2);
printf("Nome da Cidade: %s\n",nomeCidade2);
printf("População: %ld\n", populacao2);
printf("Área: %.2f km²\n", areaKm2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %ld\n", nPontosTuristicos2);
printf("Densidade populacional: %f hab/km²\n", dspopulacional2);
printf("PIB per Capita: %.2f reais\n", pibcapita2);
printf("Super Poder: %.2f\n", superpoder2);

printf("--------------------------------------------------------\n");

printf("Escolha qual atributo a ser comparado:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos turísticos\n");
printf("5. Densidade demográfica\n");
printf("Escolha uma opção:\n");
scanf("%d", &opcao);

printf("\n====================\n");
    printf("Comparacao de Cartas:\n");
    printf("Carta 1: %s%s\n", estado, codigo);
    printf("Carta 2: %s%s\n", estado2, codigo2);
    printf("--------------------\n");

    switch (opcao)
     {
        case 1:
            printf("Atributo: População\n");
            printf("Carta 1: %ld\n", populacao);
            printf("Carta 2: %ld\n", populacao2);

            if (populacao > populacao2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (populacao2 > populacao) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");}
            break;

            case 2:
            printf("Atributo: Área (km²)\n");
            printf("Carta 1: %.2f\n", areaKm);
            printf("Carta 2: %.2f\n", areaKm2);
            if (areaKm > areaKm2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (areaKm2 > areaKm) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");}
            break;

                case 3:
            printf("Atributo: PIB\n");
            printf("Carta 1: %.2f\n", pib);
            printf("Carta 2: %.2f\n", pib2);
            if (pib > pib2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (pib2 > pib) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");}
            break;

             case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("Carta 1: %ld\n", nPontosTuristicos);
            printf("Carta 2: %ld\n", nPontosTuristicos2);

            if (nPontosTuristicos > nPontosTuristicos2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (nPontosTuristicos2 > nPontosTuristicos) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");}
            break;
            
              case 5:
            printf("Atributo: Densidade Demografica (hab/km²) - Menor vence\n");
            printf("Carta 1: %f\n", dspopulacional);
            printf("Carta 2: %f\n", dspopulacional2);

            if (dspopulacional < dspopulacional2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (dspopulacional2 < dspopulacional) {
                    printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Resultado: Empate!\n");}
            break;
                
            default:
            { printf("Opcao invalida! Por favor, escolha um numero entre 1 e 5.\n");}
           break; 
    }

    return 0;
}



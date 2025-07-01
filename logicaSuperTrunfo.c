
#include <stdio.h>

int main () {

unsigned long int nPontosTuristicos, populacao;
int opcao, opcao2, resultado, resultado2;
char estado [10];
char nomeCidade [50];
char codigo[10];
float areaKm;
float pib, dspopulacional, pibcapita, superpoder;

unsigned long int nPontosTuristicos2, populacao2;
char estado2[10];
char nomeCidade2 [50];
char codigo2[10];
float areaKm2;
float pib2, dspopulacional2, pibcapita2, superpoder2;

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
printf("6. Pib per capita\n");
printf("Escolha uma opção:\n");
scanf("%d", &opcao);


    switch (opcao)
     {
        case 1:
            printf("Atributo População\n");
            printf("\n");

            resultado = populacao > populacao2 ? 1 : 0;

            if (populacao == populacao2) {
                printf("Empate!\n");

            }  else if (populacao > populacao2) {
                printf ("A carta 1 %s venceu\n", codigo);
            } else{ 
                printf("A carta 2 %s venceu\n", codigo2);
            }break;

            case 2:
             printf("Atributo Área\n");
            printf("\n");

            resultado = areaKm > areaKm2 ? 1 : 0;

            if (areaKm == areaKm2) {
                printf("Empate!\n");

            }  else if (areaKm > areaKm2) {
                printf ("A carta 1 %s venceu\n", codigo);
            } else{ 
                printf("A carta 2 %s venceu\n", codigo2);
            }break;

            case 3:
            printf("Atributo PIB\n");
            printf("\n");

            resultado = pib > pib2 ? 1 : 0;

            if (pib == pib2) {
                printf("Empate\n");

            } else if (pib > pib2) 
            { printf ("A carta 1 %s venceu\n", codigo);
            } else { 
                printf("A carta 2 %s venceu\n", codigo2);
            }break;

             case 4:
            printf("Atributo Pontos Turisticos\n");
            printf("\n");

            resultado = nPontosTuristicos > nPontosTuristicos2 ? 1 : 0;

            if (nPontosTuristicos == nPontosTuristicos2) {
                printf("Empate\n");

            } else if (nPontosTuristicos > nPontosTuristicos2) {
                printf ("A carta 1 %s venceu\n", codigo);
            } else{ 
                printf("A carta 2 %s venceu\n", codigo2);
            }break;
            
              case 5:
            printf("Atributo Densidade Demografica (hab/km²) - Menor vence\n");
            printf("\n");

            resultado = dspopulacional < dspopulacional2 ? 1 : 0;
            if (dspopulacional == dspopulacional2) {
                printf("Empate\n");

            } else if (dspopulacional < dspopulacional2) {
                printf ("A carta 1 %s venceu\n", codigo);
            } 
            else{ 
                printf("A carta 2 %s venceu\n", codigo2);
            }break; 

            case 6:
            printf("Atributo PIB per capita!\n");
            printf("\n");

            resultado = pibcapita > pibcapita2 ? 1 : 0;

            if (pibcapita == pibcapita2){
                printf("Empate\n");
            }
                else if (pibcapita > pibcapita2){
                printf ("A carta 1 %s venceu\n", codigo);
            } 
            else{ 
                printf("A carta 2 %s venceu\n", codigo2);
            }break;

            default: printf("Opção inválida\n");
            break;}
            
            printf("Escolha o segundo atributo a ser comparado:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos turísticos\n");
            printf("5. Densidade demográfica\n");
            printf("6. Pib per capita\n");
            printf("Escolha uma opção:\n");
            scanf("%d", &opcao2);

            if (opcao == opcao2){
                printf("Você escolheu o mesmo atributo, opção inválida\n");
            }   else { switch (opcao2) {
            
            case 1:
            printf("Atributo População\n");
            printf("\n");

            resultado2 = populacao > populacao2 ? 1 : 0;

            if (populacao == populacao2) {
                printf("Empate!\n");

            }  else if (populacao > populacao2) {
                printf ("A carta 1 %s venceu\n", codigo);
            } else{ 
                printf("A carta 2 %s venceu\n", codigo2);
            }break;

            case 2:
             printf("Atributo Área\n");
            printf("\n");

            resultado2 = areaKm > areaKm2 ? 1 : 0;

            if (areaKm == areaKm2) {
                printf("Empate!\n");

            }  else if (areaKm > areaKm2) {
                printf ("A carta 1 %s venceu\n", codigo);
            } else{ 
                printf("A carta 2 %s venceu\n", codigo2);
            }break;

                case 3:
            printf("Atributo PIB\n");
            printf("\n");

            resultado2 = pib > pib2 ? 1 : 0;

            if (pib == pib2) {
                printf("Empate\n");

            } else if (pib > pib2) 
            { printf ("A carta 1 %s venceu\n", codigo);
            } else { 
                printf("A carta 2 %s venceu\n", codigo2);
            }break;

             case 4:
            printf("Atributo Pontos Turisticos\n");
            printf("\n");

            resultado2 = nPontosTuristicos > nPontosTuristicos2 ? 1 : 0;

            if (nPontosTuristicos == nPontosTuristicos2) {
                printf("Empate\n");

            } else if (nPontosTuristicos > nPontosTuristicos2) {
                printf ("A carta 1 %s venceu\n", codigo);
            } else{ 
                printf("A carta 2 %s venceu\n", codigo2);
            }break;
            
              case 5:
            printf("Atributo Densidade Demografica (hab/km²) - Menor vence\n");
            printf("\n");

            resultado2 = dspopulacional < dspopulacional2 ? 1 : 0;
            if (dspopulacional == dspopulacional2) {
                printf("Empate\n");

            } else if (dspopulacional < dspopulacional2) {
                printf ("A carta 1 %s venceu\n", codigo);
            } 
            else{ 
                printf("A carta 2 %s venceu\n", codigo2);
            }break; 

            case 6:
            printf("Atributo PIB per capita!\n");
            printf("\n");

            resultado2 = pibcapita > pibcapita2 ? 1 : 0;

            if (pibcapita == pibcapita2){
                printf("Empate\n");
            }
                else if (pibcapita > pibcapita2){
                printf ("A carta 1 %s venceu\n", codigo);
            } 
            else{ 
                printf("A carta 2 %s venceu\n", codigo2);
            }break;

            default: printf("Opção inválida\n");
        break;}
        
        printf("### Resultado do Jogo: ###\n");
            printf("\n");

            if (resultado && resultado2) {
            printf("A Carta 1 - %s, ganhou a partida!\n",codigo);

            }else if ("resultado != resultado2"){
                printf("O jogo empatou!\n");}

            else { printf("A Carta 2 - %s, ganhou a partida!\n", codigo2);}
                }
    return 0;
}




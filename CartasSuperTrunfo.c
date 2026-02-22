#include <stdio.h>

// Desafio Super Trunfo - Paises
// Tema 1 - Cadastro das cartas
// Objetivo: No nivel novato voce deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informacoes.

int main() {

  printf("DESAFIO SUPER TRUNFO - ALUNO: RENATO JUSSIM MONTEIRO");

  // DECLARANDO AS VARIAVEIS

  // Declarando variaveis referentes a carta 1 do jogo.

         int densidadecomparada1; //aqui declaramos a variavel densidadecomparada para armazenar o valor 0 ou 1 resultado de comparação das cartas1 e 2 no quesito densidade.
         

         char jogador[21];
         char escolha[5];  

         char carta1[7] = "carta1"; //VARIAVEL CARTA 1 JA SENDO DECLARADA COM VALOR - carta1.
         char estado1[3];
         char codigo1[3];
         char cidade1[30];
         unsigned long int populacao1; // aqui declaramos a variavel população1 com unsigned long int para armazenar valores maiores.
         float area1;
         float pib1;
         int pontosturisticos1;
         float densidade1; //aqui foi declarada a variavel de densidade populacional da carta 1.
         float pibpercapita1; //aqui foi declarada a variavel do pib per capita da carta 1.
         
         
         float SUPERPODER1; //AQUI DECLARAMOS A VARIAVEL SUPER PODER1.

  // Declarando variaveis referentes a carta 2 do jogo.

         int densidadecomparada2;

         char carta2[7] = "carta2"; //VARIAVEL CARTA 2 JA SENDO DECLARADA COM VALOR - carta2.
         char estado2[3];
         char codigo2[3];
         char cidade2[30];
         unsigned long int populacao2; // aqui declaramos a variavel população2 com unsigned long int para armazenar valores maiores.
         float area2;
         float pib2;
         int pontosturisticos2;
         float densidade2; //aqui foi declarada a variavel de densidade populacional da carta 2.
         float pibpercapita2; //aqui foi declarada a variavel do pib per capita da carta 2.

         float SUPERPODER2; //AQUI DECLARAMOS A VARIAVEL SUPER PODER2. 

// APRESENTACAO DO SOFTWARE PARA O JOGADOR UTILIZANDO A FUNCAO PRINTF E \n para criar linhas.

                  printf("SEJA BEM VINDO!!!\n"); 
                  printf("\n - SUPER TRUNFO DIGITAL! -\n");
                  printf("\nO PRIMEIRO PASSO E REALIZAR O SEU CADASTRO COMO JOGADOR E LOGO DEPOIS VOU TE AJUDAR A CADASTRAR AS SUAS CARTAS!\n");
                  printf("\nDAQUI EM DIANTE VOU TE DANDO AS DICAS PARA O PREENCHIMENTO DOS SEUS DADOS OK!?\n");
                  printf("\nMUITO BEM VAMOS LA AO NOSSO TUTORIAL!\n");
                  printf("ATENCAO AS INFORMACOES!\n"); 

    // CADASTRO DO NOME DO JOGADOR

                  printf("REGRA 01");
                  printf("- O SEU NOME DE JOGADOR SO PODERA CONTER ATE 20 CARACTERES E NAO PODE CONTER ESPACO SE FOR NOME COMPOSTO OK!?.\n");

                  printf("\nPOR FAVOR DIGITE O SEU NOME:");
                  scanf("%s", jogador); 

                  printf("\nMUITO BOM NOME, SEJA BEM VINDO %s!!!\n", jogador);

                  printf("\nAGORA, VAMOS COMECAR A CADASTRAR AS SUAS CARTAS!\n");
                  printf("\nEU VOU TE AJUDAR COM AS DICAS ITEM A ITEM OK?, VAMOS EM FRENTE!\n");

    // CADASTRO DA CARTA 01
   
                  printf("\n %s, por favor preencha os dados da primeira carta:\n", jogador);
                  printf("\n---%s---\n", carta1);

                  printf("REGRA 02:  \n");
                  printf("- AO ESCOLHER O ESTADO, DEVERA DIGITAR APENAS UMA LETRA DE A ate H PARA SE REFERIR A UM DOS 8 ESTADOS.\n");
                  printf("\nESTADO:");
                  scanf("%s", estado1);

                  printf("\nREGRA 03:  \n");
                  printf("- AO ESCOLHER O CODIGO, DEVERA DIGITAR APENAS DOIS NUMEROS DE 01 ate 04, EXEMPLO: 01 -\n");
                  printf("\nCODIGO:");
                  scanf("%s", codigo1);

                  printf("\nREGRA 04:  \n");
                  printf("- AO ESCOLHER O NOME DA CIDADE, SO PODERA DIGITAR ATE 20 CARACTERES UTILIZANDO UNDERLINE PARA O ESPACO EM NOMES COMPOSTOS E NAO USAR ACENTOS, EXEMPLO - SAO_PAULO -\n");
                  printf("\nCIDADE:");
                  scanf("%s", cidade1);

                  printf("\nREGRA 05:  \n");
                  printf("- AO INSERIR O NUMERO DE HABITANTES, NAO UTILIZAR PONTOS OU VIRGULAS, APENAS DIGITAR O NUMERO INTEIRO, EXEMPLO 123456789.\n");
                  printf("\nPOPULACAO:");
                  scanf("%lu", &populacao1);

                  printf("\nREGRA 06:  \n");
                  printf("- INSERIR A AREA DA CIDADE UTILIZANDO SOMENTE NUMEROS E PONTO (.) PARA CASAS DECIMAIS, EXEMPLO - 1234.56 - KM^2\n");
                  printf("\nAREA:");
                  scanf("%f", &area1);

                  printf("\nREGRA 07:  \n");
                  printf("- INSERIR O PIB DA CIDADE UTILIZANDO SOMENTE NUMEROS E PONTO (.) PARA CASAS DECIMAIS, EXEMPLO - 655.360 - BILHOES DE REAIS\n");
                  printf("\nPIB:");
                  scanf("%f", &pib1);

                  printf("\nREGRA 08:  \n");
                  printf("- INSERIR APENAS NUMEROS DE 01 A 50 PARA A QUANTIDADE DE PONTOS TURISTICOS DA CIDADE, EXEMPLO: - 37 -\n");
                  printf("\nPONTOS TURISTICOS:");
                  scanf("%d", &pontosturisticos1);

                  densidade1 = (float) populacao1 / area1; // aqui calculamos a densidade pegando o valor das variaveis populacao1 e area1, fazendo casting para float antes do calculo e atribuindo o resultado na variavel densidade1.
                  pibpercapita1 = pib1 * 1000000000 / populacao1; // aqui calculamos primeiro o valor de entrada do pib1 * um bilhão para ter sentido financeiro e dividimos pelo valor da variavel populacao1 atribuindo o resultado do quociente a variavel pibpercapita1.

                  printf("\nMUITO BOM MESMO!!! %s, AGORA VAMOS VER OS DADOS DA CARTA 01!\n", jogador);

                  printf("DIGITE S E APERTE ENTER PARA VER OS DADOS DA CARTA 01.");
                  scanf("%s", escolha);

                  printf("\n---%s---\n", carta1);
                  printf("\nESTADO E CODIGO: - (%s.%s) -\n", estado1, codigo1);
                  printf("\nCIDADE: %s. \n", cidade1);
                  printf("\nPOPULACAO: %lu HABITANTES.\n",populacao1);
                  printf("\nAREA: %.2f KM^2\n", area1);
                  printf("\nPIB: %.3f BILHOES DE REAIS.\n", pib1);
                  printf("\nPONTOS TURISTICOS: %i\n", pontosturisticos1);
                  printf("\nDENSIDADE POPULACIONAL: %.2f hab/km^2\n", densidade1); //aqui imprimimos o valor da nova variavel densidade1 da carta 1
                  printf("\nPIB PER CAPITA: %.2f reais\n", pibpercapita1); //aqui imprimimos o valor da nova variavel pibpercapita1 da carta 1

                  printf("\nDIGITE S E APERTE ENTER PARA PROSSEGUIR PARA A PROXIMA CARTA:");
                  scanf("%s", escolha);

//  CADASTRO DA CARTA 02

                  printf("\n %s, por favor preencha os dados da segunda carta:\n", jogador);
                  printf("\n---%s---\n", carta2);

                  printf("REGRA 02:  \n");
                  printf("- AO ESCOLHER O ESTADO, DEVERA DIGITAR APENAS UMA LETRA DE A ate H PARA SE REFERIR A UM DOS 8 ESTADOS.\n");
                  printf("\nESTADO:");
                  scanf("%s", estado2);

                  printf("\nREGRA 03:  \n");
                  printf("- AO ESCOLHER O CODIGO, DEVERA DIGITAR APENAS DOIS NUMEROS DE 01 ate 04, EXEMPLO: 01 -\n");
                  printf("\nCODIGO:");
                  scanf("%s", codigo2);

                  printf("\nREGRA 04:  \n");
                  printf("- AO ESCOLHER O NOME DA CIDADE, SO PODERA DIGITAR ATE 20 CARACTERES UTILIZANDO UNDERLINE PARA O ESPACO EM NOMES COMPOSTOS E NAO USAR ACENTOS, EXEMPLO - SAO_PAULO -\n");
                  printf("\nCIDADE:");
                  scanf("%s", cidade2);

                  printf("\nREGRA 05:  \n");
                  printf("- AO INSERIR O NUMERO DE HABITANTES, NAO UTILIZAR PONTOS OU VIRGULAS, APENAS DIGITAR O NUMERO INTEIRO, EXEMPLO 123456789.\n");
                  printf("\nPOPULACAO:");
                  scanf("%lu", &populacao2);

                  printf("\nREGRA 06:  \n");
                  printf("- INSERIR A AREA DA CIDADE UTILIZANDO SOMENTE NUMEROS E PONTO (.) PARA CASAS DECIMAIS, EXEMPLO - 1234.56 - KM2\n");
                  printf("\nAREA:");
                  scanf("%f", &area2);

                  printf("\nREGRA 07:  \n");
                  printf("- INSERIR O PIB DA CIDADE UTILIZANDO SOMENTE NUMEROS E PONTO (.) PARA CASAS DECIMAIS, EXEMPLO - 655.360 - BILHOES DE REAIS\n");
                  printf("\nPIB:");
                  scanf("%f", &pib2);

                  printf("\nREGRA 08:  \n");
                  printf("- INSERIR APENAS NUMEROS DE 01 A 50 PARA A QUANTIDADE DE PONTOS TURISTICOS DA CIDADE, EXEMPLO: - 37 -\n");
                  printf("\nPONTOS TURISTICOS:");
                  scanf("%d", &pontosturisticos2);

                  densidade2 = (float) populacao2 / area2; // aqui calculamos a densidade pegando o valor das variaveis populacao2 e area2, fazendo casting para float antes do calculo e atribuindo o resultado na variavel densidade2.
                  pibpercapita2 = pib2 * 1000000000 / populacao2; // aqui calculamos primeiro o valor de entrada do pib2 * um bilhão para ter sentido financeiro e dividimos pelo valor da variavel populacao2 atribuindo o resultado do quociente a variavel pibpercapita2.

                  printf("\n%s AGORA VAMOS VER OS DADOS DA CARTA 02!\n", jogador);

                  printf("\n---%s---\n", carta2);
                  printf("\nESTADO E CODIGO: - (%s.%s) -\n", estado2, codigo2);
                  printf("\nCIDADE: %s. \n", cidade2);
                  printf("\nPOPULACAO: %lu HABITANTES.\n",populacao2);
                  printf("\nAREA: %.2f KM^2\n", area2);
                  printf("\nPIB: %.3f BILHOES DE REAIS.\n", pib2);
                  printf("\nPONTOS TURISTICOS: %i\n", pontosturisticos2);
                  printf("\nDENSIDADE POPULACIONAL: %.2f hab/km^2\n", densidade2); //aqui imprimimos o valor da nova variavel densidade2 da carta 2
                  printf("\nPIB PER CAPITA: %.2f reais\n", pibpercapita2); //aqui imprimimos o valor da nova variavel pibpercapita2 da carta 2

                  printf("\nMEUS PARABENS VOCE CONCLUIU COM SUCESSO, AGORA VAMOS COMPARAR OS PODERES DAS CARTAS! %s.\n", jogador);

                  densidadecomparada1 = densidade1 < densidade2;
                  densidadecomparada2 = densidade2 < densidade1;

                  SUPERPODER1 = (float)populacao1 
                              + (float)area1 
                              + (float)pib1 
                              + (float)pontosturisticos1 
                              + (float)densidade1 
                              + (float)pibpercapita1 
                              + (float)(densidadecomparada1);

                  SUPERPODER2 = (float)populacao2 
                              + (float)area2 
                              + (float)pib2 
                              + (float)pontosturisticos2 
                              + (float)densidade2 
                              + (float)pibpercapita2 
                              + (float)(densidadecomparada2);

                  //resultado dos superpoderes
                  printf(" %.2f\n", SUPERPODER1);

                  printf(" %.2f\n", SUPERPODER2);


                  printf("--- PERFEITO CHEGOU A HORA DE COMPARAR AS CARTAS LADO A LADO ---\n");
                  printf("--- PRESSIONE S E APERTE O ENTER PARA PROSSEGUIR ---\n");
                  scanf("%s", escolha);
                  // declaração das variaveis para comparação.

                   int comp_populacao1; 
                   int comp_area1;
                   int comp_pib1;
                   int comp_pontosturisticos1;
                   int comp_densidade1; 
                   int comp_pibpercapita1;
                   int comp_superpoder1;
                   int total1;

                   int comp_populacao2; 
                   int comp_area2;
                   int comp_pib2;
                   int comp_pontosturisticos2;
                   int comp_densidade2; 
                   int comp_pibpercapita2;
                   int comp_superpoder2;
                   int total2;

                   // AQUI IREMOS FAZER A COMPARAÇÃO E ATRIBUIR OS VALORES AS VARIAVEIS DE COMPARAÇÃO

                   comp_populacao1 = populacao1 > populacao2;
                   comp_area1 = area1 > area2;
                   comp_pib1 = pib1 > pib2;
                   comp_pontosturisticos1 = pontosturisticos1 > pontosturisticos2;
                   comp_densidade1 = densidade1 < densidade2;
                   comp_pibpercapita1 = pibpercapita1 > pibpercapita2;
                   comp_superpoder1 = SUPERPODER1 > SUPERPODER2;

                   comp_populacao2 = populacao2 > populacao1;
                   comp_area2 = area2 > area1;
                   comp_pib2 = pib2 > pib1;
                   comp_pontosturisticos2 = pontosturisticos2 > pontosturisticos1;
                   comp_densidade2 = densidade2 < densidade1;
                   comp_pibpercapita2 = pibpercapita2 > pibpercapita1;
                   comp_superpoder2 = SUPERPODER2 > SUPERPODER1;
                

                   printf("-----------------CARTA1--- VS ---CARTA2---.\n");
                   printf("ESTADO E CODIGO:-(%s.%s)---VS---(%s.%s)----.\n", estado1, codigo1, estado2, codigo2);
                   printf("---POPULACAO:------%i------VS------%i-----.\n", comp_populacao1, comp_populacao2);
                   printf("--------AREA:------%i------VS------%i-----.\n", comp_area1, comp_area2);
                   printf("---------PIB:------%i------VS------%i-----.\n", comp_pib1, comp_pib2);
                   printf("-----TURISMO:------%i------VS------%i-----.\n", comp_pontosturisticos1, comp_pontosturisticos2);
                   printf("---DENSIDADE:------%i------VS------%i-----.\n", comp_densidade1, comp_densidade2);
                   printf("PIBPERCAPITA:------%i------VS------%i-----.\n", comp_pibpercapita1, comp_pibpercapita2);
                   printf("--SUPERPODER:------%i------VS------%i-----.\n", comp_superpoder1, comp_superpoder2);

                   total1 = comp_populacao1 
                          + comp_area1 
                          + comp_pib1 
                          + comp_pontosturisticos1 
                          + comp_densidade1 
                          + comp_pibpercapita1 
                          + comp_superpoder1;

                   total2 = comp_populacao2 
                          + comp_area2 
                          + comp_pib2 
                          + comp_pontosturisticos2 
                          + comp_densidade2 
                          + comp_pibpercapita2 
                          + comp_superpoder2;

                    printf("-------------CARTA1----VS----CARTA2---.\n");

                   printf("TOTAL VENCEDOR:--%i-----VS------%i-----.\n", total1, total2);
                  

                  printf("\nDIGITE SAIR E APERTE ENTER PARA ENCERRAR: "); 
                  scanf("%s", escolha);

return 0;
}
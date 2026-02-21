#include <stdio.h>



// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {


  printf("DESAFIO SUPER TRUNFO - ALUNO: RENATO JUSSIM MONTEIRO");

  // DECLARANDO AS VARIAVEIS

// variaveis referentes a carta 1 do jogo.
    char jogador[21];
    char escolha[5];  

    char carta1[7] = "carta1"; //VARIÁVEL CARTA 1 JA SENDO DECLARADA COM VALOR - carta1.
    char estado1[2];
    char codigo1[3];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

//variaveis referentes a carta 2 do jogo

    char carta2[7] = "carta2"; //VARIÁVEL CARTA 2 JA SENDO DECLARADA COM VALOR - carta2.
    char estado2[2];
    char codigo2[3];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

// APRESENTAÇÃO DO SOFTWARE PARA O JOGADOR UTILIZANDO A FUNÇÃO PRINTF E \n para criar linhas.


    printf("SEJA BEM VINDO!!!\n"); 
    
    printf("\n - SUPER TRUNFO DIGITAL! -\n");

    printf("\nO PRIMEIRO PASSO É REALIZAR O SEU CADASTRO COMO JOGADOR E LOGO DEPOIS VOU TE AJUDAR A CADASTRAR AS SUAS CARTAS!\n");

    printf("\nDAQUI EM DIANTE VOU TE DANDO AS DICAS PARA O PREENCHIMENTO DOS SEUS DADOS OK!?\n");

    printf("\nMUITO BEM VAMOS LÁ AO NOSSO TUTORIAL!\n");

    printf("ATENÇÃO AS INFORMAÇÕES!\n"); 


    // CADASTRO DO NOME DO JOGADOR UTILIZANDO PRINTF E SCANF PARA INTERAÇÃO ENTRE MAQUINA E USUÁRIO.
    //UTILIZAÇÃO DA SINTAXE "" (ABRE NEGRITO) ----- "" (FECHA NEGRITO) COMO FORMA DE UTILIZAR TEXTO EM NEGRITO PARA DESTACAR A MENSSAGEM

    printf("REGRA 01");
    printf("- O SEU NOME DE JOGADOR SÓ PODERÁ CONTER ATÉ 20 CARACTERES E NÃO PODE CONTER ESPAÇO SE FOR NOME COMPOSTO OK!?.\n");

    printf("\nPOR FAVOR DIGITE O SEU NOME:");

    scanf("%s", jogador); 
    
    /*aqui utilizamos a formatação %s para o dado a ser captado pela função scanf e programamos para a variável &jogador
     utilizando &comercial como forma de travar e direcionar o dado a variavel corretamente sem ter sujeira da memória 
     causando falhas ou bugs indesejaveis, dando assim o valor digitado pelo usuário atribuido a variável jogador.*/

    printf("\nMUITO BOM NOME, SEJA BEM VINDO %s!!!\n", jogador);

    printf("\nAGORA, VAMOS COMEÇAR A CADASTRAR AS SUAS CARTAS!\n");

    printf("\nEU VOU TE AJUDAR COM AS DICAS ITEM A ITEM OK?, VAMOS EM FRENTE!\n");


    // CADASTRO DA CARTA 01
    //UTILIZAÇÃO DA SINTAXE "" (ABRE NEGRITO) ----- "" (FECHA NEGRITO) COMO FORMA DE UTILIZAR TEXTO EM NEGRITO PARA DESTACAR A MENSSAGEM

    printf("\n %s, por favor preencha os dados da primeira carta:\n", jogador);
    
    printf("\n---%s---\n", carta1);
    
    printf("REGRA 02:  \n");
    printf("- AO ESCOLHER O ESTADO, DEVERÁ DIGITAR APENAS UMA LETRA DE A atè H PARA SE REFERIR A UM DOS 8 ESTADOS.\n");
    printf("\nESTADO:");
    scanf("%s", estado1);

    printf("\nREGRA 03:  \n");
    printf("- AO ESCOLHER O CÓDIGO, DEVERÁ DIGITAR APENAS DOIS NUMEROS DE 01 atè 04, EXEMPLO: 01 -\n");
    printf("\nCÓDIGO:");
    scanf("%s", codigo1);

    printf("\nREGRA 04:  \n");
    printf("- AO ESCOLHER O NOME DA CIDADE, SÓ PODERÁ DIGITAR ATÉ 20 CARACTERES UTILIZANDO UNDERLINE PARA O ESPAÇO EM NOMES COMPOSTOS E NÃO USAR ACENTOS, EXEMPLO - SAO_PAULO -\n");
    printf("\nCIDADE:");
    scanf("%s", cidade1);

    printf("\nREGRA 05:  \n");
    printf("- AO INSERIR O NUMERO DE HABITANTES, NÃO UTILIZAR PONTOS OU VIRGULAS, APENAS DIGITAR O NUMERO INTEIRO, EXEMPLO 123456789.\n");
    printf("\nPOPULAÇÃO:");
    scanf("%i", &populacao1);

    printf("\nREGRA 06:  \n");
    printf("- INSERIR A ÁREA DA CIDADE UTILIZANDO SOMENTE NÚMEROS E PONTO (.) PARA CASAS DECIMAIS, EXEMPLO - 1234.56 - KM2\n");
    printf("\nÁREA:");
    scanf("%f", &area1);

    printf("\nREGRA 07:  \n");
    printf("- INSERIR O PIB DA CIDADE UTILIZANDO SOMENTE NÚMEROS E PONTO (.) PARA CASAS DECIMAIS, EXEMPLO - 655.360 - BILHÕES DE REAIS\n");
    printf("\nPIB:");
    scanf("%f", &pib1);

    printf("\nREGRA 08:  \n");
    printf("- INSERIR INSERIR APENAS NUMEROS DE 01 A 50 PARA A QUANTIDADE DE PONTOS TURISTICOS DA CIDADE, EXEMPLO: - 37 -\n");
    printf("\nPONTOS TURISTICOS:");
    scanf("%d", &pontosturisticos1);

    printf("\nMUITO BOM MESMO!!! %s, AGORA VAMOS VER OS DADOS DA CARTA 01!\n", jogador);

    printf("DIGITE S E APERTE ENTER PARA VER OS DADOS DA CARTA 01.");
    scanf("%s", escolha);

    printf("\n---%s---\n", carta1);
    printf("\nESTADO E CÓDIGO: - (%s.%s) -\n", estado1, codigo1);
    printf("\nCIDADE: %s. \n", cidade1);
    printf("\nPOPULAÇÃO: %d MILHÕES DE HABITANTES.\n",populacao1);
    printf("\nÁREA: %.2f KM2\n", area1);
    printf("\nPIB: %.3f BILHÕES DE REAIS.\n", pib1);
    printf("\nPONTOS TURISTICOS: %i\n", pontosturisticos1);

    printf("\nDIGITE S E APERTE ENTER PARA PROSSEGUIR PARA A PROXIMA CARTA:");
    scanf("%s", escolha);

//  CADASTRO DA CARTA 02
//UTILIZAÇÃO DA SINTAXE "" (ABRE NEGRITO) ----- "" (FECHA NEGRITO) COMO FORMA DE UTILIZAR TEXTO EM NEGRITO PARA DESTACAR A MENSSAGEM

    printf("\n %s, por favor preencha os dados da segunda carta:\n", jogador);
    
    printf("\n---%s---\n", carta2);
    
    printf("REGRA 02:  \n");
    printf("- AO ESCOLHER O ESTADO, DEVERÁ DIGITAR APENAS UMA LETRA DE A atè H PARA SE REFERIR A UM DOS 8 ESTADOS.\n");
    printf("\nESTADO:");
    scanf("%s", estado2);

    printf("\nREGRA 03:  \n");
    printf("- AO ESCOLHER O CÓDIGO, DEVERÁ DIGITAR APENAS DOIS NUMEROS DE 01 atè 04, EXEMPLO: 01 -\n");
    printf("\nCÓDIGO:");
    scanf("%s", codigo2);

    printf("\nREGRA 04:  \n");
    printf("- AO ESCOLHER O NOME DA CIDADE, SÓ PODERÁ DIGITAR ATÉ 20 CARACTERES UTILIZANDO UNDERLINE PARA O ESPAÇO EM NOMES COMPOSTOS E NÃO USAR ACENTOS, EXEMPLO - SAO_PAULO -\n");
    printf("\nCIDADE:");
    scanf("%s", cidade2);

    printf("\nREGRA 05:  \n");
    printf("- AO INSERIR O NUMERO DE HABITANTES, NÃO UTILIZAR PONTOS OU VIRGULAS, APENAS DIGITAR O NUMERO INTEIRO, EXEMPLO 123456789.\n");
    printf("\nPOPULAÇÃO:");
    scanf("%i", &populacao2);

    printf("\nREGRA 06:  \n");
    printf("- INSERIR A ÁREA DA CIDADE UTILIZANDO SOMENTE NÚMEROS E PONTO (.) PARA CASAS DECIMAIS, EXEMPLO - 1234.56 - KM2\n");
    printf("\nÁREA:");
    scanf("%f", &area2);

    printf("\nREGRA 07:  \n");
    printf("- INSERIR O PIB DA CIDADE UTILIZANDO SOMENTE NÚMEROS E PONTO (.) PARA CASAS DECIMAIS, EXEMPLO - 655.360 - BILHÕES DE REAIS\n");
    printf("\nPIB:");
    scanf("%f", &pib2);

    printf("\nREGRA 08:  \n");
    printf("- INSERIR INSERIR APENAS NUMEROS DE 01 A 50 PARA A QUANTIDADE DE PONTOS TURISTICOS DA CIDADE, EXEMPLO: - 37 -\n");
    printf("\nPONTOS TURISTICOS:");
    scanf("%d", &pontosturisticos2);

// APRESENTAÇÃO DA CARTA 02 PREENCHIDAS PELO USUÁRIO

    printf("\n%s AGORA VAMOS VER OS DADOS DA CARTA 02!\n", jogador);

    printf("\n---%s---\n", carta2);
    printf("\nESTADO E CÓDIGO: - (%s.%s) -\n", estado2, codigo2);
    printf("\nCIDADE: %s. \n", cidade2);
    printf("\nPOPULAÇÃO: %d MILHÕES DE HABITANTES.\n",populacao2);
    printf("\nÁREA: %.2f KM2\n", area2);
    printf("\nPIB: %.3f BILHÕES DE REAIS.\n", pib2);
    printf("\nPONTOS TURISTICOS: %i\n", pontosturisticos2);

    // ATÉ LOGO PARA O USUÁRIO APOS PREENCHER E CONFERIR SUAS CARTAS.

    printf("\nMEUS PARABENS VOCE CONCLUIU COM SUCESSO, NOS VEMOS NA PROXIMA ETAPA! ATÉ LOGO %s.\n", jogador);

    printf("\nDIGITE SAIR E APERTE ENTER PARA ENCERRAR: ");
    scanf("%s", escolha);

    return 0;




return 0;
} 

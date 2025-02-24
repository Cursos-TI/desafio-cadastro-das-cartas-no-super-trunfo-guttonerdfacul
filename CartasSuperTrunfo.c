// Aluno: José Augusto Benedito
// 1o. Semestre 2025

// Projeto: Super Trunfo - Países
// Linguagem C

#include <stdio.h>

int main() 
{
    // Variáveis
    char pais[7] = "BRASIL";
    char c_estado1, c_estado2;                      // Código do estado com 1 caractere de A a H
    char n_estado1[30], n_estado2[30];              // Nome do estado 
    char c_cidade1[5], c_cidade2[5];                // O código da cidade deverá ser o código do estado (de A a Z) + um número de 01 a 04 (com 2 dígitos)
    char n_cidade1[30], n_cidade2[30];              // Nome da cidade 
    int pop1, pop2;                                 // População
    double area1, area2;                            // Área (mudado de float para double)
    double pib1, pib2;                              // PIB (mudado de float para double)
    int p_tur1, p_tur2;                             // Número de Pontos turísticos

    
    // ENTRADA DE DADOS DA PRIMEIRA CARTA

    printf(" || --------------- CARTA 01 --------------- ||\n");
    printf("  \n");
    printf("* Insira o 'CÓDIGO' do ESTADO entre A a H: ");
    scanf(" %c", &c_estado1);
    printf("* Nome real deste ESTADO?: ");
    scanf(" %s", &n_estado1);  
    printf("* Insira o 'CÓDIGO' da CIDADE (Código do estado que você escolheu + um número de 01 a 04 com 2 dígitos): ");
    scanf(" %s", &c_cidade1);  
    printf("* Nome real desta CIDADE?: ");
    scanf(" %s", &n_cidade1);  
    printf("* Qual a POPULAÇÃO de ** %s **: ", n_cidade1);
    scanf(" %d", &pop1);
    printf("* Qual a ÁREA de ** %s **: ", n_cidade1);
    scanf(" %lf", &area1);                          // Mudado de %f para %lf
    printf("* Qual o PIB de ** %s **: ", n_cidade1);
    scanf(" %lf", &pib1);                           // Mudado de %f para %lf
    printf("* Quantos pontos turísticos tem ** %s **: ", n_cidade1);
    scanf("%d", &p_tur1);

    // PULANDO ALGUMAS LINHAS 

    printf(" \n");          
    printf(" \n");
    printf(" \n");

    // ENTRADA DE DADOS DA SEGUNDA CARTA

    printf(" || --------------- CARTA 02 --------------- ||\n");
    printf("  \n");
    printf("* Insira o 'CÓDIGO' do ESTADO entre A a H: ");
    scanf(" %c", &c_estado2);
    printf("* Nome real deste ESTADO?: ");
    scanf(" %s", &n_estado2);  
    printf("* Insira o 'CÓDIGO' da CIDADE (Código do estado que você escolheu + um número de 01 a 04 com 2 dígitos): ");
    scanf(" %s", &c_cidade2);  
    printf("* Nome real desta CIDADE?: ");
    scanf(" %s", &n_cidade2);  
    printf("* Qual a POPULAÇÃO de ** %s **: ", n_cidade2);
    scanf(" %d", &pop2);
    printf("* Qual a ÁREA de ** %s **: ", n_cidade2);
    scanf(" %lf", &area2);                          // Mudado de %f para %lf
    printf("* Qual o PIB de ** %s **: ", n_cidade2);
    scanf(" %lf", &pib2);                           // Mudado de %f para %lf
    printf("* Quantos pontos turísticos tem ** %s **: ", n_cidade2);
    scanf("%d", &p_tur2);

    // PULANDO ALGUMAS LINHAS

    printf(" \n");          
    printf(" \n");
    
    // CONFIRMAÇÃO DOS DADOS INSERIDOS
    // CARTA 1
    
    printf(" ----- CARTA 1 ----- \n");
    printf(" \n");
    printf("Estado: %c - %s\n", c_estado1, n_estado1);
    printf("Código: %s\n", c_cidade1);
    printf("Nome da Cidade: %s\n", n_cidade1);
    printf("População: %d habitantes\n", pop1);  
    printf("Área: %.2f Km²\n", area1);              // %f continua funcionando para double
    printf("PIB: %.2f bilhões de Reais\n", pib1);   // %f continua funcionando para double
    printf("Quantidade de Pontos Turísticos: %d \n", p_tur1);

    // PULANDO ALGUMAS LINHAS

    printf(" \n");          
    printf(" \n");

    // CONFIRMAÇÃO DOS DADOS INSERIDOS
    // CARTA 2
    
    printf(" ----- CARTA 2 ----- \n");
    printf(" \n");
    printf("Estado: %c - %s\n", c_estado2, n_estado2);
    printf("Código: %s\n", c_cidade2);
    printf("Nome da Cidade: %s\n", n_cidade2);
    printf("População: %d habitantes\n", pop2);  
    printf("Área: %.2f Km²\n", area2);              // %f continua funcionando para double
    printf("PIB: %.2f bilhões de Reais\n", pib2);   // %f continua funcionando para double
    printf("Quantidade de Pontos Turísticos: %d \n", p_tur2);

    return 0;
}
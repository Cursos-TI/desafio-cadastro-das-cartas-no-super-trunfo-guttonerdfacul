// Aluno: José Augusto Benedito
// 1o. Semestre 2025

// Projeto: Super Trunfo - Países
// Linguagem C - Batalha de Cartas

// ****** NIVEL: NOVATO / AVENTUREIRO / MESTRE ******

#include <stdio.h>

int main() 
{
    // Variáveis
    char pais[7] = "BRASIL";
    char c_estado1, c_estado2;                      // Código do estado com 1 caractere de A a H
    char n_estado1[30], n_estado2[30];              // Nome do estado 
    char c_cidade1[5], c_cidade2[5];                // Código da cidade
    char n_cidade1[30], n_cidade2[30];              // Nome da cidade 
    unsigned long int pop1, pop2;                   // População (mudado para unsigned long int)
    double area1, area2;                            // Área
    double pib1, pib2;                              // PIB
    int p_tur1, p_tur2;                             // Número de Pontos turísticos
    double dens_pop1, dens_pop2;                    // Densidade Populacional
    double pib_perc1, pib_perc2;                    // PIB Per Capita
    float super_poder1, super_poder2;               // Super Poder

    // ENTRADA DE DADOS DA PRIMEIRA CARTA
    printf(" || --------------- CARTA 01 --------------- ||\n\n");
    printf("* Insira o 'CÓDIGO' do ESTADO entre A a H: ");
    scanf(" %c", &c_estado1);
    printf("* Nome real deste ESTADO?: ");
    scanf(" %s", n_estado1);  
    printf("* Insira o 'CÓDIGO' da CIDADE (Código do estado + 01 a 04): ");
    scanf(" %s", c_cidade1);  
    printf("* Nome real desta CIDADE?: ");
    scanf(" %s", n_cidade1);  
    printf("* Qual a POPULAÇÃO de ** %s **: ", n_cidade1);
    scanf(" %lu", &pop1);
    printf("* Qual a ÁREA de ** %s **: ", n_cidade1);
    scanf(" %lf", &area1);
    printf("* Qual o PIB de ** %s ** (em bilhões): ", n_cidade1);
    scanf(" %lf", &pib1);
    printf("* Quantos pontos turísticos tem ** %s **: ", n_cidade1);
    scanf("%d", &p_tur1);

    printf("\n\n");

    // ENTRADA DE DADOS DA SEGUNDA CARTA
    printf(" || --------------- CARTA 02 --------------- ||\n\n");
    printf("* Insira o 'CÓDIGO' do ESTADO entre A a H: ");
    scanf(" %c", &c_estado2);
    printf("* Nome real deste ESTADO?: ");
    scanf(" %s", n_estado2);  
    printf("* Insira o 'CÓDIGO' da CIDADE (Código do estado + 01 a 04): ");
    scanf(" %s", c_cidade2);  
    printf("* Nome real desta CIDADE?: ");
    scanf(" %s", n_cidade2);  
    printf("* Qual a POPULAÇÃO de ** %s **: ", n_cidade2);
    scanf(" %lu", &pop2);
    printf("* Qual a ÁREA de ** %s **: ", n_cidade2);
    scanf(" %lf", &area2);
    printf("* Qual o PIB de ** %s ** (em bilhões): ", n_cidade2);
    scanf(" %lf", &pib2);
    printf("* Quantos pontos turísticos tem ** %s **: ", n_cidade2);
    scanf("%d", &p_tur2);

    // CÁLCULOS
    dens_pop1 = (double)pop1 / area1;                       // Densidade populacional carta 1
    dens_pop2 = (double)pop2 / area2;                       // Densidade populacional carta 2

    pib_perc1 = (pib1 * 1000000000) / (double)pop1;        // PIB per capita carta 1
    pib_perc2 = (pib2 * 1000000000) / (double)pop2;        // PIB per capita carta 2

    super_poder1 = (float)pop1 + area1 + pib1 + p_tur1 + pib_perc1 + (1.0/dens_pop1);  // Super Poder carta 1 ** (inverso da densidade populacional (1.0/dens_pop), que é um valor muito pequeno, mas contribui para o total)
    super_poder2 = (float)pop2 + area2 + pib2 + p_tur2 + pib_perc2 + (1.0/dens_pop2);  // Super Poder carta 2

    // EXIBIÇÃO DOS DADOS

    printf("\n\n ----- CARTA 1 ----- \n\n");
    printf("Estado: %c - %s\n", c_estado1, n_estado1);
    printf("Código: %s\n", c_cidade1);
    printf("Nome da Cidade: %s\n", n_cidade1);
    printf("População: %lu habitantes\n", pop1);  
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de Reais\n", pib1);
    printf("Pontos Turísticos: %d\n", p_tur1);
    printf("Densidade Populacional: %.2f hab/km²\n", dens_pop1);
    printf("PIB per Capita: R$ %.2f\n", pib_perc1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n\n ----- CARTA 2 ----- \n\n");
    printf("Estado: %c - %s\n", c_estado2, n_estado2);
    printf("Código: %s\n", c_cidade2);
    printf("Nome da Cidade: %s\n", n_cidade2);
    printf("População: %lu habitantes\n", pop2);  
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de Reais\n", pib2);
    printf("Pontos Turísticos: %d\n", p_tur2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens_pop2);
    printf("PIB per Capita: R$ %.2f\n", pib_perc2);
    printf("Super Poder: %.2f\n", super_poder2);

    // COMPARAÇÃO DAS CARTAS 

    printf("\n\nComparação de Cartas:\n\n");
    printf("População: Carta 1 venceu (%d)\n", pop1 > pop2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", p_tur1 > p_tur2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", dens_pop1 < dens_pop2);  // Menor densidade vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n\n\n", pib_perc1 > pib_perc2);

    // CARTA VENCEDORA

    printf("[**SUPER PODER**] - Carta 1 venceu? (%d)\n\n", super_poder1 > super_poder2);

    return 0;
}
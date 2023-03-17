/*Questão 1 - Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-
se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta
qual o valor de venda e indica a percentagem de lucro da mercadoria*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float custo, frete, despesas, venda, calculo, lucro, percentagem_lucro;

    printf("Vamos calcular quanto foi gasto comprando um mercadoria e qual a porcentagem de lucro vendendo-a.");
    printf("Insira o custo dessa mercadoria inicialmente: ");
    scanf("%f", &custo);
    printf("\nInsira o valor do frete com essa mercadoria: ");
    scanf("%f", &frete);
    printf("\nInsira o valor das outras despesas que teve com essa mercadoria: ");
    scanf("%f", &despesas);
    printf("\nInforme o valor que voce vendeu essa mercadoria: ");
    scanf("%f", &venda);

    calculo = custo + frete + despesas;
    lucro = venda - calculo;
    percentagem_lucro = (lucro/venda) * 100; 

    system("cls");
    printf("A sua porcentagem de lucro foi de %.2f porcento", percentagem_lucro);
}
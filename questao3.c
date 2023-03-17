/*Questão 3 - Faça um programa que calcule a quantidade necessária de latas de tinta para pintar uma parede. O
programa pergunta as medidas de largura e altura da parede em metros e escreve quantas latas de tinta serão
necessárias para pintá-la. Considere que o consumo de tinta é de 300 ml por metro quadrado e a quantidade de tinta
por lata é de 2 litros*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    float largura, altura, area_parede, quantidade_tinta, conversao, quantidade_lata;

    printf("Vamos calcular quantas latas de tinta sera necessario para pintar uma parede. Tendo em vista que cada m² usa 300ml");
    printf("\nInsira o valor da altura dessa parede: ");
    scanf("%f", &altura);
    printf("\nInsira o valor da largura dessa parede: ");
    scanf("%f", &largura);

    area_parede = altura * largura;
    quantidade_tinta = area_parede * 300;
    conversao = quantidade_tinta * 0.001;
    quantidade_lata = conversao/2;

    printf("\nA area dessa parede é %.2f", area_parede);
    printf("\nSera necessario de %.2f ml para pintar a parede", quantidade_tinta);
    printf("\nEsse valor equivale a %.2f litros", conversao);

    printf("\nSera necessario de %.2f ml para pintar a parede", quantidade_tinta);
    printf("\nEsse valor equivale a %.2f litros", conversao);
    printf("\nNo total sera necessario de %.2f latas de tinta para pintar toda a parede.", quantidade_lata);


}
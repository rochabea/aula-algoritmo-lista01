/*Questão 2 - Faça um programa que pergunte qual o raio de um círculo, calcule e imprima a sua área*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float raio, area;
    float pi = 3.14159;

    printf("Iremos calcular a area de um circulo.");
    printf("Informe o valor do raio do circulo: ");
    scanf("%f", &raio);

    area = pi * (pow (raio, 2));

    printf("O valor da area do circulo foi: %f", area);


}
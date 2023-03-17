/*Questão 4 - Faça um programa em que o usuário digite 4 notas, em seguida, calcule e imprima a média entre eles.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
     float n1, n2, n3, n4, media;

     printf("Iremos calcular a media do usuario.");
     printf("\nInsira o valor da primeira nota do usuario: ");
     scanf("%f", &n1);
     printf("\nInsira o valor da segunda nota do usuario: ");
     scanf("%f", &n2);
     printf("\nInsira o valor da terceira nota do usuario: ");
     scanf("%f", &n3);
     printf("\nInsira o valor da quarta nota do usuário: ");
     scanf("%f", &n4);

     media = (n1 + n2 + n3 + n4)/4;

     printf("\nO valor da media das notas desse usuario é %.2f", media);

}
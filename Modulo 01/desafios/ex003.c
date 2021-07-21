#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");
    char nome[30];
    unsigned int idade;
    float peso;
    printf("qual o seu nome: ");
    gets(nome);
    printf("quantos anos vc tem: ");
    scanf("%i", &idade);
    printf("qual o seu peso(kg): ");
    scanf("%f", &peso);
    printf("--------<<<Processando>>>--------\n");
    printf("muito prazer, %s. voce tem %i anos e pesa %.1fkg correto? \nFIM.", nome, idade, peso);
}
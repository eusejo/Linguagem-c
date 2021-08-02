#include <stdio.h>

void main(){
    char nome[30];
    float nota1, nota2;
    printf("nome do aluno: ");
    gets(nome);
    printf("nota 1: ");
    scanf("%f", &nota1);
    printf("nota 2: ");
    scanf("%f", &nota2);
    float media = (nota1+nota2)/2;
    printf("o aluno %s tirou notas %.1f e %.1f e ficou com media %.1f", nome, nota1, nota2, media);
}
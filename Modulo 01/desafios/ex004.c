#include <stdio.h>

void main(){
    char nome1[30], nome2[30], nome3[30];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;

    printf("Cadastrando a primeira pessoa:\n");
    printf("------------------------------\n");
    printf("NOME: ");
    gets(nome1);
    fflush(stdin); //limpando o bufer
    printf("SEXO [M/F]: ");
    sexo1 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota1);

    printf("\n");

    printf("Cadastro da segunda pessoa:\n");
    printf("---------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome2);
    printf("SEXO [M/F]: ");
    sexo2 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota2);

    printf("\n");

    printf("Cadastro da terceira pessoa:\n");
    printf("---------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome3);
    printf("SEXO [M/F]: ");
    sexo3 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota3);

    printf("\n");

    printf("Listagem completa\n");
    printf("----------------------------\n");
    printf("NOME\t\tsexo\tnota\n");
    printf("%s\t\t%c\t%.2f\n",nome1, sexo1, nota1);
    printf("%s\t\t%c\t%.2f\n",nome2, sexo2, nota2);
    printf("%s\t\t%c\t%.2f\n",nome3, sexo3, nota3);
}
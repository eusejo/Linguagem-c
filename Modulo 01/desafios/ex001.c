#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese")
    printf("Listagem de Alunos\n");
    printf("Nome \t\tNota\n");
    printf("---------------------\n");
    printf("Ana Beatriz\t 8.5 \nBianca Martins\t 9.0\n");
    printf("Cláudio sá\t 5.5 \nGiovana Silva\t 7.5");
}

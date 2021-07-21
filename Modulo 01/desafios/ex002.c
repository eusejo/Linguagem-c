#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\\a\t=\t Bepp\n");
    printf("\\n\t=\t Nova linha\n");
    printf("\\t\t=\t Tabulação\n");
    printf("\\\\ \t=\t Barra\n");
    printf("%%%%\t=\t Porcentagem\n");
    printf("\\\?\t=\t Interrogão\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
}

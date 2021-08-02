#include <stdio.h>

void main(){
    int a;
    printf("digite um numero: ");
    scanf("%i", &a);
    printf("analisando o numero %i, seu dobro e %i\n", a, a*2);
    printf("e sua terca parte e %i", a/3);
}
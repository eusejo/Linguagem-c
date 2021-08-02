#include <stdio.h>

void main(){
    int a;
    printf("digite um numero: ");
    scanf("%i", &a);
    printf("o seu sucessor e: %i\n", a+1);
    printf("o seu antecessor e: %i\n", a-1);
}
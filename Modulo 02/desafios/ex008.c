#include <stdio.h>

void main(){
    char l;
    printf("digite uma letra: ");
    scanf("%c", &l);
    printf("antes da letra %c temos a letra %c. depois temos a letra %c", l, l-1, l+1);
}
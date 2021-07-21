#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int p, c;
    srand(time(NULL));
    c = rand() % 5 + 1;
    printf("vou pensar em um numero entre 1 e 5. tente adivinhar\n");
    printf("qual o seu palpite: ");
    scanf("%i", &p);
    printf("eu pensei no numero %i e vc pensou no numero %i", c, p);
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    srand(time(NULL));
    int n = rand() % 10;
    printf("eu gerei o numero (%i)",n);
}

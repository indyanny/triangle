#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, k;

    printf("Digite o valor de base do triangulo:");
    scanf("%d", &k);

    for(i = 1; i <= k; i++){
        for(j = k - i; j >= 1; j--)
        printf(" ");
        for(j = 1; j <= i; j++)
        printf("#");

        printf("\n");
    }
    

    return 0;
}
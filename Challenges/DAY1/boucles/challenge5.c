#include <stdio.h>

int main(){

    int base,puissance, result = 1;

    printf("Donner un base : ");
    scanf("%d",&base);

    printf("Donner un puissance : ");
    scanf("%d",&puissance);

    for(int i = 1; i <= puissance;i++){
        result *= base;
    }

    printf("\nresult %d",result);

    return 0;
}
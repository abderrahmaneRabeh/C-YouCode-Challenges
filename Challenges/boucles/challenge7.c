#include <stdio.h>

int main(){

    
    int n;

    printf("Donner un nombre : ");
    scanf("%d",&n);

    printf("\nREVERSE : ");

    while(n > 0){
        int chiffre = n % 10;
        printf("%d ",chiffre);
        n /= 10;
    }

    return 0;
}
#include <stdio.h>

int main(){

    
    int n;


    printf("Donner un nombre : ");
    scanf("%d",&n);

    printf("\nREVERSE : ");

    int chiffre;
    while(n > 0){
        chiffre = n % 10;
        printf("%d ",chiffre);
        n /= 10;
    }

    return 0;
}
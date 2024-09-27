#include <stdio.h>

int main(){

    int n, somme = 0;

    printf("Donner nombre des elemens : ");
    scanf("%d",&n);

    int numbers[n + 1];

    for (int i = 0; i < n; i++){
        printf("\n\nDonner nombre : ");
        scanf("%d",&numbers[i]);

        somme += numbers[i];
        
    }

    printf("\n\nLa somme est : %d",somme);



    
    return 0;
}
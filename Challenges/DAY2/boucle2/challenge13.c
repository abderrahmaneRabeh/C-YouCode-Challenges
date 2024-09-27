#include <stdio.h>

int main(){

    int number, somme = 0;

    printf("\nDonner un nombre pour multiplication : ");
    scanf("%d",&number);

    for(int i = 0 ; i <= 10; i++){

        somme += number * i;

        printf("%d X %d = %d", number, i,number * i);
        printf("\n\n");

    }

     printf("\nLa somme de produit : %d ",somme);

    return 0;
}
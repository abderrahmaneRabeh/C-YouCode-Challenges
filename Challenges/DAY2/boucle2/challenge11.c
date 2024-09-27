#include <stdio.h>


int main(){

    char Continue = 'y';
    int n, add = 0;

    printf("\nDonner | 1 | nombre : ");
    scanf("%d",&n);
    add += (n / 10 );

    int cpt = 1;
    while(Continue != 'n'){

        printf("\nDonner | %d | nombre : ",++cpt);
        scanf("%d",&n);

        add += (n / 10 );

        printf("\n\n Continue ? (y) / (n) : ");
        scanf(" %c",&Continue);

    }

    printf("\nLa somme est : %d",add / 3);




    return 0;
}
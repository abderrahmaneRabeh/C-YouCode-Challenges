#include <stdio.h>

int main(){

     int n, multp_num;

    printf("Donner nombre des elemens : ");
    scanf("%d",&n);

    int numbers[n + 1];

    printf("\n\nDonner un facteur a multiplier : ");
    scanf("%d",&multp_num);

    for(int i =0; i < n; i++){
        printf("\nAjoute le nombre : ");
        scanf("%d",&numbers[i]);
    }
    printf("\n--------------------------------\n");

    for(int i =0; i < n; i++){
        printf(" %d | ",numbers[i]);
    }
    printf("\n--------------------------------\n");

       for(int i =0; i < n; i++){
        printf(" %d | ",numbers[i] * multp_num);
    }



    return 0;
}
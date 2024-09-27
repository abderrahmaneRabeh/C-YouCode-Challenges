#include <stdio.h>

int main(){

     int n, min;

    printf("Donner nombre des elemens : ");
    scanf("%d",&n);

    int numbers[n + 1];

    for(int i =0; i < n; i++){
        printf("\nAjoute le nombre : ");
        scanf("%d",&numbers[i]);

        if(i == 0){
            min = numbers[i];
        }

        if(numbers[i] < min){
            min = numbers[i];
        }
    }
    printf("\n--------------------------------\n");

    for(int i =0; i < n; i++){
        printf(" %d | ",numbers[i]);
    }
    printf("\n--------------------------------\n");

    printf("\nLE min : %d", min);


    return 0;
}
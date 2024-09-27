#include <stdio.h>

int main(){

     int n, max = 0;

    printf("Donner nombre des elemens : ");
    scanf("%d",&n);

    int numbers[n + 1];

    for(int i =0; i < n; i++){
        printf("\nAjoute le nombre : ");
        scanf("%d",&numbers[i]);

        if(numbers[i] > max){
            max = numbers[i];
        }
    }
    printf("\n--------------------------------\n");

    for(int i =0; i < n; i++){
        printf(" %d | ",numbers[i]);
    }
    printf("\n--------------------------------\n");

    printf("\nLE MAX : %d", max);


    return 0;
}
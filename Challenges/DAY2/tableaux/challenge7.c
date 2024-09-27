#include <stdio.h>


int main(){

     int n;

    printf("Donner nombre des elemens : ");
    scanf("%d",&n);

    int numbers[n + 1];

    
    for(int i =0; i < n; i++){
        printf("\nAjoute le nombre : ");
        scanf("%d",&numbers[i]);
    }

    printf("\n\n Tri \n\n");

    int temp = 0;

    for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
        if (numbers[j] > numbers[j + 1]) {

            temp = numbers[j + 1];
            numbers[j + 1] = numbers[j];
            numbers[j] = temp;
        }
    }
}

    for(int i = 0; i < n; i++){
        printf("%d ",numbers[i]);
    }

    // tri_list(numbers,n);
    return 0;
}
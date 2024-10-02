#include <stdio.h>

int main(){

    int n;

    printf("\n\n\t->Donner nombre de entier :");
    scanf("%d", &n);

    int numbers[n];

    for(int i = 0; i < n; i++){

        printf("\n-> donner entier %d : ",i + 1);
        scanf("%d", &numbers[i]);
    }

    for(int i = 0; i < n; i++){

        int element_compare = numbers[i];
        int j = i - 1;

        while(j >= 0 && numbers[j] > element_compare){

            numbers[j + 1] = numbers[j];
            j--;
        }

        numbers[j + 1] = element_compare;
    }

    printf("\n\t->tri par insertion : ");
    for(int i = 0; i < n; i++){

        printf("%d ",numbers[i]);
    }

    return 0;
}
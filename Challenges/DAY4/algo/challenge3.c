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

    for(int i = 0; i < n - 1; i++){

        int mini = i;

        int temp;

        for(int j = i + 1; j < n; j++){

            if(numbers[j] < numbers[mini]){

                mini = j;
            }
        }

        if(i != mini){
            temp = numbers[i];
            numbers[i] = numbers[mini];
            numbers[mini] = temp;
        }

    }

    printf("\n\n--> Apres Tri par Sélection : ");
    for (int i = 0; i < n; i++) {

        printf("%d ", numbers[i]);
    }

    return 0;
}
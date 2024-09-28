#include <stdio.h>

int main(){

    int n;

    printf("\nDonner nombre d'elements: ");
    scanf("%d",&n);

    int numbers[n];
    int copy_numbers[n];

    int el = 1;

    for(int i = 0; i < n; i++){

        printf("\n->donner | %d | nombre : ",el);
        scanf("%d", &numbers[i]);
        el++;
        
    }

    for(int i = 0; i < n; i++){
        copy_numbers[i] = numbers[i];
    }

    for(int i = 0; i < n; i++){
        printf("%d  ",copy_numbers[i]);
    }

    return 0;
}
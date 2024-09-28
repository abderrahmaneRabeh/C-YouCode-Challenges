#include <stdio.h>

int main(){

    int n;

    printf("\nDonner nombre d'elements: ");
    scanf("%d",&n);

    int numbers[n];
    int reverse_numbers[n];

    int el = 1;

    for(int i = 0; i < n; i++){

        printf("\n->donner | %d | nombre : ",el);
        scanf("%d", &numbers[i]);
        el++;
        
    }

    for(int i = 0; i < n; i++){
        reverse_numbers[i] = numbers[i];
    }

    int temp = 0;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n - 1 - i; j++){
            temp = reverse_numbers[i];
            reverse_numbers[i] = reverse_numbers[i+1];
            reverse_numbers[i+1] = temp;
        }
    }

    for(int i = n - 1; i >= 0; i--){
        printf("%d  ",numbers[i]);
    }

    return 0;
}
#include <stdio.h>

int main(){

    int n;

    printf("\nDonner nombre d'elements: ");
    scanf("%d",&n);

    int numbers[n];

    int el = 1;

    for(int i = 0; i < n; i++){

        printf("\n->donner | %d | nombre : ",el);
        scanf("%d", &numbers[i]);
        el++;
        
    }

    for(int i = 0; i < n; i++){
        if(numbers[i] % 2 == 0){
            
            printf("%d ",numbers[i]);
        }
    }

    return 0;
}
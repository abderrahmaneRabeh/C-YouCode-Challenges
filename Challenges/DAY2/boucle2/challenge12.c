#include <stdio.h>

int main(){

    int n, temp;

    printf("\nDonner nombre d'element : ");
    scanf("%d",&n); 

    int numbers[n + 1];

    temp = 1;
    for(int i = 0; i < n; i++){
        printf("\n\nDonner | %d | nombre : ",temp);
        scanf("%d",&numbers[i]);
        temp++;
    }

       printf("\n\navant tri : ");

    for(int i = 0; i < n; i++){

        printf("%d ",numbers[i]);
    }

    temp = 0;
    for (int i = 0; i < n - 1; i++) { 

        for (int j = 0; j < n - 1 - i; j++) { 
            
            if (numbers[j] > numbers[j + 1]) { 
                
                temp = numbers[j + 1];
                numbers[j + 1] = numbers[j];
                numbers[j] = temp;
            }
    }
}

    printf("\n\napres tri : ");

    for(int i = 0; i < n; i++){

        printf("%d ",numbers[i]);
    }
    

    return 0;
}
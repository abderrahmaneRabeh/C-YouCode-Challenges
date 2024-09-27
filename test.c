#include <stdio.h>

int main()
{

    int numbers[5];
    int result = 0 , high = 0, small;
    
    for(int i = 0; i < 5; i++ ){

        printf("\n\nDonner %d nomber : ",i+1);
        scanf("%d",&numbers[i]);

        if(i == 0){
            small = numbers[i];
        }

        if (numbers[i] > high){
            high = numbers[i];
        }
        if(numbers[i] < small){
            small = numbers[i];
        }

        // printf("\n New value High: %d ", high);
        // printf("\n New value Small: %d ", small);

    }

   
    printf("\n\n --------------------");  

    for(int j = 0 ; j < 5; j++){
        result += numbers[j]; 
    }


    printf("\n\n RESULT IS : %d", result);
    printf("\n\n FOUR HIGH VALUE : %d - %d = %d",result, small, result - small);
    printf("\n\n FOUR LOW VALUE : %d - %d = %d",result,high, result - high);
    

    return 0;


   




 }
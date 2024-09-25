#include <stdio.h>

int main(){

    int number;
    int solution;

    printf("\nDonner un nombre : ");
    scanf("%d",&number);

        for(int j =1; j <= 10;j++){
            solution = number * j;
            printf("\n\n %d X %d  = %d",number ,j ,solution);
        }
  
    printf("\n\n");
    return 0;
}
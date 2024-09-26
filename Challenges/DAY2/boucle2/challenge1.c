#include <stdio.h>

int main(){

    int number;

    printf("\nDonner un nombre pour multiplication : ");
    scanf("%d",&number);

    for(int i = 10 ; i > 0; i--){

        printf("%d X %d = %d", number, i, number * i);
        printf("\n\n");

    }

    return 0;
}
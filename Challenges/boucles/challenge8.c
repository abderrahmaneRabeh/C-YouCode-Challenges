#include <stdio.h>

int main(){

    int n ,result = 0;
    int N_moin = 0;
    int N_deux_moin = 1;

    printf("\n\n");

    printf("Donner un nombre : ");
    scanf("%d",&n);

    if(n == 0){
        printf("\nF(0) = %d",N_moin);
        return 0;
    }
    if(n == 1){
        printf("\nF(1) = %d",N_deux_moin);
        return 0;
    }

    for(int i = 0; i <= n; i++){
       
        printf("\nF(%d) = %d ",i,result);
       
        result = N_moin + N_deux_moin;

        N_deux_moin = N_moin;

        N_moin = result;
    }
    return 0;
}
#include <stdio.h>

int main(){

    int n ,result = 0;
    int F_zero = 0;
    int F_un = 1;

    printf("\n\n");

    printf("Donner un nombre : ");
    scanf("%d",&n);

    if(n == 0){
        printf("\nF(0) = %d",F_zero);
        return 0;
    }
    if(n == 1){
        printf("\nF(1) = %d",F_un);
        return 0;
    }

    for(int i = 0; i <= n; i++){
       
        printf("\nF(%d) = %d ",i,result);
       
        result = F_zero + F_un;

        F_un = F_zero;

        F_zero = result;
    }
    return 0;
}
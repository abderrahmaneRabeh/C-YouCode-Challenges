#include <stdio.h>

int main(){

     int n = 2, result = 0;

    printf("Donner un nombre : ");
    scanf("%d",&n);

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            result += i;
            printf("%d ",i);

        }
       
    }

    printf("= %d",result);

    

    return 0;
}
#include <stdio.h>

int main(){

    int n,pair = 2;

    printf("Donner un nombre : ");
    scanf("%d",&n);
    
    for(int i = 1; i <= n;i++ ){
        printf("%d ",pair);
        pair += 2;
    }

    return 0;
}
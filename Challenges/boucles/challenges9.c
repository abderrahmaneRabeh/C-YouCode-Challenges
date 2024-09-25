#include <stdio.h>

int main(){

    
    int n,cpt = 0;

    printf("Donner un nombre : ");
    scanf("%d",&n);

    while(n > 0){
        n /= 10;
        cpt++;
    }

    printf("\nNombre de chiffres : %d ",cpt);
    return 0;
}
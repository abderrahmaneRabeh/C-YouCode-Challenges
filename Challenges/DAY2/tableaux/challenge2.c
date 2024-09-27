#include <stdio.h>

int main(){

    int n;

    printf("Donner nombre des elemens : ");
    scanf("%d",&n);

    char elements[n][10];

    int i = 0;
    while(i < n){
        printf("\n Donner %d element : ",++i);
        scanf("%s",&elements[i - 1]);
    }

    printf("\n\n");
    for(int j = 0; j < n; j++){
        printf("%s  ",elements[j]);
    } 

    return 0;
}
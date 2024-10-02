#include <stdio.h>

int main(){
    int n, s = 0;

    printf("Donner un nombre : ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        s += i;
    }

    printf("Result est : %d",s);
};
#include <stdio.h>

int main(){

    int n, s=1;

    printf("Donner n : ");
    scanf("%d",&n);

    if(n > 0){
        for (int i = 1; i <= n;i++){
            s = s* i;
        }
    }else{
        printf("\nivalid numbre");
    }

    printf("factorielle  est : %d ",s);


    return 0;
}
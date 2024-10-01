#include <stdio.h>

int main(){

    char str[] = "Abderrahmane";
    
    int size = sizeof(str)/sizeof(str[0]);

    printf("%d ", size - 1); 

    return 0;
}
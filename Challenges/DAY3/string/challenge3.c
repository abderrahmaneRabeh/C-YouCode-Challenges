#include <stdio.h>
#include <string.h>

int main(){

    char str1[] = "Abderrahmane";
    char str2[] = "Rabeh";

    char concatenation[2][10];
    
    strcpy(concatenation[0],str1);
    strcpy(concatenation[1],str2);

    for(int i = 0; i < 2; i++){
        printf("%s ",concatenation[i]);
    }

    return 0;
}
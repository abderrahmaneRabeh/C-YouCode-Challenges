#include <stdio.h>
#include<ctype.h>
#include <string.h>

int main(){

    char str[25];

    printf("\n\nDonner un text en Majuscules: ");
    scanf("%s", &str);

    int size = strlen(str);

    for(int i = 0; i < size; i++){

        str[i] = tolower(str[i]);
    }

    printf("\n\nMinuscules : %s",str);

    return 0;
}
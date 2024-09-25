#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

    char alphabet;
    char isMajuscule[15];

    printf("Donner un lettre alphabet : ");
    scanf("%c",&alphabet);

    if(isupper(alphabet)) {
        printf("\n%c est MAJUSCULE",alphabet);
    } else if (islower(alphabet)) {
        printf("\n%c est MINUSCULE",alphabet);
    } else {
        printf("\n%c est NON ALPHABETIQUE",alphabet);
    }

    return 0;
}
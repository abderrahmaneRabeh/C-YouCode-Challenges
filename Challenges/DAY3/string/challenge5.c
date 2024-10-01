#include <stdio.h>
#include <string.h>

int main(){

    char caractere[10];

    printf("Donner un text : ");
    scanf("%s" ,&caractere);

    int end = strlen(caractere) - 1;
    int start = 0;


    char temporary;
    for(start = 0 ; start < end; start++){

       

        temporary = caractere[start];
        caractere[start] = caractere[end];
        caractere[end] = temporary;

       
     end--;
       
    }

    // while(start < end ){

    //     temporary = caractere[start];
    //     caractere[start] = caractere[end];
    //     caractere[end] = temporary;

    //     start++;
    //     end--;
    // }

    printf("\n\nREVERSE : %s ",caractere);

    return 0;
}
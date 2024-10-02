#include <stdio.h>

int main(){

    float moyenne;

    printf("Donner la moyenne de votre bac : ");
    scanf("%f",&moyenne);

    if(moyenne < 0){
        printf("\nLa moyenne est negative !");
    }else if(moyenne < 10 ){
        printf("\nTu n'est pas admis !");
    }else if(moyenne < 12){
        printf("\nPASSABLE");
    }else if(moyenne < 14){
        printf("\nASSEZ BIEN");
    }else if(moyenne < 16){
        printf("\nBIEN");
    }else if(moyenne < 20){
        printf("\nTREE BIEN");
    }else{
        printf("\nle nombre doit etre entre 0 et 20");
    }



    return 0;
}
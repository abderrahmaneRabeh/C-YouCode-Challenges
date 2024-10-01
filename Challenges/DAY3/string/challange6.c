#include <stdio.h>
#include <string.h>

int main(){

    char str[25];
    char caractere;

    printf("\n\nDonner un text : ");
    scanf("%s", &str);

    printf("\n\nDonner le caractere tu besoin de compter : ");
    scanf(" %c", &caractere);


    int size = strlen(str);

    int cpt = 0;

    for(int i = 0; i < size; i++){

        if(str[i] == caractere){
            cpt++;
        }
    }

    printf("\n\n %c est repete %d fois",caractere,cpt);

    return 0;
}
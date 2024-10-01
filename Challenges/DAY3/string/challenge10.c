#include <stdio.h>
#include <string.h>

//ba9i makamltox tan nrjr lih mn ba3d

int main(){

    char str[25];
    char sous_string[25];

    printf("\n\nDonner un text : ");
    fgets(str,25,stdin);

    printf("\n\nDonner un sous string : ");
    fgets(sous_string,25,stdin);

    int size = strlen(str);
    int size2 = strlen(sous_string);

    int cpt = 0;

    for(int i = 0; i < size; i++){

        for(int j = i; j < size2; j++){

            if(strcmp( str[j], sous_string[j]) == 0){
                cpt++;
            }
        }
    }

    if(cpt == size2 - 1){
        printf("\nText est exist !");
    }

    return 0;
}
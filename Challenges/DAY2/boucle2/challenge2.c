#include <stdio.h>

int main(){

    int numbre_ligne, ligne, etoile, espace;

    printf("\nDonner nombre des lignes : ");
    scanf("%d",&numbre_ligne);

    for(ligne = 0; ligne < numbre_ligne; ligne++){

        for(espace = 0; espace < (numbre_ligne - 1 - ligne); espace++){

            printf(" ");
        }
        for(etoile = 0; etoile <= ( ligne * 2 ); etoile++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
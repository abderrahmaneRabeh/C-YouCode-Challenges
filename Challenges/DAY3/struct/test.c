#include <stdio.h>

struct etudiant {
    char nom[10];
    char prenom[10];
    int notes[3];
};

int main(){

    struct etudiant etd1;

    printf("\n Donner votre nom :");
    scanf("%s", &etd1.nom);

    printf("\n Donner votre prenom :");
    scanf("%s", &etd1.prenom);

    int el = 1;
    for(int i = 0; i < 3; i++){

        printf("\n Donner %d note",el);
        scanf("%d",&etd1.notes[i]);
        el++;
    }

    //affichage de information

    printf("\n\n-> Nom : %s",etd1.nom );
    printf("\n-> Prenom : %s",etd1.prenom );

    printf("\n-->Notes<--\n");
    el = 1;
    for( int i = 0; i < 3; i++){
        printf("\n\n votre | %d | Note est : %d",el,etd1.notes[i]);
        el++;
    }

    

    return 0;
}
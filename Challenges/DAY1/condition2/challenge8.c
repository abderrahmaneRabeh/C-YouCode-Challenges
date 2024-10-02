#include <stdio.h>

int main(){


    int age, h_medical, Type_couverture;

    printf("\n\nDonner votre Age : ");
    scanf("%f",&age);

    printf("\n\nDonne votre Historique medical tell que \n(0 pour aucun probleme, 1 pour probleme mineur, 2 pour probleme majeur) : ");
    scanf("%d",&h_medical);

    printf("\n\nDonne votre Type de couverture (1 pour de base, 2 pour etendue) : ");
    scanf("%d",&Type_couverture);

    if(age >= 30 && h_medical >= 1 ){

        printf("\n\nPlan etendu");

    }else if(age >= 30 && h_medical == 0 ){

        printf("\n\nPlan de base");
    }else if(age < 30){

        printf("\n\nPlan de base");
    }

    if( h_medical == 2){
         printf("\n\nune couverture supplementaire ete ajouter");
    }

   
    return 0;
}
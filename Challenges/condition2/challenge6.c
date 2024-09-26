#include <stdio.h>

int main()
{

    float consommation, type_user, type_contrat;

    printf("\n\nDonner votre consommation (en kWh) : ");
    scanf("%f",&consommation);

    printf("\n\nDonner votre Type utillisateur (1 pour residentiel, 2 pour commercial) : ");
    scanf("%f",&type_user);

    printf("\n\nDonner votre Type contrat (0 pour standard, 1 pour reduit) : ");
    scanf("%f",&type_contrat);

    if(type_user == 1 && type_contrat == 0){

        consommation += consommation * 0.20;

    }else if(type_user == 1 && type_contrat == 1){

        consommation += consommation * 0.15;

    }else if(type_user == 2 && type_contrat == 0){

        consommation += consommation * 0.30;

    }else if(type_user == 2 && type_contrat == 1){

        consommation += consommation * 0.25;
        
    }
    
    if(consommation > 500){
        consommation += consommation * 0.10;
    }


    printf("\n\nVotre Facture d'Electricite : %.2f",consommation);

    return 0;
}
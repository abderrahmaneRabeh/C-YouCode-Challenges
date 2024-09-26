#include <stdio.h>

int main(){

    float Revenu_annuel, result;
    int status;

    printf("\n\nDonner votre Revenu annuel : ");
    scanf("%f",&Revenu_annuel);

    printf("\n\nDonner votre Statut fiscal \n\t(1 pour celibataire, 2 pour marie, 3 pour chef de famille) : ");
    scanf("%d",&status);

    if(Revenu_annuel > 50000){

        result = Revenu_annuel + Revenu_annuel * 0.2;

    }else if(Revenu_annuel > 20000){

        result = Revenu_annuel + Revenu_annuel *  0.1;

    }else if(Revenu_annuel < 20000){

        result = Revenu_annuel + Revenu_annuel *  0.05;

    }

    if(status == 1){

        result -= 1000.0;

    }else if(status == 2){

        result -= 2000.0;

    }else if(status == 3){

        result -= 3000.0;
    }else{
        printf("\n\nInvalid situation !");
        return 0;
    }

    printf("\n\nles impots a payer est : %.2f",result);
    return 0;
}
#include <stdio.h>

void Air_rectangle(float largeur, float longueur);

struct lon_lar {
    float longueur;
    float largeur;
};

int main(){

    struct lon_lar arguments;

    printf("\nDonner Longueur : ");
    scanf("%f", &arguments.longueur);

    printf("\nDonner largeur : ");
    scanf("%f", &arguments.largeur);

    Air_rectangle(arguments.largeur,arguments.longueur);


    return 0;
}

void Air_rectangle(float largeur, float longueur){

    printf("\n\n -> Air : %.2f ", largeur * longueur);
}
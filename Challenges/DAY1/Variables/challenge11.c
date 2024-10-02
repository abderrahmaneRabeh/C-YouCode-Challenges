#include <stdio.h>

int main()
{

    float longeur, largeur, Surface;

    printf("Donner longeur : ");
    scanf("%f", &longeur);
    printf("Donner largeur : ");
    scanf("%f", &largeur);

    Surface = longeur * largeur;

    printf("\nlz Surface d'un rectangle : %.2f", Surface);

    printf("\n\n");
    return 0;
}
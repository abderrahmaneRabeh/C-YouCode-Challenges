#include <stdio.h>
#include <math.h>

int main()
{

    float a, b, c;

    float moyenne_geometrique;

    printf("Donner valeur a : ");
    scanf("%f", &a);
    printf("Donner valeur b : ");
    scanf("%f", &b);
    printf("Donner valeur c : ");
    scanf("%f", &c);

    moyenne_geometrique = pow((a * b * c), 1.0 / 3.0);

    printf("\n\nMoyenne geometrique : %.1f", moyenne_geometrique);

    printf("\n\n");
    return 0;
}
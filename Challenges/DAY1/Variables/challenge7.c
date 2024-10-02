#include <stdio.h>

int main()
{

    float a, b, c;

    float moyenne_pondere;

    printf("Donner valeur a : ");
    scanf("%f", &a);
    printf("Donner valeur b : ");
    scanf("%f", &b);
    printf("Donner valeur c : ");
    scanf("%f", &c);

    moyenne_pondere = (a * 2 + b * 3 + c * 5) / 10;

    printf("\n\nMoyenne ponderee : %.1f", moyenne_pondere);

    printf("\n\n");
    return 0;
}
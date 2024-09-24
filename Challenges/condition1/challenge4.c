#include <stdio.h>
#include <math.h>

int main()
{

    float a, b, c, delta;
    float x, x1, x2;

    printf("\n\nDonner valeur a :");
    scanf("%f", &a);
    printf("\n\nDonner valeur b :");
    scanf("%f", &b);
    printf("\n\nDonner valeur c :");
    scanf("%f", &c);

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0)
    {
        printf("\nIl n'y a pas de solutions reel");
    }
    else if (delta == 0)
    {
        x = -b / 2 * a;
        printf("\nLa soluion est %.2f", x);
    }
    else
    {
        x1 = (-b - sqrt(delta)) / a * 2;
        x2 = (-b + sqrt(delta)) / a * 2;
        printf("Les solutions sont :  %.2f | %.2f", x1, x2);
    }
    return 0;
}
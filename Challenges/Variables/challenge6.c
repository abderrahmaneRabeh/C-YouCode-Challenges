#include <stdio.h>

int main()
{

    float a, b;

    printf("Donner valeur a : ");
    scanf("%f", &a);
    printf("Donner valeur b : ");
    scanf("%f", &b);

    printf("\n\n%.2f + %.2f = %.2f ", a, b, a + b);
    printf("\n\n%.2f - %.2f = %.2f ", a, b, a - b);
    printf("\n\n%.2f * %.2f = %.2f ", a, b, a * b);
    printf("\n\n%.2f / %.2f = %.2f ", a, b, a / b);

    printf("\n\n");
    return 0;
}
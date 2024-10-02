#include <stdio.h>

int main()
{
    int number;

    printf("\nDonner un nombre : ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("\nle nombre est negatif");
    }
    else if (number == 0)
    {
        printf("\nle nombre est egal a zero");
    }
    else
    {
        printf("\nle nombre est superiour a zero");
    }

    return 0;
}
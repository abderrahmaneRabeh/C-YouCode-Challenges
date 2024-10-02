#include <stdio.h>

int main()
{
    int a, b, result;

    printf("\n\nDonner valeur de a : ");
    scanf("%d", &a);
    printf("\nDonner valeur de b : ");
    scanf("%d", &b);

    if (a == b)
    {
        result = (a + b) * 3;
        printf("\nLes nombres sont identiques, alors la somme est : %d", result);
    }
    else
    {
        result = a + b;
        printf("\nla somme est : %d", result);
    }

    return 0;
}
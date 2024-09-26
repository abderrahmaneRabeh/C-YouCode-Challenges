#include <stdio.h>

int main()
{
    int base, puissance, result = 1;
    printf("Donner un base : ");
    scanf("%d", &base);
    printf("Donner un puissance : ");
    scanf("%d", &puissance);

    if (puissance == 0)
    {
        printf("\nError : la puissance doit etre superieur a 0");
        return 0;
    }

    int i = 1;
    while (i <= puissance)
    {
        result *= base;
        i++;
    }

    printf("\nresult %d", result);

    return 0;
}
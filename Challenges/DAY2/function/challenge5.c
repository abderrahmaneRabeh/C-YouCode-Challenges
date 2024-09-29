#include <stdio.h>

int factoriel(int num);

int main()
{
    int num;

    printf("\nDonner nombre : ");
    scanf("%d", &num);

    num = factoriel(num);
    printf("Factoriel : %d", num);

    return 0;
}

int factoriel(int num)
{
    if (num > 0)
    {
        return num * factoriel(num - 1);
    }
    else
    {
        return 1;
    }
}
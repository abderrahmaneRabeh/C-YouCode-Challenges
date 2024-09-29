#include <stdio.h>
#include <string.h>

int pair_impair(int num);

int main()
{
    int num, result;
    printf("\nDonner nombre : ");
    scanf("%d", &num);

    result = pair_impair(num);

    if (result == 1)
    {
        printf("\nPair");
    }
    else
    {
        printf("\nImpair");
    }

    return 0;
}

int pair_impair(int num)
{

    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
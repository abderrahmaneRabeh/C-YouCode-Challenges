#include <stdio.h>

int main()
{
    int number;

    printf("Donner un nombre : ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("\n%d est un nombre pair", number);
    }
    else
    {
        printf("\n%d est un nombre impair", number);
    }

    return 0;
}
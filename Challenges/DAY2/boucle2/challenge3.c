#include <stdio.h>

int main()
{
    int number;

    printf("\n Donner un nombre : ");
    scanf("%d", &number);

    for (int i = 2; i <= number; i++)
    {

        char premier = 'y';

        for (int j = 2; j * j <= i; j++)
        {

            if (i % j == 0)
            {
                premier = 'n';
                break;
            }
        }

        if (premier == 'y')
        {
            printf("%d ", i);
        }
    }

    return 0;
}
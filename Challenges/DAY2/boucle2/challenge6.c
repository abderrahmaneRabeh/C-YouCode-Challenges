#include <stdio.h>

int main()
{
    int number, result = 0;

    printf("\nDonner un nombre : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
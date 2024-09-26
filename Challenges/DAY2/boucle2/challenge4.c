#include <stdio.h>

int main()
{
    int number, result;

    printf("\nDonner un nombre : ");
    scanf("%d", &number);

    for (int i = 1; number > 0; i++)
    {
        result = number % 10;
        printf("%d ", result);
        number /= 10;
    }

    return 0;
}
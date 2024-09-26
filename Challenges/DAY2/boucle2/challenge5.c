#include <stdio.h>

int main()
{
    int number, result = 0;

    printf("\nDonner un nombre : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        result += i;
    }
    printf("\nSomme des N Nombres --> %d ", result);

    return 0;
}
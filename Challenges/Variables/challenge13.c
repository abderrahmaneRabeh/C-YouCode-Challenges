#include <stdio.h>

int main()
{
    int number, hexadecimal, i = 0;
    char arrNum[32];

    printf("Donner un number : ");
    scanf("%d", &number);

    hexadecimal = number;

    while (number > 0)
    {
        arrNum[i] = number % 2; 
        number /= 2;
        i++;
    }

    printf("\nEquivalent en binaire : ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", arrNum[j]);
    }

    printf("\nEquivalent en hexadecimal : %X", hexadecimal);
    return 0;
}
#include <stdio.h>

int main()
{
    int number, N = 0;
    int N_0 = 0, N_1 = 1;

    printf("\nDonner un nombre : ");
    scanf("%d", &number);

    if (number == 0)
    {
        printf("\nF(0) = 0");
    }

    if (number == 1)
    {
        printf("\nF(1) = 1");
    }

    for (int i = 0; i <= number; i++)
    {
        printf("\nF(%d) = %d", i, N);
        N_0 = N_1;
        N_1 = N;
        N = N_1 + N_0;
    }

    return 0;
}
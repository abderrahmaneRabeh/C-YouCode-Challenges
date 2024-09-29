#include <stdio.h>

int main()
{

    int n, moyenne = 0;

    printf("Donner nombre des elemens : ");
    scanf("%d", &n);

    int numbers[n];

    int el = 1;
    for (int i = 0; i < n; i++)
    {
        printf("\nDonner | %d | nombre : ", el);
        scanf("%d", &numbers[i]);
        moyenne += numbers[i];
        el++;
    }

    printf("\nMoyenne : %d", moyenne / n);

    return 0;
}
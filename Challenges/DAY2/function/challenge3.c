#include <stdio.h>

void max_valeur(int num_1, int num_2);

int main()
{
    int num_1, num_2;

    printf("\nDonner num1 : ");
    scanf("%d", &num_1);

    printf("\nDonner num2 : ");
    scanf("%d", &num_2);

    max_valeur(num_1, num_2);

    return 0;
}

void max_valeur(int num_1, int num_2)
{
    num_1 > num_2 ? printf("\n->max est : %d", num_1)
                  : printf("\n->max est : %d", num_2);
}
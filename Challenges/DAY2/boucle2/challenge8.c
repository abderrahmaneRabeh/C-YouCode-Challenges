#include <stdio.h>

// recherche linéaire

int main()
{
    int number, result, index;
    int tableau[19] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35};

    int size_tableau = sizeof(tableau) / sizeof(tableau[0]);

    printf("\nDonner un nombre : ");
    scanf("%d", &number);

    for (int i = 0; i < size_tableau; i++)
    {

        if (number == tableau[i])
        {
            result = tableau[i];
            index = i;
            break;
        }
    }

    printf("\nLe nombre %d a ete trouve a l'indice %d", result, index);

    return 0;
}
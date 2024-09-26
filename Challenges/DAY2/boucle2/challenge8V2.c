#include <stdio.h>

// echerche dichotomique (ou binaire)

int main()
{
    int number;
    int tableau[19] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37};
    int debut = 0;
    int fin = sizeof(tableau) / sizeof(tableau[0]) - 1;
    int milieu;
    int trouve = 0; // hada rah boolean 3arfak ghatnsa 3lax darto so remember

    printf("\nDonner un nombre : ");
    scanf("%d", &number);

    while (debut <= fin)
    {
        milieu = (debut + fin) / 2;

        if (tableau[milieu] == number)
        {
            printf("\nLe nombre %d a ete trouve a l'indice %d\n", number, milieu);
            trouve = 1;
            break;
        }
        else if (tableau[milieu] < number)
        {
            debut = milieu + 1;
        }
        else
        {
            fin = milieu - 1;
        }
    }

    if (!trouve)
    {
        printf("\nLe nombre %d n'a pas ete trouve dans le tableau.\n", number);
    }

    return 0;
}

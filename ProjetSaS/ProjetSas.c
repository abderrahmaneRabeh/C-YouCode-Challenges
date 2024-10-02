#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    int option;
    char restart = 'y';

    while (restart == 'y' || restart == 'Y')
    {
        system("cls");

        printf("\n\n");
        printf("------|   Gestion de reservation    |-----");
        printf("\n\n\t|1|-> Ajouter une reservation");
        printf("\n\n\t|2|-> Afficher les details d'une reservation ");
        printf("\n\n\t|3|-> Recherche des reservations");
        printf("\n\n\t|4|-> Modifier ou supprimer une reservation");
        printf("\n\n\t|5|-> Statistiques");
        printf("\n\n\t|6|-> Quitte");
        printf("\n\n\t=> Choisissez une option : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
        {
            system("cls");
            printf("\n\n");
            printf("------|   Ajouter une reservation   |-----");
            printf("\n\n");

        }
        break;
        case 2:
        {
            system("cls");
            printf("\n\n");
            printf("------|   Afficher les details d'une reservation   |-----");
            printf("\n\n");

        }
        break;
        case 3:
        {
            system("cls");
            printf("\n\n");
            printf("------|   Recherche des reservations   |-----");
            printf("\n\n");

        }
        break;
        case 4:
        {
            system("cls");
            printf("\n\n");
            printf("------|   Modifier ou supprimer une reservation   |-----");
            printf("\n\n");

        }
        break;
        case 5:
        {
            system("cls");
            printf("\n\n");
            printf("------|   Statistiques   |-----");
            printf("\n\n");

        }
        break;
        case 6:
            printf("\n\n");
            printf("Tu Quitte le Programme");
            exit(0);
            break;
        }

        printf("\n\n\n->Continuer ? (y) / (n) : ");
        scanf(" %c", &restart);
    }

    return 0;
}
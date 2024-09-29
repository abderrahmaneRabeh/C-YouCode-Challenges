#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int livreAjoute = 0;    // xhal syal stoke 0
    int nbr_livre_dajouter; // ajouter : xhal brighi

    int stock_qty = 0; // total dyal stoke DYAL KLA LIVRE
    int option;

    int el = 1;
    char response = 'y';

    char titre[25][15];
    char auteur[25][15];
    int qty[25];
    float prix[25];

    printf("\n");

    while (response == 'y' || response == 'Y')
    {

        system("cls");
        printf("\n\n");
        printf("| 1 |--> Ajouter un livre au stock\n\n");
        printf("| 2 |--> Afficher tous les livres disponibles\n\n");
        printf("| 3 |--> Afficher le nombre total de livres en stock\n\n");
        printf("| 4 |--> Rechercher un livre :\n\n");
        printf("| 5 |--> Mettre a jour la quantite d'un livre\n\n");
        printf("| 6 |--> Supprimer un livre du stock\n\n");
        printf("| 7 |--> Quitter\n");
        printf("\n\t=> Choisissez une option : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
        {
            system("cls");
            printf("\n Donner nombre d'element ajouter : ");
            scanf("%d", &nbr_livre_dajouter);

            int start_insert = livreAjoute;
            for (int i = start_insert; i < nbr_livre_dajouter + start_insert; i++)
            {

                printf("\nDonner | %d | Titre de livre : ", el);
                scanf("%s", &titre[i]);

                printf("\nDonner | %d | Auteur de livre : ", el);
                scanf("%s", &auteur[i]);

                printf("\nDonner | %d | Quantity de livre : ", el);
                scanf("%d", &qty[i]);

                printf("\nDonner | %d | Prix de livre : ", el);
                scanf("%f", &prix[i]);

                printf("\n-----\n");
                livreAjoute++;
                el++;
            }
            printf("\n\n\t=> Livre(s) est Ajoutes en success");
        }
        break;
        case 2:
        {
            system("cls");
            el = 1;

            for (int i = 0; i < livreAjoute; i++)
            {

                printf("\n\n--------> livre | %d | <--------", el);
                printf("\n\n\t Titre -> %s", titre[i]);
                printf("\n\n\t Auteur -> %s", auteur[i]);
                printf("\n\n\t Quantity -> %d", qty[i]);
                printf("\n\n\t Prix -> %.2f", prix[i]);

                el++;
            }
        }
        break;
        case 3:
        {
            system("cls");
            stock_qty = 0;
            for (int i = 0; i < livreAjoute; i++)
            {
                stock_qty += qty[i];
            }

            printf("\n\nLe nobmbre de Quantity de stoke est : %d", stock_qty);
        }
        break;
        case 4:
        {
            system("cls");

            char temTitle[25];
            int found = 0;

            printf("\n\t=> Donner le titre de livre : ");
            scanf("%s", &temTitle);

            for (int i = 0; i < livreAjoute; i++)
            {

                if (strcmp(titre[i], temTitle) == 0)
                {

                    printf("\n\n\t Titre -> %s", titre[i]);
                    printf("\n\n\t Auteur -> %s", auteur[i]);
                    printf("\n\n\t Quantity -> %d", qty[i]);
                    printf("\n\n\t Prix -> %.2f", prix[i]);

                    found = 1;
                }
            }

            if (found != 1)
            {
                printf("\n\n Le livre est indesponible ");
            }
        }
        break;
        case 5:
        {
            system("cls");

            char temTitle[25];
            int found = 0;
            int newQty;

            printf("\n\t=> Donner le titre de livre a mise a jour : ");
            scanf("%s", &temTitle);

            for (int i = 0; i < livreAjoute; i++)
            {

                if (strcmp(titre[i], temTitle) == 0)
                {

                    printf("\n\t=> Donner nouvelle Quantity : ");
                    scanf("%d", &newQty);

                    qty[i] = newQty;

                    found = 1;
                }
            }

            if (found != 1)
            {
                printf("\n\n Le livre est indesponible ");
            }

            printf("\n\n\t=> Livre est ete modifier");
        }
        break;
        case 6:
        {
            system("cls");

            char temTitle[25];
            int found = 0;
            int newQty;

            printf("\n\t=> Donner le titre de livre a supprimer : ");
            scanf("%s", &temTitle);

            for (int i = 0; i < livreAjoute; i++)
            {

                if (strcmp(titre[i], temTitle) == 0)
                {

                    for (int j = i; j < livreAjoute - 1; j++)
                    {

                        strcpy(titre[j], titre[j + 1]);

                        strcpy(auteur[j], auteur[j + 1]);

                        qty[j] = qty[j + 1];

                        prix[j] = prix[j + 1];
                    }

                    printf("\n\n\t=> Livre est ete supprimer");
                    livreAjoute--;
                    found = 1;
                    break;
                }
            }

            if (found != 1)
            {
                printf("\n\n Le livre est indesponible ");
            }
        }
        break;
        }

        printf("\n\n\n->Continuer ? (y) / (n) : ");
        scanf(" %c", &response);
    }

    return 0;
}
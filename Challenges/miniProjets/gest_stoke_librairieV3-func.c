#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 25

void addBooks(int *livreAjoute, char titre[MAX_BOOKS][15], char auteur[MAX_BOOKS][15], int qty[MAX_BOOKS], float prix[MAX_BOOKS]);
void displayBooks(int livreAjoute, char titre[MAX_BOOKS][15], char auteur[MAX_BOOKS][15], int qty[MAX_BOOKS], float prix[MAX_BOOKS]);
int totalBooks(int livreAjoute, int qty[MAX_BOOKS]);
void searchBook(int livreAjoute, char titre[MAX_BOOKS][15], char auteur[MAX_BOOKS][15], int qty[MAX_BOOKS], float prix[MAX_BOOKS]);
void updateBook(int livreAjoute, char titre[MAX_BOOKS][15], int qty[MAX_BOOKS]);
void deleteBook(int *livreAjoute, char titre[MAX_BOOKS][15], char auteur[MAX_BOOKS][15], int qty[MAX_BOOKS], float prix[MAX_BOOKS]);

int main()
{
    int livreAjoute = 0;

    char titre[MAX_BOOKS][15];
    char auteur[MAX_BOOKS][15];
    int qty[MAX_BOOKS];
    float prix[MAX_BOOKS];

    char response = 'y';
    int option;

    while (response == 'y' || response == 'Y')
    {
        system("cls");
        printf("\n\n");
        printf("| 1 |--> Ajouter un livre au stock\n");
        printf("| 2 |--> Afficher tous les livres disponibles\n");
        printf("| 3 |--> Afficher le nombre total de livres en stock\n");
        printf("| 4 |--> Rechercher un livre\n");
        printf("| 5 |--> Mettre à jour la quantité d'un livre\n");
        printf("| 6 |--> Supprimer un livre du stock\n");
        printf("| 7 |--> Quitter\n");
        printf("\n\t=> Choisissez une option : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            addBooks(&livreAjoute, titre, auteur, qty, prix);
            break;
        case 2:
            displayBooks(livreAjoute, titre, auteur, qty, prix);
            break;
        case 3:
            printf("\n\nLe nombre total de livres en stock est : %d\n", totalBooks(livreAjoute, qty));
            break;
        case 4:
            searchBook(livreAjoute, titre, auteur, qty, prix);
            break;
        case 5:
            updateBook(livreAjoute, titre, qty);
            break;
        case 6:
            deleteBook(&livreAjoute, titre, auteur, qty, prix);
            break;
        case 7:
            exit(0);
        default:
            printf("\nOption invalide !\n");
        }

        printf("\n\n\n->Continuer ? (y) / (n) : ");
        scanf(" %c", &response);
    }

    return 0;
}

void addBooks(int *livreAjoute, char titre[MAX_BOOKS][15], char auteur[MAX_BOOKS][15], int qty[MAX_BOOKS], float prix[MAX_BOOKS])
{
    int nbr_livre_dajouter;

    printf("\nDonner nombre d'element a ajouter : ");
    scanf("%d", &nbr_livre_dajouter);

    for (int i = *livreAjoute; i < *livreAjoute + nbr_livre_dajouter && i < MAX_BOOKS; i++)
    {
        printf("\nDonner | %d | Titre de livre : ", i + 1);
        scanf("%s", titre[i]);

        printf("Donner | %d | Auteur de livre : ", i + 1);
        scanf("%s", auteur[i]);

        printf("Donner | %d | Quantité de livre : ", i + 1);
        scanf("%d", &qty[i]);

        printf("Donner | %d | Prix de livre : ", i + 1);
        scanf("%f", &prix[i]);

        printf("\n-----\n");
    }
    *livreAjoute += nbr_livre_dajouter;
    printf("\n\n\t=> Livre(s) est ajouté(s) avec succès\n");
}

void displayBooks(int livreAjoute, char titre[MAX_BOOKS][15], char auteur[MAX_BOOKS][15], int qty[MAX_BOOKS], float prix[MAX_BOOKS])
{
    for (int i = 0; i < livreAjoute; i++)
    {
        printf("\n\n--------> livre | %d | <--------", i + 1);
        printf("\n\tTitre -> %s", titre[i]);
        printf("\n\tAuteur -> %s", auteur[i]);
        printf("\n\tQuantité -> %d", qty[i]);
        printf("\n\tPrix -> %.2f", prix[i]);
    }
}

int totalBooks(int livreAjoute, int qty[MAX_BOOKS])
{
    int stock_qty = 0;
    for (int i = 0; i < livreAjoute; i++)
    {
        stock_qty += qty[i];
    }
    return stock_qty;
}

void searchBook(int livreAjoute, char titre[MAX_BOOKS][15], char auteur[MAX_BOOKS][15], int qty[MAX_BOOKS], float prix[MAX_BOOKS])
{
    char temTitle[15];
    int found = 0;

    printf("\n\t=> Donner le titre de livre : ");
    scanf("%s", temTitle);

    for (int i = 0; i < livreAjoute; i++)
    {
        if (strcmp(titre[i], temTitle) == 0)
        {
            printf("\n\tTitre -> %s", titre[i]);
            printf("\n\tAuteur -> %s", auteur[i]);
            printf("\n\tQuantité -> %d", qty[i]);
            printf("\n\tPrix -> %.2f", prix[i]);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\n\nLe livre est indisponible\n");
    }
}

void updateBook(int livreAjoute, char titre[MAX_BOOKS][15], int qty[MAX_BOOKS])
{
    char temTitle[15];
    int found = 0;

    printf("\n\t=> Donner le titre de livre à mettre à jour : ");
    scanf("%s", temTitle);

    for (int i = 0; i < livreAjoute; i++)
    {
        if (strcmp(titre[i], temTitle) == 0)
        {
            printf("\n\t=> Donner nouvelle quantité : ");
            scanf("%d", &qty[i]);
            found = 1;
            printf("\n\n\t=> Livre est modifié\n");
            break;
        }
    }

    if (!found)
    {
        printf("\n\nLe livre est indisponible\n");
    }
}

void deleteBook(int *livreAjoute, char titre[MAX_BOOKS][15], char auteur[MAX_BOOKS][15], int qty[MAX_BOOKS], float prix[MAX_BOOKS])
{
    char temTitle[15];
    int found = 0;

    printf("\n\t=> Donner le titre de livre à supprimer : ");
    scanf("%s", temTitle);

    for (int i = 0; i < *livreAjoute; i++)
    {
        if (strcmp(titre[i], temTitle) == 0)
        {
            for (int j = i; j < *livreAjoute - 1; j++)
            {
                strcpy(titre[j], titre[j + 1]);
                strcpy(auteur[j], auteur[j + 1]);
                qty[j] = qty[j + 1];
                prix[j] = prix[j + 1];
            }
            (*livreAjoute)--;
            found = 1;
            printf("\n\n\t=> Livre est supprimé\n");
            break;
        }
    }

    if (!found)
    {
        printf("\n\nLe livre est indisponible\n");
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int option;
    char reponse = 'y';
    int livreAjoute = 0;

    char titre[50][25];
    char auteur[50][25];
    int quantite[50];
    float prix[50];

    while (reponse == 'y' || reponse == 'Y')
    {
        system("cls");
        printf("\n\n");
        printf("========--**** GESTION D'UN STOCK DE LIVRES ****--========\n");
        printf("=========================================================\n");
        printf("| 1 |--> Ajouter un livre au stock\n\n");
        printf("| 2 |--> Afficher tous les livres disponibles\n\n");
        printf("| 3 |--> Mettre à jour la quantité d'un livre\n\n");
        printf("| 4 |--> Supprimer un livre du stock\n\n");
        printf("| 5 |--> Afficher le nombre total de livres en stock\n\n");
        printf("| 6 |--> Quitter\n");
        printf("=========================================================\n");

        printf("\n\t=> Choisissez une option : ");
        scanf("%d", &option);
        getchar();

        switch (option)
        {
        case 1:
            system("cls");
            printf("\n\n");
            printf("========-- Ajouter un livre au stock --========\n");

            printf("\nTitre : ");
            fgets(titre[livreAjoute], 25, stdin);
            titre[livreAjoute][strcspn(titre[livreAjoute], "\n")] = 0;

            printf("\nAuteur : ");
            fgets(auteur[livreAjoute], 25, stdin);
            auteur[livreAjoute][strcspn(auteur[livreAjoute], "\n")] = 0;

            printf("\nQuantite : ");
            scanf("%d", &quantite[livreAjoute]);

            printf("\nPrix : ");
            scanf("%f", &prix[livreAjoute]);

            livreAjoute++;
            getchar();
            printf("\nLivre ajoute avec succes !\n");
            break;

        case 2:
            system("cls");
            printf("\n\n");
            if (livreAjoute == 0)
            {
                printf("\nAucun livre disponible.\n");
            }
            else
            {
                printf("========-- Livres Disponibles (%d) --========\n", livreAjoute);
                for (int i = 0; i < livreAjoute; i++)
                {
                    printf("-------------------------------------------------\n");
                    printf("\t\tLivre %d\n", i + 1);
                    printf("-------------------------------------------------\n");
                    printf("Titre    : %s\n\n", titre[i]);
                    printf("Auteur   : %s\n\n", auteur[i]);
                    printf("Quantite : %d\n\n", quantite[i]);
                    printf("Prix     : %.2f DH", prix[i]);
                    printf("\n-------------------------------------------------\n\n");
                }
            }
            break;

        case 3:
        {
            system("cls");
            char titreTemp[25];
            printf("\n\n========-- Mettre à jour la quantité d'un livre --========\n");
            printf("Titre : ");
            fgets(titreTemp, 25, stdin);
            titreTemp[strcspn(titreTemp, "\n")] = 0;

            int found = 0;
            for (int i = 0; i < livreAjoute; i++)
            {
                if (strcmp(titre[i], titreTemp) == 0)
                {
                    printf("Nouvelle quantité : ");
                    scanf("%d", &quantite[i]);
                    found = 1;
                    printf("Quantite mise à jour avec succes !\n");
                    break;
                }
            }

            if (!found)
            {
                printf("\nLivre non trouvé.\n");
            }
            getchar();

            break;
        }

        case 4:
        {
            char titreTemp[25];
            printf("\n\n========-- Supprimer un livre du stock --========\n");
            printf("Titre : ");
            fgets(titreTemp, 25, stdin);
            titreTemp[strcspn(titreTemp, "\n")] = 0;

            int found = 0;
            for (int i = 0; i < livreAjoute; i++)
            {
                if (strcmp(titre[i], titreTemp) == 0)
                {

                    for (int j = i; j < livreAjoute - 1; j++)
                    {
                        strcpy(titre[j], titre[j + 1]);
                        strcpy(auteur[j], auteur[j + 1]);
                        quantite[j] = quantite[j + 1];
                        prix[j] = prix[j + 1];
                    }
                    livreAjoute--;
                    found = 1;
                    printf("\nLivre supprimé avec succès.\n");
                    break;
                }
            }

            if (!found)
            {
                printf("\nLivre non trouvé.\n");
            }
            break;
        }

        case 5:
        {
            int totalLivres = 0;
            for (int i = 0; i < livreAjoute; i++)
            {
                totalLivres += quantite[i];
            }
            printf("\nNombre total de livres en stock : %d\n", totalLivres);
            break;
        }

        case 6:
            printf("Quitter\n");
            exit(0);

        default:
            printf("\nOption invalide. Veuillez réessayer.\n");
            break;
        }

        printf("\nContinuer ? (y) / (n) : ");
        scanf(" %c", &reponse);
        getchar();
    }

    return 0;
}

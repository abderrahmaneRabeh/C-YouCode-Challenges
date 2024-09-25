#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int option;
    int size_de_arry;
    int base, puissance;

    float values_addition[100];
    float values_multiplication[100];
    float values_moyenne[100];

    float result, substraction_vleur1, substraction_vleur2;
    float division_valeur1, division_valeur2;
    float absolute_valeur;
    float carree_valeur;

    char user_choice;

    while (user_choice != 'n')
    {
        system("cls");
        printf("\n\n==========***BIENVENUE SUR LE CALCULATRICE***==========");
        printf("\n\n1) Addition");
        printf("\n\n2) Soustraction");
        printf("\n\n3) Multiplication");
        printf("\n\n4) Division");
        printf("\n\n5) Moyenne");
        printf("\n\n6) Valeur absolue");
        printf("\n\n7) Exponentiation");
        printf("\n\n8) Racine carree");
        printf("\n\n9) Quitter");
        printf("\n\n\t ==> Choisissez une option : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            system("cls");
            printf("\n\n\t ==> Addition");

            printf("\n\nEntrez le nombre de valeurs que vous souhaitez saisir : ");
            scanf("%d", &size_de_arry);

            int i = 0;
            while (i < size_de_arry)
            {
                printf("\nEntrez la valeur %d : ", i + 1);
                scanf("%f", &values_addition[i]);
                i++;
            }
            result = 0;
            for (i = 0; i < size_de_arry; i++)
            {
                result += values_addition[i];
            }
            printf("\n\t===========> %.2f", result);

            printf("\n\n");

            printf("\n\nVoulez-vous recommencer ? (o/n) : ");
            scanf(" %c", &user_choice);
            user_choice = tolower(user_choice);
            break;
        case 2:
            system("cls");
            printf("\n\n\t ==> Soustraction");

            printf("\n\nDonner valeur 1 : ");
            scanf("%f", &substraction_vleur1);
            printf("\n\nDonner valeur 2 : ");
            scanf("%f", &substraction_vleur2);

            printf("\n\t===========> %.2f", substraction_vleur1 - substraction_vleur2);

            printf("\n\n");

            printf("\n\nVoulez-vous recommencer ? (o/n) : ");
            scanf(" %c", &user_choice);
            user_choice = tolower(user_choice);
            break;
        case 3:
            system("cls");
            printf("\n\n\t ==> Multiplication");

            printf("\n\nEntrez le nombre de valeurs que vous souhaitez saisir : ");
            scanf("%d", &size_de_arry);
            int j = 0;
            while (j < size_de_arry)
            {
                printf("\nEntrez la valeur %d : ", j + 1);
                scanf("%f", &values_multiplication[j]);
                j++;
            }

            result = 1;
            for (j = 0; j < size_de_arry; j++)
            {
                result *= values_multiplication[j];
            }

            printf("\n\t===========> %.2f", result);

            printf("\n\n");

            printf("\n\nVoulez-vous recommencer ? (o/n) : ");
            scanf(" %c", &user_choice);
            user_choice = tolower(user_choice);
            break;
        case 4:
            system("cls");
            printf("\n\n\t ==> Division");

            printf("\n\nDonner valeur 1 : ");
            scanf("%f", &division_valeur1);
            printf("\n\nDonner valeur 2 : ");
            scanf("%f", &division_valeur2);
            if (division_valeur2 == 0)
            {
                printf("\n\t===========> Erreur: Division par 0 est impossible");
            }
            else
            {
                printf("\n\t===========> %.2f", division_valeur1 / division_valeur2);
            }

            printf("\n\n");
            printf("\n\nVoulez-vous recommencer ? (o/n) : ");
            scanf(" %c", &user_choice);
            user_choice = tolower(user_choice);
            break;
        case 5:
            system("cls");
            printf("\n\n\t ==> Moyenne");

            printf("\n\nEntrez le nombre de valeurs que vous souhaitez saisir : ");
            scanf("%d", &size_de_arry);
            int k = 0;
            while (k < size_de_arry)
            {
                printf("\nEntrez la valeur %d : ", k + 1);
                scanf("%f", &values_moyenne[k]);
                k++;
            }

            result = 0;
            for (k = 0; k < size_de_arry; k++)
            {
                result += values_moyenne[k];
            }

            printf("\n\t===========> %.2f", result / size_de_arry);

            printf("\n\n");
            printf("\n\nVoulez-vous recommencer ? (o/n) : ");
            scanf(" %c", &user_choice);
            user_choice = tolower(user_choice);
            break;
        case 6:
            system("cls");
            printf("\n\n\t ==> Valeur absolue");

            printf("\n\nEntrez la valeur : ");
            scanf("%f", &absolute_valeur);
            if (absolute_valeur < 0)
            {
                printf("\n\t===========> %.2f", -absolute_valeur);
            }
            else
            {
                printf("\n\t===========> %.2f", absolute_valeur);
            }

            printf("\n\n");
            printf("\n\nVoulez-vous recommencer ? (o/n) : ");
            scanf(" %c", &user_choice);
            user_choice = tolower(user_choice);
            break;
        case 7:
            system("cls");
            printf("\n\n\t ==> Exponentiation");

            printf("\n\nEntrez la base : ");
            scanf("%d", &base);
            printf("\n\nEntrez l'exposant : ");
            scanf("%d", &puissance);

            printf("\n\t===========> %.0f", pow(base, puissance));

            printf("\n\n");
            printf("\n\nVoulez-vous recommencer ? (o/n) : ");
            scanf(" %c", &user_choice);
            user_choice = tolower(user_choice);
            break;
        case 8:
            system("cls");
            printf("\n\n\t ==> Racine carree");

            printf("\n\nEntrez la racine carree valeur : ");
            scanf("%f", &carree_valeur);

            if (carree_valeur < 0)
            {
                printf("\n\t===========> Erreur: La racine carree d'un nombre negatif est impossible");
            }
            {
                printf("\n\t===========> %.2f", sqrt(carree_valeur));
            }

            printf("\n\n");
            printf("\n\nVoulez-vous recommencer ? (o/n) : ");
            scanf(" %c", &user_choice);
            user_choice = tolower(user_choice);
            break;
        case 9:
            printf("\n\n\t ==> Tu as Quitter ! ");
            exit(0);
            break;
        default:
            printf("\n\n\t ==> Option invalide");
            break;
        }
    }

    printf("\n\n\n");
    return 0;
}
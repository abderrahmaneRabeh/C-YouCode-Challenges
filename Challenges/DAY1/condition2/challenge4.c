#include <stdio.h>

int main()
{
    float score;
    int Anciennete, recompenses;

    printf("\n\nDonner votre score entre 0 et 100 : ");
    scanf("%f", &score);

    printf("\n\nvotre Anciennete est : ");
    scanf("%d", &Anciennete);

    printf("\n\nCombien des recompenses ont ete recues : ");
    scanf("%d", &recompenses);

    if (score >= 90 && Anciennete >= 5)
    {
        printf("\n\n Excellente");
    }
    else if (score >= 75 && Anciennete >= 3)
    {
        printf("\n\n Bonne");
    }
    else if (score >= 50 && Anciennete < 3)
    {
        printf("\n\n Satisfaisante");
    }
    else if (score < 50)
    {
        printf("\n\n Insuffisante");
    }
    else
    {
        printf("\n\nLe score doit etre dans 0 et 10 et l'age positive");
    }

    if (recompenses == 0)
    {
        printf("\n\naucune");
    }
    else if (recompenses == 1)
    {
        printf("\n\n10%% d'amelioration");
    }
    else if (recompenses > 1)
    {
        printf("\n\n20%% d'amelioration");
    }
    else
    {
        printf("\n\error");
    }

    return 0;
}
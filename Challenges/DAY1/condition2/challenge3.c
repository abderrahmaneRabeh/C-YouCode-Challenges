#include <stdio.h>

int main()
{
    int jours_conge_accordes, jours_conge_utilises, Jours_restants;
    int Statut_de_employe;

    printf("\n\nDonner Total de jours de conge accordes : ");
    scanf("%d", &jours_conge_accordes);

    printf("\n\nDonner Jours de conge utilises : ");
    scanf("%d", &jours_conge_utilises);

    printf("\n\nDonner Statut de l'employe (1) temps plein ou (0) temps partiel : ");
    scanf("%d", &Statut_de_employe);

    if (Statut_de_employe == 0)
    {
        Jours_restants = (jours_conge_accordes / 2) - jours_conge_utilises;
    }
    else
    {
        Jours_restants = jours_conge_accordes - jours_conge_utilises;
    }

    if (0 > Jours_restants)
    {
        printf("\nVous avez depassent la duree !!");

        return 0;
    }

    printf("\n\nJours restants de conge : %d", Jours_restants);

    printf("\n\n");
    return 0;
}
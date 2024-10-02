#include <stdio.h>

int main()
{
    float budget;
    int destination, n_personne;

    printf("\n\nDonner votre budget : ");
    scanf("%f", &budget);

    printf("\n\nQuelle est votre destination \n (1 pour plage, 2 pour montagne, 3 pour ville) : ");
    scanf("%d", &destination);

    printf("\n\nCombien des personne : ");
    scanf("%d", &n_personne);

    if (budget >= 1000 && n_personne > 2)
    {
        printf("\n\n Voyage haut de gamme");
        printf("\n\n destinations recommandees est plage, est tu peux visite Ville ");
    }
    else if (budget >= 500 && n_personne <= 2)
    {
        printf("\n\n Voyage moyen");
        printf("\n\n destinations recommandees est montagne, est tu peux visite Ville ");
    }
    else if (budget > 0)
    {
        printf("\n\n Voyage economique");
        printf("\n\n visite Ville :)");
    }
    else
    {
        printf("\n\nLe score doit etre positive");
    }

    return 0;
}
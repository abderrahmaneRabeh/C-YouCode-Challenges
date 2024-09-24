#include <stdio.h>

int main()
{

    int annee, mois, jours;
    int heurs, minutes, seconds;

    printf("\nDonner un  entier d'annees a convertir: ");
    scanf("%d", &annee);

    mois = 12 * annee;
    jours = 365 * annee;
    heurs = (365 * 24) * annee;
    minutes = (365 * 24 * 60) * annee;
    seconds = (365 * 24 * 60 * 60) * annee;

    printf("%d annee(s) equivaut a %d mois\n", annee, mois);
    printf("%d annee(s) equivaut a %d jour(s)\n", annee, jours);
    printf("%d annee(s) equivaut a %d heure(s)\n", annee, heurs);
    printf("%d annee(s) equivaut a %d minute(s)\n", annee, minutes);
    printf("%d annee(s) equivaut a %d seconde(s)\n", annee, seconds);

    return 0;
}
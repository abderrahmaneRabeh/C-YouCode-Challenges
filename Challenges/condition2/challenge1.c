#include <stdio.h>

int main()
{

    int Duree, Score, Revenu;

    printf("\nEntrer la Revenu : ");
    scanf("%d", &Revenu);
    printf("\nEntrer la Score : ");
    scanf("%d", &Score);
    printf("\nEntrer la Duree : ");
    scanf("%d", &Duree);

    if (Revenu < 30000 || Score < 650 || Duree > 15)
    {
        printf("\nNon eligible");
    }
    else if (Revenu >= 30000 && Score >= 700 && Duree <= 10)
    {
        printf("\neligible");
    }
    else if (Revenu >= 30000 && Score >= 650 && Duree <= 15)
    {
        printf("\neligible avec condition");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    float prime_de_base, prime_final;
    int age, type_voiture, n_accidents;

    printf("\n\nVeuillez entrer votre prime de base : ");
    scanf("%f", &prime_de_base);

    printf("\nVeuillez entrer votre age : ");
    scanf("%d", &age);

    printf("\nVeuillez entrer votre type de voiture \n(1 = pour sportive, 2 = pour utilitaire, 3 = pour familiale) : ");
    scanf("%d", &type_voiture);

    printf("\nVeuillez entrer votre nombre d'accident : ");
    scanf("%d", &n_accidents);

    if (age < 25)
    {
        prime_final += prime_de_base * 1.5;
    }
    else if (age < 65)
    {
        prime_final += prime_de_base * 1.4;
    }
    else
    {
        prime_final += prime_de_base * 1.2;
    }

    switch (type_voiture)
    {
    case 1:
        prime_final += prime_final * 2;
        break;
    case 2:
        prime_final += prime_final * 1.2;
        break;
    case 3:
        prime_final += prime_final * 1.1;
        break;
    default:
        printf("incorrect type de voiture");
        break;
    }

    if (n_accidents > 1)
    {
        prime_final += prime_final * 0.3;
    }

    printf("\nPRIM FINAL : %.2f", prime_final);

    return 0;
}
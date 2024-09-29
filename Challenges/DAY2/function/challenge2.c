#include <stdio.h>

void afficher_produit(int num_1, int num_2);

int main()
{
    int num_1, num_2;

    printf("\nDonner num1 : ");
    scanf("%d", &num_1);

    printf("\nDonner num2 : ");
    scanf("%d", &num_2);

    afficher_produit(num_1, num_2);

    return 0;
}

void afficher_produit(int num_1, int num_2)
{
    printf("\n->Produit est : %d", num_1 * num_2);
}
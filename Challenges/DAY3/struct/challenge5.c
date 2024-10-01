#include <stdio.h>
#include <string.h>

struct livres {
    char titre[25];
    char auteur[25];
    int annee;
};

struct livres initialisation();

int main(){

    struct livres livre = initialisation();

    printf("\n\n -> Title : %s",livre.titre);
    printf("\n\n -> Auteur : %s",livre.auteur);
    printf("\n\n -> Annee : %d",livre.annee);

    return 0;
}

struct livres initialisation(){

    struct livres livre;

    printf("\nDonner titre : ");
    scanf("%s", &livre.titre);

    printf("\nDonner auteur : ");
    scanf("%s", &livre.auteur);

    printf("\nDonner annee : ");
    scanf("%d", &livre.annee);

    return livre;
}
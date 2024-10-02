#include <stdio.h>

int main()
{

    char nom[25];
    char prenom[25];
    int age;
    char sexe;
    char email[25];

    printf("\nEntrer votre nom : ");
    scanf("%s", &nom);
    printf("\nEntrer votre prenom : ");
    scanf("%s", &prenom);
    printf("\nEntrer votre age : ");
    scanf("%d", &age);
    printf("\nEntrer votre genre : ");
    scanf(" %c", &sexe);
    printf("\nEntrer votre email : ");
    scanf("%s", &email);

    printf("\n------------------------------------");
    printf("\n\n nom : %s \n\n prenom : %s \n\n age : %d", nom, prenom, age);
    printf("\n\n genre : %c \n\n email : %s", sexe, email);
    printf("\n\n------------------------------------");

    return 0;
}
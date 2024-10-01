#include <stdio.h>


struct info{
    char name[25];
    int age;
    char genre;
    char email[25];
};

int main() {
    
    struct info condidat1;
    //struct info condidat1 = { "kamal",22 ,'M',"Km@gmail.com"};

    printf("\nDonner votre nom : ");
    scanf("%s",&condidat1.name);
    printf("\nDonner votre age : ");
    scanf("%d",&condidat1.age);
    printf("\nDonner votre genre : ");
    scanf("%c");
    scanf("%c",&condidat1.genre);
    printf("\nDonner votre email : ");
    scanf("%s",&condidat1.email);
    
    printf("\n\n----");

    printf("\n\n -> Nom : %s",condidat1.name);
    printf("\n\n -> Age : %d",condidat1.age);
    printf("\n\n -> Genre : %c",condidat1.genre);
    printf("\n\n -> email : %s",condidat1.email);

    return 0;
}
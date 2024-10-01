#include <stdio.h>
#include <string.h>

struct info{
    char name[25];
    int age;
    char genre;
    char email[25];
};

int main() {
    
    int n;
    struct info condidat1;
    //struct info condidat1 = { "kamal",22 ,'M',"Km@gmail.com"};

    
    printf("\nDonner nombre d'elements : ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){

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
    }
    // strcpy(condidat1.name,"Ahmed");
    // condidat1.age = 33 ;
    // condidat1.genre = 'H';
    // strcpy(condidat1.email,"Ahmed@gmail.com");
    
    printf("\n\n-->Affichage<--");
    for(int i = 0; i < n; i++){

        printf("\n -> Nom : %s",condidat1.name);
        printf("\n -> Age : %d",condidat1.age);
        printf("\n -> Genre : %c",condidat1.genre);
        printf("\n -> email : %s",condidat1.email);
        printf("\n\n----");

    }
 
    

    return 0;
}
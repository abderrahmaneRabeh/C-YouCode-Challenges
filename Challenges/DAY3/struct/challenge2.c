#include <stdio.h>


struct etudiant{
    int id;
    char name[25];
    float notes[3];
    
};

int main() {
    
    struct etudiant etd1;
    //struct info etd1 = { "kamal",22 ,'M',"Km@gmail.com"};

    printf("\nDonner votre Id : ");
    scanf("%d", &etd1.id);

    printf("\nDonner votre Nom : ");
    scanf("%s", &etd1.name);

    int el = 1;
    for(int i = 0; i < 3; i++){
        printf("\nDonner %d note : ",el);
        scanf("%f", &etd1.notes[i]);
        el++;
    }
    
    
    printf("\n\n----");

    printf("\n\n -> Id : %d",etd1.id);
    printf("\n\n -> Nom : %s",etd1.name);

    float moyenne = 0;
    el = 1;
    for(int i = 0; i < 3; i++){

        moyenne += etd1.notes[i];
        printf("\n\n -> Note | %d | : %.2f",el,etd1.notes[i]);
        el++;
    }
   
    printf("\n\n -> Votre Moyyene est : %.2f\n\n",moyenne / 3);
    return 0;
}
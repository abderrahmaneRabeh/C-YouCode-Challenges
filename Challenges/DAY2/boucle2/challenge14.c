#include <stdio.h>
#include <string.h>

int main(){

    char jours[7][10] = {
        "lundi",
        "mardi",
        "mercredi",
        "jeudi",
        "vendredi",
        "samedi",
        "dimanch"
    };

    char jour_demender[10];

    printf("\n\nDonner un jour de semain : ");
    scanf("%s",&jour_demender);

    printf("\n");
    for(int i = 0;i < 7;i++){
        if(strcmp(jour_demender, jours[i]) == 0){
           printf("\n\n%s ",jours[i]);
           if(i == 6){
            printf("%s",jours[0]);
           }
           break;
        }
    }
    
     
    return 0;
}
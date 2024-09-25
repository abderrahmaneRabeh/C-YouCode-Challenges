#include <stdio.h>
#include <string.h>
#include <stdlib.h> // For atoi

int main(){

    char instant1[9],instant2[9];

    char *heur_ins1 ,*minut_ins1, *second_ins1; 
    char *heur_ins2 ,*minut_ins2, *second_ins2; 

    printf("\nDonner instant 1 ou form HH:MM:SS : ");
    scanf("%s",&instant1);

    printf("\nDonner instant 2 ou form HH:MM:SS : ");
    scanf("%s",&instant2);

    heur_ins1 = strtok(instant1,":");
    minut_ins1 = strtok(NULL,":");
    second_ins1 = strtok(NULL,":");

    heur_ins2 = strtok(instant2,":");
    minut_ins2 = strtok(NULL,":");
    second_ins2 = strtok(NULL,":");


    int h1 = atoi(heur_ins1);
    int h2 = atoi(heur_ins2);

    if(h1 < h2){
        printf("\nLe premier instant vient avant le deuxieme ");
    }else if(h1 > h2) {
        printf("\nLe deuxieme instant vient avant le premier");
    }else{
        printf("\nIl s'agit du meme instant.");
    }
    
    return 0;
}
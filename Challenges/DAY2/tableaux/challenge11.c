#include <stdio.h>

int main(){

    int n;

    printf("\nDonner nombre d'elements: ");
    scanf("%d",&n);

    int numbers[n];

    int el = 1;

    for(int i = 0; i < n; i++){

        printf("\n->donner | %d | nombre : ",el);
        scanf("%d", &numbers[i]);
        el++;
        
    }

    printf("\nAVANT : \n");
    for(int i = 0; i < n; i++){
        printf("%d  ",numbers[i]);
    }

    int nbr;
    int remplace;
    printf("\nDonner nombre remplace : ");
    scanf("%d",&nbr);
    printf("\nDonner nombre remplace par : ");
    scanf("%d",&remplace);

    for(int i = 0; i < n; i++){
        if(nbr == numbers[i]){
            
            numbers[i] = remplace;
        }
    }

    printf("\nAPRES : \n");
    for(int i = 0; i < n; i++){
        printf("%d  ",numbers[i]);
    }


    return 0;
}
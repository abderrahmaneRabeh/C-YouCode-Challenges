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

    int nbr;
    int found = 0;
    printf("\nDonner nombre rechercher : ");
    scanf("%d",&nbr);

    for(int i = 0; i < n; i++){
        if(nbr == numbers[i]){
            printf("\n%d  trouvee dans tableau!!",numbers[i]);
            found = 1;
            break;
        }
    }

    if(found != 1){
        printf("\nL'element n'exist pas!");
    }


    return 0;
}
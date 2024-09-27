#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){

    srand(time(NULL));

    int n;

    char specialChars[10] = {'@', '&', '#', '@', '&', '#', '@', '&', '#', '@'};
    char lowerCaseLetters[10] = {'a', 'b', 'e', 'k', 'a', 'b', 'e', 'k', 'a', 'b'};
    char upperCaseLetters[10] = {'A', 'K', 'T', 'H', 'A', 'K', 'T', 'H', 'A', 'K'};
    int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    

    printf("\nDonner un longueur n : ");
    scanf("%d",&n);

    char Password[n + 1] ;

    int r, chosenTable;
    for(int i = 0; i < n; i++){

        r = rand() % 10; // 0 to 9
        chosenTable = rand() % 4; // 0 to 3
        
        switch(chosenTable){
            case 0:
                Password[i] = upperCaseLetters[i];
                break;
            case 1:
                Password[i] = specialChars[i];
                break;
            case 2:
                Password[i] = numbers[i];
                break;
            case 3:
                Password[i] = lowerCaseLetters[i];
                break;
            default:
                Password[i] = upperCaseLetters[i];
                break;
        }
    }
    
    printf("\nPASSWORD GENERATED : \n");

    for(int j = 0; j < n; j++){
        printf("%c", Password[j]);
    }

    return 0;
}



        
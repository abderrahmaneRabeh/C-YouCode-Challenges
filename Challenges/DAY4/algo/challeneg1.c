#include <stdio.h>

void sortArry(int numbers[]);

int main(){

    int numbers[10] = {1,5,3,6,10,7,8,2,9,4};

    printf("\n-->Avant Tri bulles  : ");
    for(int i = 0; i < 10; i++){

        printf("%d ",numbers[i]);
    }

    sortArry(numbers);    
    
    printf("\n\n-->Apres Tri bulles  : ");
    for(int i = 0; i < 10; i++){

        printf("%d ",numbers[i]);
    }

    return 0;
}

void sortArry(int numbers[]){

    int tempNum;
    for(int i = 0; i < 10; i++){

        for(int j = 0; j < 9 - i; j++){

            if(numbers[j] > numbers[j + 1]){

                tempNum = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = tempNum;
            }
        }
    }
}
#include <stdio.h>
#include <string.h>

int main(){

    char str1[] = "Rabeh";
    char str2[] = "Rabeh";

    int len = sizeof(str1)/sizeof(str1[0]); 

    int meme = 0;
    for(int i = 0; i < len - 1; i++){
        if(str1[i] == str2[i]){
            meme = 1;
        }
        else{
            meme = 0;
            break;
        }
    }

    if (meme != 1 ){

        printf("NE PAS MEME");
    }else{

        printf("MEME !!");
    }


    // if(strcmp(str1,str2) == 0){
    //     printf("MEME !");
    // }else{
    //     printf("N'EST PAS MEME !");
    // }

    return 0;
}
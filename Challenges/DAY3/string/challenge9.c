#include <stdio.h>
#include <string.h>

int main(){

    char str[25];
    char strSansEspace[25];

    printf("\n\nDonner un text : ");
    fgets(str,25,stdin);
    // scanf("%s", &str);
    // gets(str);

    int size = strlen(str);
    int cpt = 0; 

    for(int i = 0; i < size; i++){

        if(str[i] != ' '){
            
            strSansEspace[cpt] = str[i];
            cpt++;
        }
    }

    strSansEspace[cpt] = '\0';


    printf("\n\nVotre text sans espace : %s",strSansEspace);

    return 0;
}
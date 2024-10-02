#include <stdio.h>
#include <string.h>
#include <stdlib.h> // For atoi

int main(){

    char date[11];

    printf("\n Donner un date sous form dd/mm/yyyy : ");
    scanf("%s",&date);

    
    char *day, *monthStr, *year;

    // Use strtok to split the string by '/'
    day = strtok(date, "/");
    monthStr = strtok(NULL, "/");
    year = strtok(NULL, "/");

     // Convert the month string to an integer
    int month = atoi(monthStr);
    
     switch (month) {
        case 1:
            printf("\t%s-Janvier-%s\n",day,year);
            break;
        case 2:
            printf("\t%s-Février-%s\n",day,year);
            break;
        case 3:
            printf("\t%s-Mars-%s\n",day,year);
            break;
        case 4:
            printf("\t%s-Avril-%s\n",day,year);
            break;
        case 5:
            printf("\t%s-Mai-%s\n",day,year);
            break;
        case 6:
            printf("\t%s-Juin-%s\n",day,year);
            break;
        case 7:
            printf("\t%s-Juillet-%s\n",day,year);
            break;
        case 8:
            printf("\t%s-Aout-%s\n",day,year);
            break;
        case 9:
            printf("\t%s-Septembre-%s\n",day,year);
            break;
        case 10:
            printf("\t%s-Octobre-%s\n",day,year);
            break;
        case 11:
            printf("\t%s-Novembre-%s\n",day,year);
            break;
        case 12:
            printf("\t%s-Decembre-%s\n",day,year);
            break;
        default:
            printf("Mois invalide\n");
            break;
    }



    return 0;
}
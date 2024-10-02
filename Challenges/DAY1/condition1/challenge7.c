#include <stdio.h>
#include <ctype.h>

int main()
{
    char alphabet;

    printf("\n\ndonner un Alphaber : ");
    scanf("%c", &alphabet);

    if (alphabet == toupper(alphabet))
    {
        printf("\n%c est une majuscule", alphabet);
    }
    else if (alphabet == tolower(alphabet))
    {
        printf("\n%c est une minuscule", alphabet);
    }

    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main()
{

    char alphabet;

    printf("Donner un lettre d'alphabet : ");
    scanf("%c", &alphabet);

    alphabet = tolower(alphabet);

    switch (alphabet)
    {
    case 'a':
        printf("%c est vowel !!", alphabet);
        break;
    case 'e':
        printf("%c est vowel !!", alphabet);
        break;
    case 'o':
        printf("%c est vowel !!", alphabet);
        break;
    case 'i':
        printf("%c est vowel !!", alphabet);
        break;
    case 'u':
        printf("%c est vowel !!", alphabet);
        break;
    default:
        printf("%c n'est pas vowel", alphabet);
        break;
    }

    return 0;
}
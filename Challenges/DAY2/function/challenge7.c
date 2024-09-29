#include <stdio.h>
#include <string.h>

void reverse(char caractere[]);

int main()
{

    char caractere[10];

    printf("Donner text pour inverser :");
    scanf("%s", caractere);
    reverse(caractere);

    return 0;
}

void reverse(char caractere[])
{
    int start = 0;
    int end = strlen(caractere) - 1;

    while (start < end)
    {

        char temp = caractere[start];
        caractere[start] = caractere[end];
        caractere[end] = temp;

        start++;
        end--;
    }

    printf("\n%s", caractere);
}
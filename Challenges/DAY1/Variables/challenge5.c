#include <stdio.h>

int main()
{

    float Celsius;

    printf("Entres la temperateur en Celsius : ");
    scanf("%f", &Celsius);

    if (Celsius < 0)
    {

        printf("\n Solide");
    }
    else if (Celsius <= 100)
    {

        printf("\n Liquide");
    }
    else
    {

        printf("\n Gaz");
    }

    printf("\n\n");
    return 0;
}
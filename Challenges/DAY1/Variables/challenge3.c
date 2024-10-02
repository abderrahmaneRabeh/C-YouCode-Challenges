#include <stdio.h>

int main()
{

    float km, yards;

    printf("\nEnter la distance en KM : ");
    scanf("%f", &km);

    yards = km * 1093.61;

    printf("\n\n%.2f est la diatance en yards\n\n", yards);

    return 0;
}
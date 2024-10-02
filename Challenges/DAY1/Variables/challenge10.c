#include <stdio.h>
#include <math.h>

int main()
{

    float r, result;
    const float PI = 3.14;

    printf("Entrer la rayon r : ");
    scanf("%f", &r);

    result = ((4.0 / 3.0) * PI * pow(r, 3));

    printf("\nle volume d'une sphere : %.2f", result);

    printf("\n\n");
    return 0;
}
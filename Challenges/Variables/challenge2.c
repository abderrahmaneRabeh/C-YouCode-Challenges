#include <stdio.h>

int main()
{

    float celsius;

    printf("Entrer la temperature en Celsius C: ");
    scanf("%f", &celsius);

    float Kelvin = celsius + 273.15;

    printf("votre Kelvin valuer est : %fK", Kelvin);

    return 0;
}
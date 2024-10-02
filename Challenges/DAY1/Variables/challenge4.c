#include <stdio.h>

int main()
{

    float km_par_heur, metre_par_second;

    printf("Entrer km/h : ");
    scanf("%f", &km_par_heur);

    metre_par_second = km_par_heur * 0.27778;

    printf("\nm/s est : %.2f", metre_par_second);
    printf("\n\n");

    return 0;
}
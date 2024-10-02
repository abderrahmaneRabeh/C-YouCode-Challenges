#include <stdio.h>
#include <math.h>

int main()
{

    float x1, x2;
    float y1, y2;
    float z1, z2;
    float result;

    printf("\ndonner X1 : ");
    scanf("%f", &x1);
    printf("\ndonner X2 : ");
    scanf("%f", &x2);

    printf("\ndonner Y1 : ");
    scanf("%f", &y1);
    printf("\ndonner Y2 : ");
    scanf("%f", &y2);

    printf("\ndonner Z1 : ");
    scanf("%f", &z1);
    printf("\ndonner Z2 : ");
    scanf("%f", &z2);

    result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    printf("\nla distance entre deux points donnes dans un espace 3D : %.2f", result);

    printf("\n\n");
    return 0;
}
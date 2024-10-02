#include <stdio.h>

int main()
{

    int num, reverse_num, n1, n2, n3, n4;

    printf("Donner un entier de 4 numbre : ");
    scanf("%d", &num);

    n1 = num % 10;         // last number
    n2 = (num / 10) % 10;  // third number
    n3 = (num / 100) % 10; // second number
    n4 = num / 1000;       // first number

    printf("\n\nREVERSED NUMBER : %d%d%d%d", n1, n2, n3, n4);

    printf("\n\n");
    return 0;
}
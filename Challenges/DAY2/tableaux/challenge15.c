#include <stdio.h>

int main()
{
    int n;

    printf("Donner nombre des elemens : ");
    scanf("%d", &n);

    int t1[n];
    int t2[n];
    int t_fusion[n + n];

    int el = 1;
    for (int i = 0; i < n; i++)
    {
        printf("\nDonner | %d | nombre de t1 : ", el);
        scanf("%d", &t1[i]);

        printf("\nDonner | %d | nombre de t2 : ", el);
        scanf("%d", &t2[i]);

        el++;
    }

    for (int i = 0; i < n; i++)
    {
        t_fusion[i] = t1[i];
        t_fusion[i + n] = t2[i];
    }

    printf("\nTableau fusion : ");
    for (int i = 0; i < n + n; i++)
    {
        printf("%d ", t_fusion[i]);
    }

    return 0;
}
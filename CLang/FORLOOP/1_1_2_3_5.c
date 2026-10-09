#include <stdio.h>

int main()
{
    int n, i, a1 = 1, a2 = 2, a3;

    printf("enter tha value of i:>> ");
    scanf("%d", &n);

    printf("%d ", a1);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a1);
        a3 = a1 + a2;
        a1 = a2;
        a2 = a3;
    }

    return 0;
}

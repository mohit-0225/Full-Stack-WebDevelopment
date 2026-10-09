#include <stdio.h>
int main()
{
    int n, i=1;

    printf("enter tha n:>>");
    scanf("%d", &n);

    do
    {
        printf(" \t %d", i * i);
        i++;
    } while (i <= n);

    return 0;
}
#include<stdio.h>
int main()
{
    int n,i;

    printf("enter tha n:>>");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        printf(" \t %d",i*i);
    }
    return 0;
}
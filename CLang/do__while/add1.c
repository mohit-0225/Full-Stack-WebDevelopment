#include <stdio.h>
int main()
{
    float a = 0.5,b=0 ;
    int i, n;

    printf("enter tha n:>>");
    scanf("%d", &n);

    printf(" \t %.1f", a);
    b=a+a;
    a++;

    i = 0;
    do
    {
        printf(" \t %.1f", b);
        b=b+a;
        a++;
        i++;
    }while (i < n);
    

    return 0;
}
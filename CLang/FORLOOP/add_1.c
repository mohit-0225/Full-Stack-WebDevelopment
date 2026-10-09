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

    for (i = 0; i < n; i++)
    {
       
        printf(" \t %.1f", b);
        b=b+a;
        a++;
        
    }

    return 0;
}
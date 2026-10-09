#include<stdio.h>
int main()
{
    int a;

    printf("enter tha value of A :>> ");
    scanf("%d",&a);

    if(a<0)
    {
        printf("tha A is nagative number");
    }
    if(a>0)
    {
        printf("A is positive number");
    }
    if(a==0)
    {
        printf("tha a is zero");
    }

    return 0;
}
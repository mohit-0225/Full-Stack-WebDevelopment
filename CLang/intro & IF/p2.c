#include<stdio.h>
int main()
{
    int a,ans;

    printf("enter tha value of A:");
    scanf("%d",&a);

    ans=a%5;

    if(ans==1)
    {
        printf("tha A is not divaidable");
    }
    else
    {
        printf("tha a is divaidable");
    }
    return 0;
}
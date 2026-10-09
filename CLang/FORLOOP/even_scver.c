#include<stdio.h>
int main()
{
    int i,n;
    printf("enter tha i:>");
    scanf("%d",&n);
    for ( i = 1; i<=n; i++)
    {
        if (i%2==1)
        {
            printf("\t%d",i);
        }
        else
        {

            printf("\t%d",i*i);
        }
        
        
    }
    

    return 0;
}
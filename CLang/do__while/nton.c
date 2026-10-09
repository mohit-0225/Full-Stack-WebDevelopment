#include<stdio.h>
int main()
{
    int i,n;
    printf("enter tha n:>");
    scanf("%d",&n);
    i = -n;
    do
    {
        printf("\t%d",i);
        i++;
       
    }while (i<=n);
    
    
    

    return 0;
}
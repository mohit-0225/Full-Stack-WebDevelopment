#include<stdio.h>
int main()
{
    // int i,n,a=1;
    // printf("enter tha i:>");
    // scanf("%d",&n);
    // for ( i = 1; a<=n; i++)
    // {
         
    //     printf("\t%d",a);
    //      a=a*2;
    // }

    
    // for (int i = 1; i <= 10; i++)
    // {
    //     if(i%2==1)
    //         printf("%d\t",i*i);
    //     else
    //         printf("%d\t",i);
    // }
    
    // float n=0,i;
    // for (i = 1; i <= 10; i++)
    // {
    //     printf("%.2f\t",n);
    //     n+=i;

    // }
    
    // char ch=1 
    int ch=64;
    for (int i = 1; i <= 26; i++)
    {
        printf("%c\t",i+ch);    
        printf("%c\t\n",i+ch+32);    
    }



    return 0;
}
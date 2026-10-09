#include<stdio.h>
int main()
{
    int n=1;
    while (n<=10)
    {
        if(n%2==0)
        printf(" \t %d",n*n);
        else
        printf("\t %d",n);
        n++;
    }

    return 0;
    

}
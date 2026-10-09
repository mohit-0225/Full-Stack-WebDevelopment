#include<stdio.h>
int main()
{
    int n,i;
    printf("enter tha n:>>");
    scanf("%d",&n);
    i=n;
    do{
        printf(" \t %d",i);
        i--;
    }while(i>=1);
    return 0;   
}
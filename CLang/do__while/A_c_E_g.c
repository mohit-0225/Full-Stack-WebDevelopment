#include<stdio.h>
int main()
{
    int i=1;
    while (i < 26)
    {
        if(i%2==1)
        printf(" \t %c",i+64); 
        else
        printf(" \t %c",i+96);
        i++;
    }
    return 0;
    
}
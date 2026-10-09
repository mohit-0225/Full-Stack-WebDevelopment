#include<stdio.h>

int main()
{
    char i;
  
    
    i = 65;
    do
    {
        if(i%2)
        printf("\t%c",i);
        i++;
    } while (i<=90);
    

    return 0;
}
#include<stdio.h>
int main()
{
    char i;
  
    for ( i = 65; i<=90; i++)
    {
       if(i%2)
        printf("\t%c",i);
    }
    

    return 0;
}
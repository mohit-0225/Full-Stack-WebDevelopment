#include <stdio.h>
int main()
{
    int i, n;
    char ch = 65;
    printf("enter tha i:>");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            if (ch % 2 == 1)
            {
                printf("\t%c ", ch);
                ch++;
            }
            
        }
        else if (i % 2 == 0)
        {
            if (ch % 2 == 1)
                printf("\t%c", ch + 32);
                ch++;
        }

        ch++;
    }



    // int i;
    // for ( i = 1; i < 26; i++)
    // {   
    //     if(i%2==1)
    //     printf(" \t %c",i+64); 
    //     else
    //     printf(" \t %c",i+96);

    // }
    

    return 0;
}
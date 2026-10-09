#include <stdio.h>
int main()
{
    int i=1, j;

    

    while (i<=3)
    {
        j=1;
        while (j<=7)
        {

            printf(" *");
            j++;
        }
        printf("\n");
        i++;
    }
    
    return 0;
}
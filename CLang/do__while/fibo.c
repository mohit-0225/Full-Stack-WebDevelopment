#include <stdio.h>

int main()
{
    int n=10, i=1, a1 = 1, a2 = 2, a3;

    


    printf("%d ", a1);
    while (i <= n)
    {
        printf("%d ", a1);
        a3 = a1 + a2;
        a1 = a2;
        a2 = a3;
        i++;
    }
    

    return 0;
}

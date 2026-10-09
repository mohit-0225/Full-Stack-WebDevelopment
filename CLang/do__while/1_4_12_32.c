#include <stdio.h>
int main()
{
    int i, a = 1, b;

    
    i = 1;
    while (i <= 10)
    {
        b = i * a;
        a *= 2;
        printf(" \t %d", b);
        i++;
    }

    return 0;
}
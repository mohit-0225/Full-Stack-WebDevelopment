#include <stdio.h>
int main()
{
    int i, a = 1, b;

    for (i = 1; i <= 10; i++)

    {
        b = i * a;
        a *= 2;
        printf(" \t %d", b);
    }
    return 0;
}
#include <stdio.h>
void odd(int a)
{
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 1)
            printf("\n %d", i);
    }
}
int main()
{
    int a;
    printf("enter tha number :>");
    scanf("%d", &a);

    odd(a);
    return 0;
}